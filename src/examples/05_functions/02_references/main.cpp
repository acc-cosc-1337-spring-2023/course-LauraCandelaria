#include<iostream>

using std::cout; using std::cin;


int main()
{
    auto num = 10;
    int &num_ref = num; // num_ref will store theadress of num

    cout<<"Num is: "<<num<<"\n";
    cout<<"Stack address for num is: :"<<&num<<"\n";

    cout<<"Num value vie num_ref: "<<num_ref<<"\n";
    cout<<"Adress that num_ref is located in: "<<&num_ref<<"\n";

    return 0; 
}