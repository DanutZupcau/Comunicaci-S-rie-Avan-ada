/**************************************************************
**                                                           **
**              TÍTOL: Comunicació Sèrie Avançada            **
**                                                           **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 05/02/2018    **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
int thisByte = 33; 
//******************* SETUP ****************************

void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); 
} 



//******************* LOOP *****************************

void loop()
{ 
  Serial.write(thisByte);    
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // go on to the next character

} 


//******************* FUNCIONS **************************
