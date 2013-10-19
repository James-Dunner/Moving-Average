/*******************************************************
 * Filename: moving_average.h
 * Author: James Dunn
 * Date: Oct 14, 2013
 * Description: Functions to compute and track moving averages
*******************************************************/

#ifndef _MOVING_AVERAGE_H
#define _MOVING_AVERAGE_H

#define TWO_AVERAGE_SAMPLES 2
#define FOUR_AVERAGE_SAMPLES 4

// Moving average functions
int getMovingAverage(int array[], unsigned int numOfElements);
void addSample(unsigned int sample, int array[], unsigned int numOfElements);

// Array functions
int findMaxValue (int arrayOfNums[], unsigned int numOfElements);
int findMinValue (int arrayOfNums[], unsigned int numOfElements);
int findRange (int arrayOfNums[], unsigned int numOfElements);

#endif
