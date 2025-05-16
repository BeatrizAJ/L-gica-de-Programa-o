int tabuadaEscolhida;
int contador;
int resultado;  


  void setup()
{
  Serial.begin(9600);

  Serial.println("Bem vindo(a) a tabuada! ");
  Serial.println("Digite a tabuada que deseja: ");
  while(!Serial.available() ){}
  tabuadaEscolhida = Serial.parseInt();

  for (int contador = 1; contador <= 10; contador++){
    //2 X 1 = 2
    resultado = tabuadaEscolhida * contador;
    Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String(resultado));

  }
  
}




void loop()
{

}
