/* This example shows how to take
range measurements with the VL53L0X and display on a Liquid Crystal-I2C.
The range readings are in units of cm and mm. */
/* ***************************************************************************************/
// by Francisco Tomé Neto - ToTboT - 04/06/2020 - V.1.0 - Amazônia - Brasil
/*****************************************************************************************/
#include "Adafruit_VL53L0X.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Definições padrão do LCD de 16 colunas com 2 linhas
#define endereco  0x3F // Endereços comuns: 0x27, 0x3F, mas é importante rodar o teste das portas I2C para certificar em que porta está o LCD
#define colunas   16
#define linhas    2

LiquidCrystal_I2C lcd(0x3F, 16, 2);// Instanciando o LCD

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup()
 {
  Serial.begin(9600); //inicia a porta serial na velocidade de 9600
  lcd.init(); // Inicia a comunicação com o LCD
  lcd.backlight(); // Liga a iluminação do Display do LCD
  lcd.clear(); // Limpa o Display  
  delay(1000); //Aguarda 1 segundo para iniciar a mensagem de distancia no Display do LCD
  Wire.begin(); //inicia o carregamento do sensor a lazer

  if (!lox.begin()) {
    lcd.print(F("Falha no Sensor "));//Verifica se há falha no boot no sensor. Se houver ele mostra a mensagem de falha no Sensor
    while(1);
  }
}
void loop()
{
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false); // Altera o modo para 'true' para que seja impresso os dados de distancia no LCD

  if (measure.RangeStatus != 4) {  // Condição para correta impressão dos ados de distancia no display de LCD
      lcd.clear(); // Limpa o display do LCD
      lcd.setCursor(0, 0); // Posiciona o Cursor na primeira coluna da primeira linha
      lcd.print("Dist Apx ");// Mostra a mensagem abreviada de Distancia Aproximada
      lcd.print(measure.RangeMilliMeter/10);// Converte, direto, milimetros em centímetros
      lcd.print(" cm");// Mostra,no LCD, depois dos numeros da distancia a abreviatura padrão de centímetros
      lcd.setCursor(0, 1); // Posiciona o Cursor na primeira coluna da segunda linha
      lcd.print("Dist Apx ");// Mostra a mensagem abreviada de Distancia Aproximada
      lcd.print(measure.RangeMilliMeter);//mostra a distancia em milimetros
      lcd.print(" mm");// Mostra,no LCD, depois dos numeros da distancia a abreviatura padrão de centímetros
      Serial.println();
      delay(1000);
  } else {
    //Mostra no lcd a mensagem "Fora de Alcance" quando o obstáculo estiver a uma distancia acima de 1 metro;
    lcd.setCursor(0, 0);
    lcd.print("Fora de Alcance");
    lcd.setCursor(0, 1);
    lcd.print("Fora de Alcance");
    return;
    }
  }
