#include<iostream>
#include<string>
using namespace std;
int main()
{
	int book = 7;
	int fine = 1;
	int amount = 0;
	int days;
	string choice;
	while (1)
	{
		cout << "Menu \n";
		cout << "1.Borrow \n";
		cout << "2. Return \n";
		cout << "3. Quit(Q) \n";
		cout << "Select One: \n";
		cin >> choice;
		if (choice == "1")
		{
			if (book > 0)
			{
				book--;
				cout << "Book Borrowed \n";
			}
			else
			{
				cout << "No book available\n";

			}
		}
		else if(choice=="2")
		{
			if (book < 7)
			{
				book++;
				cout << "Enter the NO. of Days: ";
				cin >> days;
				fine = days * fine;
				cout << "Book Returned\n";
			}
			else
			{
				cout << "Can't Return Library is full \n";

			}
			
		}
		else if (choice == "3" || choice == "Q")
		{
			cout << "Total fine: $" << fine << endl;
			
			cout << "Thankyou for using library\n";
			exit;
		}
		else
		{
			cout << "Invalid Choice\n";
		}
	}





	system("pause");
	return 0;
}