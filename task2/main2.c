#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include<stdio.h>
int main()
{
	int hour = 0, min = 0, sec = 0, checktrue=0;
	char *greeting = "dfdf";
	printf(" Enter your time : hh:mm:ss - ");
	checktrue =scanf("%i:%i:%i", &hour, &min, &sec);//the value of the number of entered parameters
	greet(hour, min);
	
	if (sec > 60 || checktrue !=3)// checking the number of input values and error seconds
		{
			printf("Time error\n");
			return 1;
		}

	greeting = (greet(hour, min));
	printf("%s\n",greeting);
	return 0;

}

/*
������ �2

�������� ���������, ������� ����������� ������� ����� �!;
������� ��:��:��, � ����� ������� ����������� � ����������� ��
���������� ������� ("������ ���� "������ ����"� �.�.)
���������

�� ������� ����� ������� ��������� ��������:

"����" - � 00:00 �� 06:00
"����" - � 06:00 �� 11:00
"����" - � 11:00 �� 18:00
"�����" - � 18:00 �� 00:00
��������� ������ �������� �� ���� �������:

char * greet(int hour,int min) - ��������� ����������� � ������� ������������ �������
main() - ����������� �������
������� greet ������ ��������� ���� �� ��������� �����:

"Good night!"
"Good morning!"
"Good day!"
"Good evening!"
"Uncorrect time!"
���������� ����������� ��������� �����:





*/