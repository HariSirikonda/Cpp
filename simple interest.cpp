#include<iostream>
using namespace std;
int main()
{
	int principle,time,rate_of_interest,simple_interest;
	cout << "Enter the Principle Amount : ";
	cin >> principle;
	cout << "Enter the Time :";
	cin >> time;
	cout << "Enter the Rate of Interest : ";
	cin >> rate_of_interest;
	simple_interest = (principle*time*rate_of_interest)/100;
	cout << "The simple interest = " << simple_interest;
	return 0;
}
