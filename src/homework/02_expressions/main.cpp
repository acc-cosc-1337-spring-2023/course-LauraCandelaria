//write include statements
#include "hwexpressions.h"
#include <iostream>


//write namespace using statement for cout
using std::cin;
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount = 0, tip_rate = 0, tip_amount = 0, tax_amount = 0, total = 0;
	
	cout<<"\n\nEnter the cost of the meal: ";
	cin>>meal_amount;
	
	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter how much you would like to tip in decimal form: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	cout<<"\n Your recipt: "<<"\n Meal Amount: "<<meal_amount<<"\n Sales Tax: "<<tax_amount;
	cout<<"\n Tip Amount: "<<tip_amount<<"\n Total: "<<total<<"\n\n";

	return 0;
}
