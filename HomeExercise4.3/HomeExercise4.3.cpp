#include <stdio.h>
#include "Header.h"

//Home ex. 4.3:
//Løs opgave 5.20 i bogen.Læg mærke til, at den bygger videre på opgave 5.19, som
//du lige har løst.
//Funktionens prototype skal nu være

//void printRectangle(int side1, int side2, char c);

//(Displaying a Rectangle of Any Character) Modify the function created in Exercise 5.19 to
//form the rectangle out of whatever character is contained in character parameter fillCharacter.Thus
//if the sides are 5 and 4, and fillCharacter is "@", then the function should print the following :

//Test efterfølgende denne funktion ved at foretage de nødvendige ændringer i
//testprogrammet fra Home exercise 4.2.

int main(void)
{

	int side1, side2;
	char c;

	printf_s("Enter side lenghts of rectangle and what should be printed:\n");
	scanf_s("%d%d\n%c", &side1, &side2,&c);

	printRectangle(side1, side2, c);


	return 0;
}