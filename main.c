/****************************************************************
  * Author: James Dunn
  * Created: Oct 15, 2013
  * Description: This C program will calculate moving averages,
  * determine max/min values, and the range of a given array
****************************************************************/

#include <msp430.h>
#include "moving_average.h"

void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

	unsigned int volatile lengthOfArray, lengthOfStream, maxValue, minValue, range, i;
	int streamOfNums[] = {45,42,41,40,43,45,46,47,49,45};
	int average[2] = {0};
	int computedAverages[20] = {0};

	lengthOfArray = sizeof(average)/sizeof(int);
	lengthOfStream = sizeof(streamOfNums)/sizeof(int);
	i = 0;

	// Code for moving averages that did not function correctly

	for (i=0; i<=10; i++)
	{
		computedAverages[i] = getMovingAverage(average, lengthOfArray);
		addSample(streamOfNums[i], average, lengthOfArray);
	}

	maxValue = findMaxValue(streamOfNums, lengthOfStream);
	minValue = findMinValue(streamOfNums, lengthOfStream);
	range = findRange(streamOfNums, lengthOfStream);

	while(1){};
}
