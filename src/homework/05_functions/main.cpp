/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/

/* moved from HW 4:
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
#include<iostream>
#include"func.h"

int main() 
{
	int user_option = 0;
	do
	{
		std::string dna;
		std::cout<<"\nPlease enter a DNA sequence: ";
		std::cin>>dna;

		display_menu();
		std::cout<<"\nPlease enter a menu option: ";
		std::cin>>user_option;

		switch(user_option)
		{
		case 1:
			std::cout<<"\nThe GC content of the DNA sequence is "<<get_gc_content(dna)*100<<"%.\n\n";
			break;
		case 2:
			std::cout<<"\nThe complement of the DNA sequence is '"<<get_dna_complent(dna)<<"'.\n\n";
			break;
		case 3:
			std::cout<<"\nGoodbye!\n";
            break;
		}
	}while(user_option == 1 || user_option == 2);
	
	return 0;
}