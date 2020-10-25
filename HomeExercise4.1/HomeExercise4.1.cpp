#include <stdio.h>
#include "Header.h"

//Home ex. 4.1:
//Skriv et modul(header - og sourcefil) med følgende to funktioner :
//int getInteger(double number);
//double getDecimal(double number);

//Den første funktion skal returnere heltalsdelen af tallet number.
//Dvs.at hvis number har værdien 23.859, skal funktionen returnere 23, hvis number har værdien - 4.06,
//skal funktionen returnere - 4 osv.
//
//Den anden funktion skal returnere decimaldelen af tallet number.Dvs.at hvis
//number har værdien 23.859, skal funktionen returnere 0.859, hvis number har
//værdien - 4.06, skal funktionen returnere 0.06 osv.

//Husk, at du fra nu af selv sørger for at skrive pseudokode før du skriver C
//kode selv om du ikke blive bedt om det i opgaven 

//Skriv herefter et lille program(main), som tester dine to funktioner

int main(void)
{
	double number;


	printf_s("Enter number:\n");		//anmoder om indtastning
	scanf_s("%lf", &number);			//scanner tal

	puts("");							//laver afstand

printf_s("The number in integers is eqiual to %d\n", getInteger(number));	//printer hele tal

printf_s("The number in decimals is eqiual to %f\n", getDecimal(number));	//printer decimaler


	return 0;
}