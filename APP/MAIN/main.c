/*
 * First LED Lab.c
 *
 * Created: 9/9/2023 1:43:45 PM
 * Author : Eyad
 */ 

/*****************************  STD  *********************/




/*************************BIT MATH****************************/

/***********************************************************/

#include "LED_Core.h"
#include "Button_Core.h"
#include "SevSeg_Core.h"
#include "PORT_Core.h"
#include "DIO_Core.h"
#include "LCD_Core.h"
/*int main()
{
	PORT_Init();
	LCD_Init();
	LCD_WrietCustomCharacter();
	LCD_GoTo(0,4);
	LCD_WriteChar(0);
	LCD_WriteChar(1);
	LCD_WriteChar(2);
	LCD_WriteChar(3);

	
	
	
}*/
void stop(void)
{
	LED_Init();
uint8 xx;
		xx=Button_GetValue_4();
		for(;xx==0;)
		{LED_ON();
			_delay_ms(1000);
			if(Button_GetValue_4()==0)
			{
				xx=1;
				
				 
				        
			}

			
			
		}
}
	
void start(sint8 hours,sint8 min,sint8 sc)
{
	for(;hours>=0;)
{
	

for(;min>=0;)	
{
	
	for(;sc>=0;)
	{
			LCD_GoTo(0,3);
		LCD_WriteString("hor");
		LCD_WriteChar(58);
		LCD_WriteString("mi");
		LCD_WriteChar(58);
		LCD_WriteString("sec");
		LCD_GoTo(1,4);
		LCD_WiteInteger(hours/10);
		LCD_WiteInteger(hours%10);
		LCD_WriteChar(58);
		LCD_WiteInteger(min/10);
		LCD_WiteInteger(min%10);
		LCD_WriteChar(58);
		LCD_WiteInteger(sc/10);
		LCD_WiteInteger(sc%10);
	
        _delay_ms(980);
	    stop();
		LED_OFF();
        LCD_Clear();
		sc--;
	}
	min--;
	sc+=60;
	
}
hours--;
min+=60;

}
for(uint8 q=0;q<30;q++)
	{ buz_ON();
				LCD_GoTo(0,3);

    LCD_WriteString("time");
	LCD_GoTo(1,7);
	        LCD_WriteString(" ended");

	_delay_ms(100);
	buz_OFF();
     LCD_Clear();
LCD_GoTo(1,3);
LCD_WriteString("time");
LCD_GoTo(0,7);
LCD_WriteString(" ended");
	_delay_ms(100);
	LCD_Clear();
	
	}
	return 0;
}

int main(void)
{	
		PORT_Init();
		LCD_WrietCustomCharacter();
		LCD_Init();
		//LCD_WiteInteger(173);
		LED_Init();
		
		Button_Init_1();
		Button_Init_2();
		Button_Init_3();
		Button_Init_4();
	    LCD_GoTo(0,5);

	    LCD_WriteChar('h');
    	_delay_ms(500);
		LCD_WriteChar('a');
		_delay_ms(500);
    	LCD_WriteChar('l');
		_delay_ms(500);
		LCD_WriteChar('l');
		_delay_ms(500);
	    LCD_WriteChar('o');
        _delay_ms(2500);
        LCD_Clear();
	

	void buz_Init(void);

	   
	  uint8 sumh=0,sum1=0,sum2=0;
	   uint8 x=1;
	  
    while(x=1)
    {
		if(	 Button_GetValue_1()==0	)
		{
			sumh+=1;
			
			
			
			
			
			
		}
		if(	 Button_GetValue_2()==0	)
		{
			sum1+=1;
			if(sum1>59)
			{
				sum1=0;
				sumh+=1;
			}
			
			
		
		
		
			
		}
		else if(Button_GetValue_3()==0)
		{
			
			sum2+=1;
			
			
			if(sum2>59)
			{
				sum2=0;
					sum1+=1;
			}
		
				
			
		}
		else if(Button_GetValue_4()==0)
		{
			start(sumh,sum1,sum2);
		sum1=0;
		sum2=0;
		}
		
	    LCD_GoTo(0,3);
		LCD_WriteString("hor");
		LCD_WriteChar(58);
	    LCD_WriteString("mn");
	    LCD_WriteChar(58);
		LCD_WriteString("sec");

			LCD_GoTo(1,4);
				LCD_WiteInteger(sumh/10);
				LCD_WiteInteger(sumh%10);
				LCD_WriteChar(58);
			LCD_WiteInteger(sum1/10);
			LCD_WiteInteger(sum1%10);
		    LCD_WriteChar(58);
			LCD_WiteInteger(sum2/10);
			LCD_WiteInteger(sum2%10);
						_delay_ms(150);

			LCD_Clear();
			
			
			
	}
		
			
	
}

