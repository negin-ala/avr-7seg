/*
 * microproj1.c
 *
 * Created: 12/22/2019 5:45:32 PM
 * Author: kh alamatsaz
 */

#include <mega32.h>
#include <delay.h>

const unsigned char Argham[] = {0x03,0x9F,0x25,0x0D,0x99,0x49,0x41,0x1F,0x01,0x09}   ;

unsigned char i,n1,n2;

void main(void)
{
DDRC=255; //porthaye motassel be 7segmentha
DDRD=255;



while (1)
    {   
    
    // Please write your application code here
    
    for (i=12;i<=35;i++){   //joda kardane arghame adad 
        
    n2=i%10;
    n1=i/10;
               
    PORTC=Argham[n1];

    PORTD=Argham[n2];
    
    delay_ms(550);
     }

    }
 }