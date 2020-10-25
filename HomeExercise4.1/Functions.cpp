#include "Header.h"
#include <stdio.h>


int getInteger(double number)
{
	int number2 = number;		//initialiserer nummeret som integer, barberer derved decimaler af

	return number2;				//returnerer tallet med decimaler barberet væk 
}

double getDecimal(double number)
{

	int number2 = number;					//initialiserer nummeret som helt tal
	double number3 = number - number2;		//trækker det hele tal fra decimaltalsversionen

	return number3;						//returnerer decimaler
}