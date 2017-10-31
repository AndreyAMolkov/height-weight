#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include<stdio.h>
int main()
{
	int feet, inches,sm;
	printf("This program is a translator. Enter height : ft'inch - ");
	scanf("%i'%i", &feet, &inches);
	
	
	
	float convert(int feet, int inches);
	sm=convert(feet,inches);
	printf(" %d feet %d inch = %d  santimetrov \n",feet,inches,sm);




	return 0;

}