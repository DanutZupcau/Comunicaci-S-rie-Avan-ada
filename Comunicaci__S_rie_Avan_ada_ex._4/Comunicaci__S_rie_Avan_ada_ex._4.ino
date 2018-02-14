/**************************************************************
**                                                           **
**              TÍTOL: Comunicació Sèrie Avançada            **
**                                                           **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 05/02/2018    **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
long num;

//******************* SETUP ****************************
void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.println("Entrar un numero?");
}

//******************* LOOP *****************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    num = Serial.parseInt(); 
    Serial.print("El ");
    Serial.print(num);
    
    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') { 
      
      if ( num % 2 == 0){
        Serial.println(" es parell.");
      }
      else{
        Serial.println(" es imparell.");
      }
      Serial.println("");
      Serial.println("Entrar un numero?");
    }
  }
}

//******************* FUNCIONS **************************
