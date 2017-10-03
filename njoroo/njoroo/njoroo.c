


#include <avr/io.h>
#include<util/delay.h>
#define OUTPUT 0b00000111;
int main(void){
	void segna (void)
	{//TODO:: Please write your application code
		
		PORTA = 0b01111101;		// Display Number 1
		_delay_ms(1000);		// Wait for 1s
		PORTA = 0b01101101;		// Display Number 2
		_delay_ms(1000);
		PORTA = 0b01100110;		// Display Letter E
		_delay_ms(1000);		// Wait for 1s
		PORTA = 0b01001111;		// Display Number 3
		_delay_ms(1000);		// Wait for 1s
		PORTA = 0b01011011;		// Display Number 4
		_delay_ms(1000);		// Wait for 1s
		PORTA = 0b0110000;		// Display Letter A
		_delay_ms(1000);		// Wait for 1s
		PORTA = 0b00111111;		// Display Letter C
		_delay_ms(1000);		// Wait for 1s
		
	}
	DDRA=0xff;
	PORTA=0x00;
	DDRC=0b00111111;
	PORTC=0b00000000;//data direction on port C
	PORTB=0b00000000;
	DDRB=0b11100111;//data direction on port B
	DDRD=0b11111111;//data direction on port D
	while(1)
	{
		if (bit_is_set(PIND,7) &&bit_is_set(PIND,6) &&bit_is_set(PIND,0) && bit_is_set(PIND,1) && bit_is_set(PIND,2)&&bit_is_set(PIND,3) && bit_is_set(PIND,4) && bit_is_set(PIND,5))
		{
			PORTC=0b00100100;//red road 1 and road 2
			PORTB=0b10000100;//red road 3 and red road 4
			segna();//delay for 6 seconds
			PORTC=0b00100010;//yellow road 1 and red 2
			_delay_ms(1000);//delay for 1 second
			PORTC=0b00100001;//green road 1 and red road 2
			segna();//delay for 6 seconds
			PORTC=0b00010100;//yellow rd 2
			_delay_ms(1000);//delay for 1 second
			PORTC=0b00001100;//green road 2 and red road 1
			segna();//delay for 6 seconds
			PORTC=0b00100100;//red road 1 and road 2
			PORTB=0b01000100;//yellow road 3 and red road 4
			_delay_ms(1000);//delay for 1 second
			PORTC=0b00100100;//red road 1 and road 2
			PORTB=0b00100100;//green road 3 and red road 4
			segna();//delay for 6 seconds
			PORTB=0b10000010;//yellow road 4 and red road 3
			_delay_ms(1000);//delay for 1 second
			PORTB=0b10000001;//green road 4 and red road 3
			//_delay_ms(6000);//delay for 6 seconds
			segna();
		}
		else if (bit_is_clear(PIND,7) &&bit_is_clear(PIND,6) &&bit_is_clear(PIND,0) && bit_is_clear(PIND,1) && bit_is_clear(PIND,2)&&bit_is_clear(PIND,3) && bit_is_clear(PIND,4) && bit_is_clear(PIND,5))
		{  PORTC=0b00100100;//red road 1 and road 2
			PORTB=0b10000100;//red road 3 and road 4
			segna();//delay for 6 seconds
			PORTC=0b00100010;//yellow road 1 and red road 2
			_delay_ms(1000);//delay for 1 second
			PORTC=0b00100001;//green road 1 and red road 2
			segna();//delay for 6 seconds
			PORTC=0b00010100;//yellow road 2 and red road 1
			_delay_ms(1000);//delay for 1 second
			PORTC=0b00001100;//green road 2 and red road 1
			segna();//delay for 6 seconds
			PORTC=0b00100100;//red road 1 and road 2
			PORTB=0b01000100;//yellow road 3 and red road 4
			_delay_ms(1000);//delay for 1 second
			PORTC=0b00100100;//red road 1 and road 2
			PORTB=0b00100100;//green road 3 and red road 4
			//_delay_ms(6000);//delay for 6 seconds
			
			segna();
		}
		else if (bit_is_set(PIND,7) &&bit_is_clear(PIND,6) &&bit_is_clear(PIND,0) && bit_is_clear(PIND,1) && bit_is_clear(PIND,2)&&bit_is_clear(PIND,3) && bit_is_clear(PIND,4) && bit_is_clear(PIND,5))
		{ PORTC=0b00100100;//red rd 1 and rd 2
			_delay_ms(1000);//delay for 1 second
			PORTC=0b00100100;//red rd 1 and rd 2
			PORTB=0b10000001;//green rd 4 and red rd 3
			segna();//delay for 6 seconds
		}
	}
	return 0;
}
