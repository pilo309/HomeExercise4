#include <stdio.h>
#include "Header.h"

//Home ex. 4.2:
//L�s opgave 5.19 i bogen.Du kan nok finde inspiration i din l�sning til Home
//exercise 3.5.
//
//Funktionens prototype skal v�re
//
//void printRectangle(int side1, int side2);
//
//Du skal selvf�lgelig efterf�lgende skrive et lille program(main), der tester din
//funktion.

//5.19 (Rectangle of Asterisks) Write a function that displays a solid rectangle of asterisks whose
//sides are specified in the integer parameters side1 and side2.
//For example, if the sides are 4 and 5, the function displays the following

int main(void)
{

	int side1, side2;

	printf_s("Enter side lenghts of rectangle:\n");
	scanf_s("%d%d", &side1, &side2);

	printRectangle(side1, side2);

	return 0;
}

