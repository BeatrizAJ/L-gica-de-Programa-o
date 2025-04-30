//C++
//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.


// Declaração de variáveis
String nome = "";
float centimetros = 0;
float polegada = 0;

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
 //pedir o nome para o usuário
  
   Serial.println("Qual e o cm?");//mostra uma mensagem na tela (via serial)
   while( ! Serial.available() );//espera o usuário digitar
   centimetros = Serial.parseInt();//guarda o texto que o usuário digitou na variável nome
 
  
   
  float polegadas = centimetros/2.54;
  
  //exibir os dados na serial 
  Serial.println("medida em polegadas : " + String (polegadas) );
  
}