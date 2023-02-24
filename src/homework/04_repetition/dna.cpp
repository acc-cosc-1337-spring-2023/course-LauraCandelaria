//add include statements
#include<iostream>
#include"dna.h"

using std::cout;
using std::cin;

//add function(s) code here

int factorial(int num)
{
    auto sum = 1;
    while(num > 0)
    {
        sum = sum * num;
        num--;
    }
    
    return sum;
}

int gcd(int num1, int num2)
{
    auto hcf = 0;

    while(num1 != num2)
    {
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    hcf = num1;
    return hcf;

}

int prompt_user()
{
    int user_option = 0;
    do
    {
	cout<<"\n\nMAIN MENU\n\n1 - Find factorial\n";
	cout<<"2 - Find GCD of two numbers\n3 - Exit\n";
	cout<<"Please select a main menu option: ";
	cin>>user_option;

    auto num = 0;
    auto num1 = 0;
    auto num2 = 0;
    auto choice = 'n';

    switch(user_option)
	{
		case 1:
			cout<<"\nPlease enter a number: ";
			cin>>num;
			cout<<"\nThe factorial of "<<num<<" is "<<factorial(num);
			break;
		case 2:
			cout<<"\nPlease enter first number: ";
			cin>>num1;
            cout<<"\nPlease enter second number: ";
            cin>>num2;
			cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcd(num1, num2);
			break;
		case 3:
			cout<<"Are you sure you want to quit? Type 'y' to exit: ";
            cin>>choice;
            if(choice == 'y' || choice == 'Y')
            {
                user_option = 3;
            }
            else
            {
                user_option = 1;
            }

            break;

	}
    }
    while(user_option == 1 || user_option == 2);
   
    return user_option;
}