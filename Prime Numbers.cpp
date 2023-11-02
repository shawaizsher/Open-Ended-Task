#include<iostream>
using namespace std;
int main()
{
	int choice ;
	cout<<"1. Do you want to print prime numbers in a range."<<endl;
	cout<<"2. Do you want to check a prime number."<<endl;
	cout<<"Enter your choice(1 or 2): "<<endl;
	cin >> choice ;
	if(choice == 1)
	{
	   int low, high, i;
       bool is_prime = true;
       cout<<"Enter starting point: ";
       cin >> low;
       cout<<"Enter ending point: ";
       cin >> high;
       while (low < high)
	    {
        is_prime = true;
       if (low == 0 || low == 1) 
	   {
         is_prime = false;
    }
     for (i = 2; i <= low/2; ++i)
	  {
       if (low % i == 0) {
        is_prime = false;
        break;
      }
    }
        
    if (is_prime)
      cout << low <<" ";

    ++low;
  }
}
	else if(choice == 2)
	{
		int number,i;
		cout<<"Enter a number: ";
		cin >> number;

		for(i = 2;i<=number/2;i++)
		{
			if(number%i==0)
			{
				cout<<"Not prime";
				break;
			}
			else{
				cout<<"Prime";
				break;
			}
		}
	}
	else
	{
		cout<<"Invalid choice.";
	}
}
