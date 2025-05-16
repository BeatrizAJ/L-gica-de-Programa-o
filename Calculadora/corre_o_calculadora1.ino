int escolhaDaOperacao;
float resultado; //Irá guardar o resultado do calculo da respectiva operação




//ESTRUTURA: tipoRetorno nomeDaFunção parametros corpo
  float somar(float numero1param, float numero2param = 0){
  resultado = numero1param + numero2param;
 
}


void dividir (float numero1param, float numero2param = 0){
  resultado = numero1param / numero2param;
 
}

void subtrair (float numero1param, float numero2param = 0){
  resultado = numero1param - numero2param;
 
}

void multiplicar (float numero1param, float numero2param = 0){
  resultado = numero1param * numero2param;
 
}


void setup()
{
 Serial.begin(9600);
  
  int contador = 0; //variavel inicializadora do 'do while'
  float numero1; //variavel local
  float numero2;
  
  
  do{
    Serial.println("Bem vindo a super mega calculadora inteligente :P!!!\n");
    Serial.println("Escolha uma das operacoes a seguir:");
    Serial.println("1- Somar");
    Serial.println("2- Dividir");
    Serial.println("3- Subtrair");
    Serial.println("4- Multiplicar");
    while(!Serial.available() ){}
    escolhaDaOperacao = Serial.parseInt();
    
    
    
    
    Serial.println("Para conseguirmos fazer a operacaoo matematica, precisamos que voce digite 2 numeros");
    Serial.println("Digite o 1o numero:");
    while(!Serial.available() ){}
    numero1 = Serial.parseFloat(); 
    
    Serial.println("Digite o 2o numero:");
    while(!Serial.available() ){}
    numero2 = Serial.parseFloat(); 
    /*
    if (escolhaDaOperacao == 1){}
    else if (escolhaDaOperacao == 2){}
    else if (escolhaDaOperacao == 3){}
    else if (escolhaDaOperacao == 4){}
    */
    
    switch(escolhaDaOperacao){
      
      case 1: //SOMAR
       
       float retornoFuncaoSomar;
      retornoFuncaoSomar = somar(numero1, numero2);
      Serial.println(retornoFuncaoSomar);
     
       break;
      
      case 2: //DIVISÃO
       resultado = numero1 / numero2;
      Serial.println("Wow!!! O resultado da divisao foi:" + String(resultado));
      
       break;
     
      case 3: //SUBITRAÇÃO
      resultado = numero1 / numero2;
      Serial.println("Wow!!! O resultado da subtracao foi:" + String(resultado));
       
      break;
      
      
      case 4: //MULTIPLICAÇÃO
    resultado = numero1 / numero2;
    Serial.println("Wow!!! O resultado da multplicacao foi:" + String(resultado));
  
    break;
      
      default:
      Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4. ;)");
    }
    
    
    Serial.println("Voce deseja voltar ao menu? Digite sim ou nao (em minusculo, por favor) >:( .");
    while(!Serial.available() );{
      contador = Serial.parseInt();} 
    
    if(Serial.readString() == "sim" ){
     contador = 1;
    }
    else{
     contador = 0;
      
      Serial.println("Ate breve! ;) ");
      Serial.println("Caso queira voltar ao menu, reinicie o programa! >:)");
    }
}
  while(contador != 0); //Se o contador foi diferente de 0, o mesmo repete.
}

void loop()
{
  //sem insruções
}