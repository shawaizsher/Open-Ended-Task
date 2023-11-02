#include<iostream>
using namespace std;
int main()
{
	int choice;
    cout<<"Welcome to Library!";
    cout<<"\nPlease select your choice.";
    cout<<"\n1. Borrow a book";
    cout<<"\n2. Return a book";
    cout<<"\nDo remember that you are fined $1 each for late submission.";
    cout<<"\nPlease enter your  choice(1 or 2): ";
    cin >> choice ;
    if(choice == 1)
    {
    	int ID;
    	char choice;
    	cout<<"Enter the book ID you wanna borrow: ";
    	cin >> ID;
    	cout<<"Book is available.";
    	cout<<"\nDo you want to borrow(y or n): ";
    	cin >>choice;
    	if(choice == 'y'|| choice == 'Y')
    	{
    	cout<<"\nPlease do return on time.";
    	cout<<"\nYou have some books borrowed already! Please return them on their respective due dates.";
       }
       else if(choice == 'n' || choice == 'N')
       {
       	cout<<"Transcation failed.";
	   }
	   else
	   {
	   	cout<<"Invalid choice.";
	   }
	}
	else if (choice == 2)
	{
		int days;
		cout<<"How long has it been since due date of this book: ";
		cin >> days ;
		if(days > 0)
		{
		  cout <<"You will be fined a total of "<<days<<"$ for returning this book late!";
	     }
	     else if(days == 0)
	     {
	     	cout<<"Thank you for returning this book on time.";
		 }
		 else
		 {
		 	cout<<"Invalid number of days.";
		 }

	}
	else
	{
		cout<<"Invalid choice";
	}
}
