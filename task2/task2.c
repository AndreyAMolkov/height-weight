#include "task2.h"
#include<stdio.h>
char* greet(int hour, int min)
{
	char* greeting="error task2";
	
	if (hour >= 00 && hour < 6)
		greeting = "Good night!";
	if (hour >= 6 && hour < 11)
		greeting = "Good morning!";
	if (hour >= 11 && hour < 18)
		greeting = "Good day!";
	if (hour >= 18 && hour <= 24&& min<=60)
		greeting = "Good evening!";
	if (hour > 23 || min > 60)
		greeting = "Uncorrect time!";
	return greeting;
}
