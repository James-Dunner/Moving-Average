/************************************************************
 * Filename: moving_average.c
 * Author: James Dunn
 * Created: Oct 15, 2013
 * Description: Source code for array and moving average functions
************************************************************/

#include "moving_average.h"

/************************************************************
 * Function Name: movingAverage
 * Author: James Dunn
 * Created: Oct 15, 2013
 * Description: Computes moving averages
************************************************************/
int getMovingAverage (int array[], unsigned int lengthOfArray)
{
	unsigned int volatile movingAverage, sum, i;

	movingAverage = 0;
	sum = 0;
	i = 0;

	for (i=0; i<lengthOfArray; i++)
	{
		sum += array[i];
	}

	movingAverage = sum/lengthOfArray;

	return movingAverage;
}

/************************************************************
 * Function Name: addSample
 * Author: James Dunn
 * Created: Oct 15, 2013
 * Description: Adds sample to stream of values
************************************************************/
void addSample (unsigned int sample, int array[], unsigned int lengthOfArray)
{
	unsigned int volatile i;
	i = 0;

	for (i=0; i<lengthOfArray; i++)
	{
		array[i] = array[i+1];
	}

	array[lengthOfArray-1] = sample;

}

/************************************************************
 * Function Name: findMaxValue
 * Author: James Dunn
 * Created: Oct 15, 2013
 * Description: Finds maximum value in array of numbers
************************************************************/
int findMaxValue (int arrayOfNums[], unsigned int lengthOfArray)
{
	unsigned int maxValue = 0;
	unsigned int i = 0;

	maxValue = arrayOfNums[0];

	for (i=1; i<lengthOfArray; i++)
	{
		if (arrayOfNums[i]>maxValue)
		{
			maxValue = arrayOfNums[i];
		}
	}

	return maxValue;
}

/************************************************************
 * Function Name: findMaxValue
 * Author: James Dunn
 * Created: Oct 15, 2013
 * Description: Finds minimum value in array of numbers
************************************************************/
int findMinValue (int arrayOfNums[], unsigned int lengthOfArray)
{
	unsigned int minValue = 0;
	unsigned int i = 0;

	minValue = arrayOfNums[0];

	for (i=1; i<lengthOfArray; i++)
	{
		if (arrayOfNums[i]<minValue)
		{
			minValue = arrayOfNums[i];
		}
	}

	return minValue;
}

/************************************************************
 * Function Name: findRange
 * Author: James Dunn
 * Created: Oct 15, 2013
 * Description: Finds range of values in array of numbers
************************************************************/
int findRange (int arrayOfNums[], unsigned int lengthOfArray)
{
	unsigned int minValue = 0;
	unsigned int maxValue = 0;
	unsigned int range = 0;
	unsigned int i = 0;

	minValue = arrayOfNums[0];
	maxValue = arrayOfNums[0];

	for (i=1; i<lengthOfArray; i++)
	{
		if (arrayOfNums[i]<minValue)
		{
			minValue = arrayOfNums[i];
		}
		else
		{
			if (arrayOfNums[i]>maxValue)
			{
				maxValue = arrayOfNums[i];
			}
		}
	}

	range = maxValue-minValue;

	return range;
}


