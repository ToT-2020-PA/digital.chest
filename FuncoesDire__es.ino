/*******************************************************************************************/
// por Francisco Tomé Neto - ToTboT - 10/04/2020 - V.1.0 - Amazônia - Brasil
/*******************************************************************************************/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define endereco  0x3F// Endereços comuns: 0x27, 0x3F, mas eh importante rodar o teste das portas I2C para certificar em que porta estah o LCD
#define colunas   16
#define linhas    2

LiquidCrystal_I2C lcd(0x3F, 16, 2);// Instanciando o LCD

//Pinagem dos motores LD Esquerdo (IN1 e IN2)e LD Direito(IN3 e IN4) - Arduino Nano V3.0
int IN1 = 2;
int IN2 = 4; 
int IN3 = 6; 
int IN4 = 7; 
int velocidadeA = 3;
int velocidadeB = 5;
 
void setup(){
  Serial.begin(9600);//Inicia a Portal Serial
  lcd.init();// Inicia a comunicacao com o LCD
  lcd.backlight();// Liga a iluminacao do Display do LCD
  lcd.clear();// Limpa o Display  
  delay(1000);//Aguarda 1 segundo para ligar o LCD
  
  //Inicializa Pinos
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(velocidadeA,OUTPUT);
  pinMode(velocidadeB,OUTPUT);
  lcd.setCursor(0,0);// Posiciona o Cursor na terceira coluna da primeira linha
  lcd.print("Pinos OK!!!");// Mostra a mensagem dos pinos do motor setados
  delay(7000);//Aguarda 7 segundos para iniciar a operar
}

void loop(){
  // Para Frente
  lcd.clear();
  lcd.setCursor(0,0);// Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Para Frente!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW);// Sentido anti-horario do Motor LD_Esquerdo ligado
  digitalWrite(IN2,HIGH);// Sentido horario do Motor LD Esquerdo desligado
  digitalWrite(IN3,LOW);// Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,HIGH);// Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,175);// Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,180);// Determina a velocidade do Motor LD_Direito
  delay(500);

  //Parado
  lcd.clear();
  lcd.setCursor(0,0);// Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW);// Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW);// Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW);// Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW);// Sentido horario do Motor LD_Direito desligado
  delay(3000);

  //Virar a Esquerda
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Esquerda!!!");// Mostra a mensagem de status dos motores
  delay(5000);
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,HIGH); // Sentido horario do Motor LD_Esquerdo ligado
  digitalWrite(IN3,HIGH); // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,180); // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,150); // Determina a velocidade do Motor LD_Direito
  delay(550);//Ajustar até que o caro vire em um angulo de 90º
     
  //Parado
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  delay(3000);
    
  // Para Frente
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Para Frente!!!");  // Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD_Esquerdo ligado
  digitalWrite(IN2,HIGH); // Sentido horario do Motor LD Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,HIGH); // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,175); // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,180); // Determina a velocidade do Motor LD_Direito
  delay(500);

  //Parado
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  delay(3000);

  // Virar a Direita
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Direita!!!");// Mostra a mensagem de status dos motores
  delay(5000);
  digitalWrite(IN1,HIGH); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo ligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,HIGH); // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,150); // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,180); // Determina a velocidade do Motor LD_Direito
  delay(550);//Ajustar até que o caro vire em um angulo de 90º
  
  //Parado
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  delay(3000);

   // Para Frente
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Para Frente!!!");  // Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD_Esquerdo ligado
  digitalWrite(IN2,HIGH); // Sentido horario do Motor LD Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,HIGH); // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,175); // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,180); // Determina a velocidade do Motor LD_Direito
  delay(500);

  //Parado
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  delay(3000);

  // Giro pela Esquerda
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Giro a Esquerda!!");// Mostra a mensagem de status dos motores
  delay(5000);
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,HIGH); // Sentido horario do Motor LD_Esquerdo ligado 
  digitalWrite(IN3,HIGH); // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,150); // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,180); // Determina a velocidade do Motor LD_Direito
  delay(900);//Ajustar até que o caro vire em um angulo de 180º
  
  //Parado
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  delay(3000);

  // Para Frente
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Para Frente!!!");  // Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD_Esquerdo ligado
  digitalWrite(IN2,HIGH); // Sentido horario do Motor LD Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,HIGH); // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,175); // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,180); // Determina a velocidade do Motor LD_Direito
  delay(500);

  //Parado
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  delay(3000);

  // Giro pela Direita
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Giro a Direita!!");// Mostra a mensagem de status dos motores
  delay(5000);
  digitalWrite(IN1,HIGH); // Sentido anti-horario do Motor LD Esquerdo ligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,HIGH); // Sentido horario do Motor LD_Direito ligado
  analogWrite(velocidadeA,180); // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,150); // Determina a velocidade do Motor LD_Direito
  delay(800);//Ajustar até que o caro vire em um angulo de 180º
    
  //Parado
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  delay(3000);
  
  // Para Frente
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Para Frente!!!");  // Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD_Esquerdo ligado
  digitalWrite(IN2,HIGH); // Sentido horario do Motor LD Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito ligado
  digitalWrite(IN4,HIGH); // Sentido horario do Motor LD_Direito desligado
  analogWrite(velocidadeA,175); // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,180); // Determina a velocidade do Motor LD_Direito
  delay(500);

  //Parado
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Parado!!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  delay(3000);

  // Para Trás
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("Para Tras!!!");  // Mostra a mensagem de status dos motores
  digitalWrite(IN1,HIGH); // Sentido anti-horario do Motor LD_Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD Esquerdo ligado
  digitalWrite(IN3,HIGH); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito ligado
  analogWrite(velocidadeA,175); // Determina a velocidade do  Motor LD_Esquerdo
  analogWrite(velocidadeB,180); // Determina a velocidade do Motor LD_Direito
  delay(500);

  //Parado
  lcd.clear();
  lcd.setCursor(0,0); // Posiciona o Cursor na segunda coluna da primeira linha
  lcd.print("FINALIZADO!!");// Mostra a mensagem de status dos motores
  digitalWrite(IN1,LOW); // Sentido anti-horario do Motor LD Esquerdo desligado
  digitalWrite(IN2,LOW); // Sentido horario do Motor LD_Esquerdo desligado
  digitalWrite(IN3,LOW); // Sentido anti-horario do Motor LD_Direito desligado
  digitalWrite(IN4,LOW); // Sentido horario do Motor LD_Direito desligado
  delay(300000);
}
