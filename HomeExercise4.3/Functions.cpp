#include "Header.h"
#include <stdio.h>

void printRectangle(int side1, int side2, char c)
{
	
	for (size_t i = 1; i <= side1; i++)			//hvor mange r�kker den laver, 
									//dvs. den k�rer herop n�r den har lavet en r�kke
	{
		puts("");
		for (size_t i = 1; i <= side2; i++)			//hvor lange r�kkerne er defineres her
			printf_s("%c",c);

	}
}