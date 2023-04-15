#include "ref_pointers.h"
#include<iostream>
using std::cout;

int main() 
{
	/*
	auto num = 5;
	auto &num_ref = num;

	cout<<"The value of num is: "<<num<<"\n";
	cout<<"The address of num is: "<<&num<<"\n";
	cout<<"The value of num_ref is: "<<num_ref<<"\n";
	cout<<"The address of &num_ref is: "<<&num_ref<<"\n";
	*/
// pointers

	auto num = 5; 
	int *num_ptr = &num; // point to memory of num

	cout<<"The value of num is: "<<num<<"\n";
	cout<<"The address of num is: "<<&num<<"\n";
	cout<<"The address of num_ptr is: "<<num_ptr<<"\n";
	cout<<"The value of num_ptr is: "<<*num_ptr<<"\n";


	return 0;
}