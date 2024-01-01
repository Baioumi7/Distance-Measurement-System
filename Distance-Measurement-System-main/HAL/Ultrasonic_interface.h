/**************************************************************************************/
/*=================================================================================*/
/*  Author      : Ahmed bayoumii                   Embedded SW Engineer           */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bayoumii77/             */
/*  Git account : https://github.com/Baioumi7				               */
/*  mail        : ahmedbayoumii2024@gmil.com                                         */
/*=================================================================================*/
#ifndef ULTRASONIC_INTERFACE_H_
#define ULTRASONIC_INTERFACE_H_

void ULTRASONIC_voidEdgeProcessing(void);

void ULTRASONIC_voidInit(void);

void ULTRASONIC_voidTrigger(void);

u16 ULTRASONIC_u16GetDistance(void);

#endif
