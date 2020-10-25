#include "Header.h"
#include <stdio.h>

void printRectangle(int side1, int side2, char c)
{
	
	for (size_t i = 1; i <= side1; i++)			//hvor mange rækker den laver, 
									//dvs. den kører herop når den har lavet en række
	{
		puts("");
		for (size_t i = 1; i <= side2; i++)			//hvor lange rækkerne er defineres her
			printf_s("%c",c);

	}
}