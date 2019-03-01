/* ----------------------------------------------------------------------- */
/*                         Gerard Romeu Vidal                              */
/* ----------------------------------------------------------------------- */

#ifndef LIFEINDICATORS_H
#define LIFEINDICATORS_H

#include <iostream>

typedef unsigned short ushort;


void updateLifeIndicatorPlayer1(ushort* lifeIndicatorP1, ushort damage)
{
	
	// TO DO: Insert your code here
	if (damage > 0) {

		for (int i = 0; i < 10; i++) {

			if (*(lifeIndicatorP1 + i) == 1 && damage != 0) {

				*(lifeIndicatorP1 + i) = 0;
				damage--;
			}
		}
	}
}


void updateLifeIndicatorPlayer2(ushort* lifeIndicatorP2, ushort damage)
{

	// TO DO: Insert your code here
	if (damage > 0) {

		for (int i = 9; i >= 0; i--) {

			if ( *(lifeIndicatorP2 + i) == 1 && damage != 0 ) {

				*(lifeIndicatorP2 + i) = 0;
				damage--;
			}
		}
	}

}
#endif