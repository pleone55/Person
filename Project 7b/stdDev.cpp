/*************************************************************************
 * *Author: Paul Leone
 * *Date: 11/07/2018
 * *Description: This function takes two parameters: an array of Person
 * *		 objects and the size of the array, and returns the 
 * *		 standard deviation of all the ages.
 * ***********************************************************************/

#include <iostream>
#include <cmath>
#include <string>
#include "Person.hpp"

//Function prototype
double stdDev(Person[], int);

/********************************************************************
 * Function to find and return the standard deviation.
 * ******************************************************************/
double stdDev(Person ageArray[], int size)
{
	//declare variables
	double sum, sumMean, sumDeviation, meanDeviation, populationDeviation;
	
	//use loop to find the sum of the ages
	for(int count = 0; count < size; count++)
	{
		double tempSum = ageArray[count].getAge();
		sum += tempSum;
	}

	sumMean = sum / size;

	for(int count = 0; count < size; count++)
	{	
		//formula used to calculate the deviavtion
		double numInArray = ageArray[count].getAge();
		double tempNum = (numInArray - sumMean);
		double deviations = pow(tempNum, 2);
		sumDeviation += deviations;
	}
	//formula to calculate the average deviation
	meanDeviation = sumDeviation / size;
	//formula to calculate the standard deviation of all ages
	populationDeviation = sqrt(meanDeviation);

	return populationDeviation;
}
  
