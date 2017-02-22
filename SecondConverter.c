#include <stdio.h>
#include <math.h>

int secToHours (long time, int* hours, int* minutes, int* seconds)
{

	long localTime;
	localTime = time;
	*seconds = localTime % 60;
	localTime = localTime / 60;

	*minutes = localTime % 60;

	*hours = localTime / 60;

	if (*hours > 24)
		return 0;
	else 
		return 1;
} 
