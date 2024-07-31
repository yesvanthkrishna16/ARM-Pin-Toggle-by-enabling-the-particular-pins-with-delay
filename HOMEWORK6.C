#include<stm32f10x.h>
void delay_ms(uint16_t t); //initilizing a function
void delay_ms(uint16_t t)//delay function for 72 MHz ARM  controller 
{
  volatile unsigned long l=0;
  for(uint16_t i=0;i<=t;i++)
    {
      for(l=0;l<6000;l++)
        {
        }
    }
}
int main()
{
  RCC->APB2ENR |=0xFC; //ENABLE THE CLOCK FOR THE GPIO PINS
  GPIOA->CRL = 0x33333333; //PA0 TO PA7 AS OUTPUTS
  GPIOA->CRH = 0x33333333; //PA8 TO PA15 AS OUTPUTS 
  while(1)
    {
       GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0001;//the pin 1 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0002;//the pin 2 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0004;//the pin 3 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0008;//the pin 4 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0010;//the pin 5 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x00020;//the pin 6 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0040;//the pin 7 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0080;//the pin 8 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0100;//the pin 9 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0200;//the pin 10 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0400;//the pin 11 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x0800;//the pin 12 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x1000;//the pin 13 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x2000;//the pin 14 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x4000;//the pin 15 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
			 GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
			 GPIOA-> ODR=0x8000;//the pin 16 in the PORT A is set to high
      delay_ms(1000);//dely for 100ms
         }
}
