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
  // função(ml);


  // Debug loop
  Serial.println(profundidade);
  Serial.println(ml);
}
