//c++ program to find whether the given number is strong or not
#include<iostream>
using namespace std;
int main()
{
	int number,duplicate,remainder=0,product,i,sum=0;
	cout << "\nEnter the number : ";
	cin >> number;
	duplicate = number;
	while(number>0)
	{
		remainder = number%10;
		product = 1;
		for(i=1;i<=remainder;i++)
		{
			product = product*i;
		}
		sum=sum+product;
		number = number/10;
	}
	if(duplicate == sum)
	{
		cout << "\nThis number is a Strong number.";
	}
	else
	{
		cout << "\nThis is not a strong number.";
	}
}
