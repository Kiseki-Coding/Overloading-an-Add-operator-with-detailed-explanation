/*
Name: kiseki-Coding
Year: 2023
Just a code with explanations on overloading an operator
Notice: This program did not simplify the fraction
Not sure if you can understand from these explanation sorry :)
*/

#include <iostream>
using namespace std;
//Fraction class
class Fraction 
{
private:
	//declaration of private variables
	int numerator;
	int denominator;
public:
	//Default Constructor to be executed as soon as the object is instantiated
	//If a class has any programmer-defined constructors, it must have a programmer defined default constructor
	Fraction(int numer = 0, int deno = 0) 
	{
		numerator = numer;
		denominator = deno;
	}
	//overloading the add operator of class Fraction (basically would return a value of class Fraction type) which has a parameters being passed by a reference
	Fraction operator+(Fraction const & num) 
	{
		Fraction tempnum;
		//you can use this-> keyword or just leave it as the defualt variable name. this-> keyword is used to just tell you that this-> operand as in the first operand
		tempnum.numerator = this->numerator * num.denominator + num.numerator * this->denominator;
		tempnum.denominator = this->denominator * num.denominator;
		return tempnum;
	}
	//display function to display the result when called
	//you can overload the << operator to just call it out instantly in main.
	void display() {
		cout << "The fraction is: (" << numerator << "/" << denominator << ")";
	}


};
int main() 
{
	//declaration of variables for prompting the user.
	int numer, denomi;
	int numer2, denomi2;
	//prompting the user to enter two fractions
	cout << "Enter a numerator:";
	cin >> numer;
	cout << "Enter a denominator: ";
	cin >> denomi;
	cout << "Enter a 2nd numerator: ";
	cin >> numer2;
	cout << "Enter a 2nd denominator: ";
	cin >> denomi2;

	//passing the fraction values through the object
	Fraction F1(numer, denomi);
	Fraction F2(numer2, denomi2);
	//Now you can add both fractions
	Fraction total = F1 + F2;
	//displaying the total calling the display function
	total.display();

}
