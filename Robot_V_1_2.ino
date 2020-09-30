/* ***********************************************************/
// by Francisco Tomé Neto - ToTboT  
// Data: 08/06/2020 - V.1.1
// Amazônia - Brasil - PT-BR
/*************************************************************/
// Baseado nos códigos de:
// Ronilson dos Santos Bezerra - http://www.ronilson.com.br ;
// Leonardo Campbell - https://seurobo.com.br/ ;
// Marlon Nardi - https://www.marlonnardi.com ;
// Emerson Carvalho do canal PontoCanal no Youtube ; 
// Flávio Guimarães do Canal Brincando com Ideias ;
/* ************************************************************/

//BIBLIOTECA(S)
#include <Servo.h>                                 // Incluindo biblioteca de controle do servo motor. 
#include "Adafruit_VL53L0X.h"                      // Incluindo biblioteca de controle do sensor a laser. 
#include <Wire.h>                                  // Incluindo biblioteca de gerenciamento os dispositivos através do protocolo I2C. 
#include <LiquidCrystal_I2C.h>                     // Incluindo biblioteca de controle do LCD. 

#define endereco  0x3F                             // Enderecos comuns do LCD: 0x27, 0x3F, mas eh importante rodar o teste das portas I2C para certificar em que porta estah o LCD
#define colunas   16                               // Definindo o nº de colunas do LCD usado
#define linhas    2                                // Definindo o nº de linhas do LCD usado

LiquidCrystal_I2C lcd(0x3F, 16, 2);                // Instanciando o LCD
Servo MeuServoMotor;                               // Criando um objeto da classe Servo 
Adafruit_VL53L0X lox = Adafruit_VL53L0X();         // Definição do padrão de execução do sensor de obstáculos a laser

// Variaveis de configuração de pinagens
int IN1 = 2 ;                                      // Variavel Pinagem motor_A
int IN2 = 4 ;                                      // Variavel Pinagem motor_A
int velocidadeA = 3;                               // Variavel de controle de velocidade do motor_A
int IN3 = 6 ;                                      // Variavel Pinagem motor_B
int IN4 = 7 ;                                      // Variavel Pinagem motor_B
int velocidadeB = 5;                               // Variavel de controle de velocidade do motor_B
int ServoMotorPin  = 10;                           // Variável de Pinagem do Servo Motor. 
int pos = 0;                                       // Variável para armazenar a posição do servo

// Variaveis Globais usadas nas estruturas de decisão 
float DistanciaDireita, DistanciaEsquerda, DistanciaFrente; // Variaveis para comparação das Distancias (LD_Direito e LD_Esquerdo)
float Distancia = 0.00;                             // Variavel de armazenamento da maior distancia

void setup(){
  Serial.begin(9600);                              //Inicia a Portal Serial na velocidade de 9600
  MeuServoMotor.attach(ServoMotorPin);             // Associando o pino ao objeto da classe Servo
  MeuServoMotor.write(0);                          // Ajusta a posição do servo motor em 0º
  delay(1000);                                     // Aguarda 1 segundo
  MeuServoMotor.write(180);                        // Ajusta a posição do servo motor em 180º
  delay(1000);                                     // Aguarda 1 segundo
  MeuServoMotor.write(90);                         // Ajusta a posição final do servo motor em 90º
  lcd.init();                                      // Inicia a comunicacao com o LCD
  lcd.backlight();                                 // Liga a iluminacao do Display do LCD
  lcd.clear();                                     // Limpa o Display  
  delay(1000);                                     // Aguarda 1 segundo para iniciar a mensagem de distancia no Display do LCD
  Wire.begin();                                    // Inicia o carregamento do sensor a laser

  if (!lox.begin()) {                              // Condicional para verifica se ha falha de boot no sensor.
    lcd.print(F("Falha no Sensor "));              // Se houver falha de boot, ele mostra a mensagem de "Falha no Sensor"
  while(1);                                           
  }
pinMode(IN1,OUTPUT);                               // Configura o Pino de controle de giro do motor IN1 como saída 
pinMode(IN2,OUTPUT);                               // Configura o Pino de controle de giro do motor IN2 como saída 
pinMode(IN3,OUTPUT);                               // Configura o Pino de controle de giro do motor IN3 como saída 
pinMode(IN4,OUTPUT);                               // Configura o Pino de controle de giro do motor IN4 como saída 
pinMode(velocidadeA,OUTPUT);                       // Configura o Pino de velocidade do motor ENA como saída
pinMode(velocidadeB,OUTPUT);                       // Configura o Pino de velocidade do motor ENB como saída
delay(3000);                                       // Aguarda 3 segundos para iniciar
}
void loop()
{
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false);                // Altera o modo para 'true' para que seja impresso os dados de distancia no LCD
   
   if (measure.RangeStatus != 3) {                 // Condicao para correta impressao dos dados de distancia no display e para tomada de decisão
      Serial.println(measure.RangeMilliMeter);
      DistanciaFrente = measure.RangeStatus;
      Distancia = (measure.RangeMilliMeter/10);                                             // Conversão direta dos dados de milimetros para centimetros
      lcd.clear();                                 // Limpa o display do LCD
      lcd.setCursor(0, 0);                         // Posiciona o Cursor na primeira coluna da primeira linha
      lcd.print("Dist Apx ");                      // Mostra a mensagem abreviada de Distancia Aproximada
      lcd.print(measure.RangeMilliMeter);      // Mostra a informação armazenada na variável Distancia já convertida em centimetros
      lcd.print(" cm");                            // Mostra,no LCD, depois do dado da distancia a abreviatura padrao para centimetros
      lcd.setCursor(0, 1);                         // Posiciona o Cursor na primeira coluna da segunda linha
      lcd.print("Dist Apx ");                      // Mostra a mensagem abreviada de Distancia Aproximada
      lcd.print(measure.RangeMilliMeter);      // Mostra a informação armazenada na variável Distancia em milimetros
      lcd.print(" mm");                            // Mostra,no LCD, depois do dado da distancia a abreviatura padrao para milimetros
      delay(100);                                  // Verifica se há obstaculos em menos de 1 metro a cada 100 milesimos de segundos
  } else {                                          
      lcd.setCursor(0, 0);                          // Posiciona o Cursor na primeira coluna da primeira linha
      lcd.print("Caminho Livre");                   // Mostra a mensagem "Caminho Livre" indicando que ele não vê obstaculos nos proximos 1 metro
      lcd.setCursor(0, 1);                          // Posiciona o Cursor na primeira coluna da segunda linha
      lcd.print("Fora do Alcance");                 // Mostra a mensagem "Fora de Alcance" indicando que os obstaculos estão fora do seu alcance(acima de 1 Metro)
  } if (Distancia > 300 && (measure.RangeMilliMeter != 0)){     // verifica se a distancia do obstáculo eh menor que 30 cm.
        Serial.println("Para Frente");
        //Frente();                                       // Se houver algum obstaculo em menos de 30 cm verifica a direção a ser tomada atraves da função direcao.
  } else  {
    Serial.println("Direção");                       // Caso não haja obstáculo em menos de 30cm o computador seguirá em frente
   // Direcao();                                      // Robô seguira em Frente.
  }
 }/*
void Direcao() {                                    // Função capturar as distancias de cada sentido (direita x esquerda)
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false);                // Altera o modo para 'true' para que seja impresso os dados de distancia no LCD
  if (measure.RangeStatus != 4) {                 // Condicao para correta impressao dos dados de distancia no display e para tomada de decisão
      DistanciaFrente = measure.RangeStatus;
     // Distancia = (measure.RangeMilliMeter/10); 
  Parar ();                                         // O robô Para
  ParaTras ();                                      // O robô vai para tras(Opcional)
  Parar ();                                         // O robô Para (Opcional, se a chamada da função ParaTras() for executada)
  
  MeuServoMotor.write (180);                        // Gira o Servo com o sensor para a posição 180 graus
  delay (300);                                      // Aguarda 300 milisegundos
  DistanciaEsquerda = (measure.RangeMilliMeter/10);                   // Carrega a variavel de distancia a esquerda
  
  MeuServoMotor.write (0);                          // Gira o Servo com o sensor para a posição 0 grau                                     
  delay (300);                                      // Aguarda 300 milisegundos
  DistanciaDireita = (measure.RangeMilliMeter/10);                     // Carrega a variavel de distancia a direita

  MeuServoMotor.write (90);                         // Gira o Servo com o sensor para a posição 90 graus
  delay (200);                                      // Aguarda 200 milisegundos
  CompareDistance ();                               // Executa a função que compara a distancia a ser seguida (Aquela que tiver os obstáculos mais distantes).                          
  } 
}
void CompareDistance (){         
  if (DistanciaDireita > DistanciaEsquerda){        // Compara se os obstáculos a Direita estão mais distantes que os obstáculos a Esquerda.
      VireaDireita();                               // Caso o caminho a Direita esteja mais desobstruído, o robô vai virar a Direita 
  } else if (DistanciaEsquerda > DistanciaDireita){ // Compara se os obstáculos a Esquerda estão mais distantes que os obstáculos a Direita.                                       
      VireaEsquerda();                              // Caso o caminho a Esquerda esteja mais desobstruído, o robô vai virar a Esquerda                                      
  } else {                                          // Caso os obstáculos estejam equidistantes 
      RetorneD(); //RetorneE();                     // O robô dará meia volta, girando pela direita (e poderá girar a Esquerda, basta exluir o "//" e coloca-los a frente da chamada da função "RetorneD()" 
  }
}
void Parar(){                                        // Função para fazer o Robô parar
  lcd.clear();                                       // Limpa o display do LCD
  lcd.setCursor(0,0);                                // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");                            // Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW);                             // Sentido horario do Motor LD Direito desligado
  digitalWrite(IN2,LOW);                             // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN3,LOW);                             // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN4,LOW);                             // Sentido anti-horario do Motor LD_Esquerdo desligado
  delay(200);                                        // Aguarda um tempo parado
}
void Frente(){                                       // Função para fazer o robô andar para frente
  lcd.clear();                                       // Limpa o display do LCD
  lcd.setCursor(0,0);                                // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Para Frente!!!");                       // Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW);                             // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN2,HIGH);                            // Sentido horario do Motor LD_Direito ligado
  digitalWrite(IN3,LOW);                             // Sentido anti-horario do Motor LD_Esquerdo desligado
  digitalWrite(IN4,HIGH);                            // Sentido horario do Motor LD_Esquerdo ligado
  analogWrite(velocidadeA,250);                      // Determina a velocidade do  Motor LD_Direito
  analogWrite(velocidadeB,100);                      // Determina a velocidade do Motor LD_Esquerdo                     
} 
void ParaTras(){                                     // Função que faz o robô andar para trás e emite som quando ele dá ré
  lcd.clear();                                       // Limpa o display do LCD
  lcd.setCursor(0,0);                                // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Para Tras!!!");                         // Mostra a mensagem de status dos motores
  digitalWrite(IN1,HIGH);                            // Sentido anti-horario do Motor LD_Esquerdo ligado
  digitalWrite(IN2,LOW);                             // Sentido horario do Motor LD Esquerdo desligado
  digitalWrite(IN3,HIGH);                            // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,LOW);                             // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,250);                      // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,120);                      // Determina a velocidade do Motor LD_Direito             
  delay(500);                         
}
void VireaDireita(){                                 // Função que faz o robô virar à direita
  lcd.clear();                                       // Limpa o display do LCD
  lcd.setCursor(0,0);                                // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Direita!!!");                           // Mostra a mensagem de status dos motores
  digitalWrite(IN1,HIGH);                            // Sentido anti-horario do Motor LD Esquerdo ligado
  digitalWrite(IN2,LOW);                             // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW);                             // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,HIGH);                            // Sentido horario do Motor LD_Direito ligado
  analogWrite(velocidadeA,180);                      // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,200);                      // Determina a velocidade do Motor LD_Direito
  delay(750);                                        // Ajustar até que o carro vire em um angulo de 90º. Usar testes de motores para acertar o Ajuste.
}
void VireaEsquerda(){                                // Função que faz o robô virar à esquerda
  lcd.clear();                                       // Limpa o display do LCD
  lcd.setCursor(0,0);                                // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Esquerda!!!");                          // Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW);                             // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,HIGH);                            // Sentido horario do Motor LD_Esquerdo ligado
  digitalWrite(IN3,HIGH);                            // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,LOW);                             // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,250);                      // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,160);                      // Determina a velocidade do Motor LD_Direito
  delay(750);                                        // Ajustar até que o caro vire em um angulo de 90º                          
}
void RetorneD(){                                     //Função para o robô virar para o outro lado(retorno pela Direita)   
  lcd.clear();                                       // Limpa o display do LCD
  lcd.setCursor(0,0);                                // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Retorno!!!");                           // Mostra a mensagem de status dos motores
  digitalWrite(IN1,HIGH);                            // Sentido anti-horario do Motor LD Esquerdo ligado
  digitalWrite(IN2,LOW);                             // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW);                             // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,HIGH);                            // Sentido horario do Motor LD_Direito ligado
  analogWrite(velocidadeA,250);                      // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,120);                      // Determina a velocidade do Motor LD_Direito
  delay(900);                                        // Ajustar até que o caro vire em um angulo de 180º 
}
void RetorneE() {                                    //Função para o robô virar para o outro lado(retorno pela Esquerda)
  lcd.clear();                                       // Limpa o display do LCD
  lcd.setCursor(0,0);                                // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Giro a Esquerda!!");                    // Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW);                             // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,HIGH);                            // Sentido horario do Motor LD_Esquerdo ligado 
  digitalWrite(IN3,HIGH);                            // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,LOW);                             // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,160);                      // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,180);                      // Determina a velocidade do Motor LD_Direito
  delay(900);                                        // Ajustar até que o caro vire em um angulo de 180º 
  } */              
