//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Declaração de Variaveis
float idade = 0;
float idadeSemanas = 0;


void setup()
{
	Serial.begin(9600);
}


void loop()
{
  //Entrada
   Serial.println("Digite sua idade em anos");
   while(! Serial.available() );
   idade = Serial.parseInt();
  
  //Processamento
   idadeSemanas = idade * 12;

  
 
  //saida
  Serial.println("idade em Semanas: " + String(idadeSemanas) );
  delay (1000);
  
  
  
  
}