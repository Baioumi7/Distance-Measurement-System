/*=================================================================================*/
/*  Author      : Ahmed bayoumii                   Embedded SW Engineer           */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bayoumii77/             */
/*  Git account : https://github.com/Baioumi7				               */
/*  mail        : ahmedbayoumii2024@gmil.com                                         */
/*=================================================================================*/
#include "util/delay.h"

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "TIMER_interface.h"
#include "GIE_interface.h"

#include "CLCD_interface.h"
#include "Ultrasonic_interface.h"


void main(void)
{
	u16 Local_u16Distancevalue;

	/* Enable Global Interrupt */
	GIE_voidEnable();

	/* Initialize LCD */
	CLCD_voidInit();

	/* Initialize Ultrasonic */
	ULTRASONIC_voidInit();

	CLCD_voidSendString("Distance =    cm");


	for(;;)
	{
		/* Get ultrasonic measured distance */
		Local_u16Distancevalue=ULTRASONIC_u16GetDistance();

		/* Display ultrasonic measured distance in this location */
		CLCD_voidGoToXY(0,11);

		/* Maxmium value = 500 */
		if(Local_u16Distancevalue<=500 && Local_u16Distancevalue>=100)
		{
			/* Display ultrasonic value in LCD */
			CLCD_voidIntegerToString(Local_u16Distancevalue);
		}
		else if(Local_u16Distancevalue<=500 && Local_u16Distancevalue>=10)
		{
			/* Display ultrasonic value in LCD */
			CLCD_voidIntegerToString(Local_u16Distancevalue);

			/* To remove third bit */
			CLCD_voidSendData(' ');
		}
		else if(Local_u16Distancevalue<10 && Local_u16Distancevalue>=3)
		{
			/* Display ultrasonic value in LCD */
			CLCD_voidIntegerToString(Local_u16Distancevalue);

			/* To remove second bit */
			CLCD_voidSendString("  ");
		}



	}
}
