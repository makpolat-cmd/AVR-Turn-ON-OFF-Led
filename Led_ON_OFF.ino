#include <avr/io.h>

int main(void){
  //Define all PORTs as OUTPUT
  DDRB = 0xFF; //Binary: 0b11111111
  DDRC = 0xFF; //Binary: 0b11111111
  DDRD = 0xFF; //Binary: 0b11111111
  //In below, to Turn ON the "L" light, we only need to make Pin 13 as output.
  //Pin 13 in PORTB. So the code is "PB5" it means 0x06
  while(1){
    PORTB = 0x20; //Turn ON value for PIN13
    PORTC = 0x00; //to make other pins LOW 
    PORTD = 0x00; //to make other pins LOW 
  }
}