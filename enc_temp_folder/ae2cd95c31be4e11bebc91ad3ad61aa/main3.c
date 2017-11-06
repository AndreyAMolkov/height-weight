#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char type='Q';
	double angle;
	char *buf="41error";
	printf("Enter the value angle and type: "); 
	
	scanf("%lf%c",&angle,&type);//true correct code
	sprintf(buf,"%d%c", &angle, &type);

	
		if (type == 'd'|| type == 'r'||type == 'D' || type == 'R')
		{
			convert(buf, angle, type);
			buf = convert(buf, angle, type);
		printf("= %c", buf);
		return 0;
		
		}
			printf("\nError data\n");
			return 1;
}