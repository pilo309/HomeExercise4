#include <stdio.h>
#include "Header.h"

//Home ex. 4.4:
//Skriv et modul(header - og sourcefil) med følgende funktion :

//int calculateSeconds(int hours, int minutes, int seconds);

//Funktionen skal beregne og returnere det totale antal sekunder som de modtagne
//oplysninger om timer, minutter og sekunder svarer til.

//Skriv herefter et lille program(main), som tester din funktion.

int main(void)
{
	int hours, minutes, seconds;

	printf_s("Indtast venlig et tidsrum i timer, minutter og sekunder:\n");
	scanf_s("%d%d%d", &hours, &minutes, &seconds);

	printf_s("Tiden er lig %d sekunder\n", calculateSeconds(hours, minutes, seconds));



	return 0;
}