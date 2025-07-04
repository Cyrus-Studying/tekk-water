// Importações fofinhas UwU
#include "TM1637Display.h"
#define CLK 10
#define DIO 9


// Variáveis
int profundidade;
float ml;
bool start;
int todosOsMl;
int cmParaMl;


void setup(){
  // Definindo as variáveis
  profundidade = 0;
  start = true;
  ml = 0;
  todosOsMl = 10000;
  cmParaMl = 400;
  TM1637Display display(CLK, DIO);


  // Debug profundidade
  Serial.print("Começou com profundidade de: ");
  Serial.println(profundidade);


  // Debug ml
  Serial.print("Começou com quantidade de ml =  ");
  Serial.println(ml);
}


void loop(){
  // Calculando ml
  // função()
  // profundidade = var-resulante
  ml = profundidade * cmParaMl;
  

  // Display ml
  display.setBrightness(0x0f);
  display.showNumberDec(ml);


  // If(ml)
  if(){
    
  }
  
  // Debug loop
  Serial.println(profundidade);
  Serial.println(ml);
}
