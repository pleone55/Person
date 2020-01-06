/**************************************************************************
 * *Author: Paul Leone
 * *Date: 2/20/2019
 * *Description: This writes the class Person that has two data members:
 * *		 a string variable called name and a double variable
 * *		 called age.
 * ************************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
#include <string>

//Person class declaration
class Person
{
	private:
		std::string name;
		double age;
	
	public:
		Person(std::string, double);
		std::string getName();
		double getAge();
};
#endif
