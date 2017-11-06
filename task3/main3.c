#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include<stdio.h>


int main()
{
	char type='Q';
	double angle;
	char *buf[10];
	printf("Enter the value angle and type: "); 
	
	scanf("%lf%c",&angle,&type);//true correct code
	

	if (type == 'd'|| type == 'r'||type == 'D' || type == 'R')
		{
		convert(buf, angle, type);
		//buf=(convert(buf, angle, type));
		
		printf("= %lc", buf);
		return 0;
		
		}
			printf("\nError data\n");
			return 1;
}