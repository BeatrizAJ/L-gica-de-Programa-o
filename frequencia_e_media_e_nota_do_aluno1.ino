// C++ code
//Você foi contratado para criar um sistema que analisa a situação de um aluno com base em suas notas e frequência.

//Variavies

float notaUm = 0;
float notaDois = 0;
float frequencia = 0;
float notaFinal = 0;



void setup()
{
  Serial.begin(9600); 
  
}


void loop() {

  //Entrada

  Serial.println("Insira a primeira nota:");
  while (!Serial.available());
  notaUm = Serial.parseFloat(); 

  Serial.println("Insira a segunda nota:");//;mostra msg na tela 
  while( !Serial.available() );//espera o usuário dar <Enter>
  notaDois = Serial.parseFloat();//transofrma a altura digitada em número 

  Serial.println("Insira a porcentagem de faltas:");
  while( !Serial.available() );
  frequencia = Serial.parseFloat();


  if(notaFinal<= 5){//maior ou igual a 6 ou menor que 5 / essa parte eu esqueci como escrevia e arrumava direitinho 
    Serial.println("REPROVADO"); 
  } else if (notaFinal>= 6) {
    Serial.println("APROVADO");

}


    //Calculo da nota 












  

  //exibir os dados na serial 
























