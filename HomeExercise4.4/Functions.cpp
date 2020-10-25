#pragma once
#include <stdio.h>

#include "Header.h"

int calculateSeconds(int hours, int minutes, int seconds)
{
	return ((hours * 60 * 60)+(minutes*60)+(seconds)); //gange timer med 60^2 minuter*60 og adderes sekunder
													//for at få total antal sekunder
}