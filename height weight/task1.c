// first time
#include"task1.h"


int getRecommendation(char gender, float height, float weight)
{
	double koefgender, CheckWeight;

	if (gender == 'm')
		koefgender = 100;
	else
	{
		koefgender = 110;
	}

	CheckWeight = height - koefgender;
	if ((CheckWeight - weight) == 0)
		return 0;


	if (CheckWeight < weight)
	{
		return 1;
	}
	else
	{
		return -1;
	}


}