/**************************************************************
**                                                           **
**              TÍTOL: Comunicació Sèrie Avançada            **
**                                                           **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 05/02/2018    **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//******************* SETUP ****************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}

//******************* LOOP *****************************

void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
Serial.println(r1);
    r2 = Serial.parseInt();
Serial.println(r2);
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
      rSerie = r1 + r2;
   Serial.print("Resistència en sèrie: ");
   Serial.print(rSerie);
   Serial.println(" Ω");
   rParalel = ((r1 * r2)/(r1 + r2));
   Serial.print("Resistència en paral·lel: ");
   Serial.print(rParalel);
   Serial.println(" Ω");
         
   
   }
  }
}

//******************* FUNCIONS **************************
