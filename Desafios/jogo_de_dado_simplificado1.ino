// C++ code
//
void setup()
{
 Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randomica para evitar o mesmo valor
}

void loop()
{
  Serial.println(" ");
  Serial.println(" ");
  Serial.println("--- PROGRAMA DE JOGO DE DADO ---");
  Serial.println(" ");
  Serial.println(" ");
  
  //PEDIR O PALPITE DE USUARIO
  Serial.println("Digite um palpite de 1 a 6");
  while(!Serial.available());
  int palpite = Serial.parseInt();
    
  
  //SORTEAR DO DADO
  int numeroSorteado = random(1, 7);//gera um numero aleatorio entre 1 e 6


  //mostrar o resultado
  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero do dado: " + String(numeroSorteado));

  //se acertou dar os parabens se nao, que pena...
  if(palpite == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou!"); 
  } else {  
    Serial.println("Que pena, tente outra vez!");
  }


  delay(1000);
}  




