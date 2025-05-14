
// While - Eh uma estrutura de repetição que so executa a repetição quando a condição for verdadeira




//A função SETUP() tem como objetivo de inicializar o programa. Podemos chamar de configuração
void setup()
{
  Serial.begin(9600);
  /* Variavel inicializadora
  - Tipos de dados (Principais)
  - INT  (numeros inteiros)
  - LONG (numeros inteiros -  eh um int commaior capacidade de armazenamento)
  - STRING (caracteres: alfanumericos e especiais)
  - FLOAT (numeros com casas decimais)
  - BOOL (true e false)
  */
  //Variavel inicializadora
  int contadorWhile = 1;//Variavel local
  
  while(contadorWhile <= 5){
  Serial.println(contadorWhile);
  contadorWhile++;
  
  // 2a - contadorWhile = contadorWhile + 1;  
  // 3a - contadorWhile += 2; (somar com um valor diferente do que 1)
   
  }
  
  /*operadores
  
  aritmetico: +,-,*,/,%
  logicos:
  - 
  
  */
  
  
}

//A função LOOP() tem como objetivo de repitir varias vezes o programa
void loop()
{
   
  //sem instrucoes
  
  
  
}