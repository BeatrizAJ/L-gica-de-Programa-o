/*

Criar um protótipo com 3 leds: verde, vermelho e amarelo.
Crie um menu com Do While que solicite ao usuário qual led ele quer acender ou apagar,
com suas devidas funcionalidades, da seguinte forma:

1) Ligar Led Verde
2) Desligar Led Verde
3) Ligar Led Amarelo
4) Desligar Led Amarelo
5) Ligar Led Vermelho
6) Desligar Led Vermelho
7) Ligar Todos os Leds
8) Desligar Todos os Leds
0) Sair


*/
//VARIAVEIS
int ledVermelha= 13;
int ledVerde= 12;
int ledAmarelo= 8;


void setup()
{
  pinMode(ledVermelha, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);        

  Serial.begin(9600);

  digitalWrite(ledVermelha, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);

  int opcao;

  //pedir o nome para o usuário
  do {  
    Serial.println("---- BEM VINDO ----");//mostra uma mensagem na tela (via serial)
    Serial.println(" OLA - QUAIS DAS SEGUINTES OPCOES GOSTARIA??? >:D");  
    Serial.println("   1 - LIGAR LED VERDE  ");
    Serial.println("   2 - DESLIGAR LED VERDE  ");
    Serial.println("   3 - DESLIGAR LED VERDE  ");
    Serial.println("   4 - LIGAR LED AMARELO ");
    Serial.println("   5 - DESLIGAR LED AMARELO ");
    Serial.println("   6 - DESLIGAR LED VERMELHO ");
    Serial.println("   7 - LIGAR TODOS OS LEDS ");
    Serial.println("   8 - DESLIGAR TODOS OS LEDS ");
    Serial.println("   0 - SAIR ");


    while( !Serial.available());
    opcao = Serial.parseInt();

    switch(opcao){

      case 1: // Ligar Led Verde

      digitalWrite(ledVerde, HIGH);
      Serial.println("LED VERDE LIGADO! :0");

      break;

      case 2: //Desligar Led Verde

      digitalWrite(ledVerde, LOW);
      Serial.println("LED VERDE DESLIGADO! :0");

      break;

      case 3: //Ligar Led Amarelo

      digitalWrite(ledAmarelo, HIGH);
      Serial.println("LED AMARELO LIGADO! :0");

      break;


      case 4: //Desligar Led Amarelo

      digitalWrite(ledAmarelo, LOW);
      Serial.println("LED AMARELO DESLIGADO! :0");

      break;

      case 5: //Ligar Led Vermelho

      digitalWrite(ledVermelha, HIGH);
      Serial.println("LED VERMELHO LIGADO! :0");

      break;

      case 6: //Desligar Led Vermelho

      digitalWrite(ledVermelha, LOW);
      Serial.println("LED VERMELHO DESLIGADO! :0");

      break;

      case 7: //Ligar Todos os Leds

      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVerde, HIGH);
      digitalWrite(ledVermelha, HIGH);
      Serial.println("LIGlAR TODOS OS LEDS!! :0");

      break;

      case 8: //Desligar Todos os Leds

      digitalWrite(ledVerde, LOW);
      digitalWrite(ledVermelha, LOW);
      digitalWrite(ledAmarelo, LOW);

      Serial.println("DESLIGAR TODOS OS LEDS! <:0");

      break;

      case 0: //Sair

      Serial.println("SAIR DO PROGRAMA ! >:0");

      break;

      default:
      Serial.println("Opcao invalida! Escolha uma opcao do 0 ao 8. >:(");
    }

  }
  while (opcao != 0);
}


void loop()
{

  delay(1000);
}


