#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include<stdio.h>
char * convert(char *buf[], double angle, char type)
{

	if (type == 'R')
	{
		angle = (3.14*angle);
		type = 'D';
	}
	else
	{
		angle = (angle/3.14);
		type = 'R';
	}

	sprintf(buf,"%.2f%c",angle,type);

	return buf;
	
}