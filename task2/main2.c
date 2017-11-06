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
Задача №2

Написать программу, которая запрашивает текущее время в!;
формате ЧЧ:ММ:СС, а затем выводит приветствие в зависимости от
указанного времени ("Доброе утро "Добрый день"и т.д.)
Пояснение

За границы можно принять следующие значения:

"ночь" - с 00:00 до 06:00
"утро" - с 06:00 до 11:00
"день" - с 11:00 до 18:00
"вечер" - с 18:00 до 00:00
Программа должна состоять из двух функций:

char * greet(int hour,int min) - генерация приветствия и провека корректности времени
main() - организация диалога
Функция greet должна возврщать одну из следующих строк:

"Good night!"
"Good morning!"
"Good day!"
"Good evening!"
"Uncorrect time!"
Необходимо подготовить следующие файлы:





*/