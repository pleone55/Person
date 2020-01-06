/**************************************************************************
 * *Author: Paul Leone
 * *Date: 2/20/2019
 * *Description: This takes the class Person and initializes the 
 * *		 constructor that takes two values and uses them to 
 * *		 initialize the data members.
 * ************************************************************************/

#include <iostream>
#include "Person.hpp"

/**********************************************************************
 * This is the constructor that takes two parameters and uses them to
 * initialize the data members.
 * ********************************************************************/

Person::Person(std::string nameOf, double ageOf)
{
	name = nameOf;
	age = ageOf;
}

/**********************************************************************
 * This is the constructor that returns the string name.
 * ********************************************************************/

std::string Person::getName()
{
	return name;
}

/*********************************************************************
 * This is the constructor that returns the variable age.
 * *******************************************************************/

double Person::getAge()
{
	return age;
}

