// C++ code
//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.


// Declaração de variáveis
float centimetro = 0;

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
 //pedir o nome para o usuário
  
   Serial.println("Qual e o polegada?");//mostra uma mensagem na tela (via serial)
   while( ! Serial.available() );//espera o usuário digitar
  centimetro = Serial.parseInt ();
 
  
   
  float polegada = centimetro * 2.54;
  
  //exibir os dados na serial 
  Serial.println("medida em centimetros : " + String (polegada) );
  
}