#define _CRT_NO_WARNINGS
#include<stdio.h>
int main()
{
	double angle=240;
	char *buf[]={"error"};
	char type;
	angle = 240;
	type = 'D';
	sprintf(buf, "%d %c", angle, type);
	printf("%s", buf);
	return 0;
}