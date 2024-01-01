/*=================================================================================*/
/*  Author      : Ahmed bayoumii                   Embedded SW Engineer           */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-bayoumii77/             */
/*  Git account : https://github.com/Baioumi7				               */
/*  mail        : ahmedbayoumii2024@gmil.com                                         */
/*=================================================================================*/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT) 		 REG|=(1<<BIT)
#define CLR_BIT(REG,BIT) 		 REG&=(~(1<<BIT))
#define TOOGLE_BIT(REG,BIT)	     REG^=(1<<BIT)
#define GET_BIT(REG,BIT) 		((REG>>BIT)&1)

#endif /* BIT_MATH_H_ */
