
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"task1.h"
#include<conio.h>
#define SIZE 6
int main()
{

	char gender=" ";
	float height=0, weight=0;
	printf(" Enter your gender :");
	scanf("%c", &gender);
	rewind(stdin);
	printf("\n Enter your height :");
	scanf("%f",&height);
	rewind(stdin);
	printf("\n Enter your weight :");
	scanf("%f", &weight);
	int getRecommendation(char gender, float height, float weight);
	if (getRecommendation(gender, height, weight) == 0)
		printf("You have ideal weight\n");
	else
	{
		if (getRecommendation(gender, height, weight) < 0)
			printf("You need to gain weight\n");
		else
			printf("You need to lose weight\n");
	}



	return 0;
}