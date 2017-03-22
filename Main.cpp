#include <iostream>

using namespace std;

int sum(int);

int main()
{
	int num = 0;
	cout << "Enter a positive integer:  ";
	cin >> num;
	
	cout << "The sum from 0 to " << num << " is " << sum(num) << endl;

	return 0;
}


int sum(int number)
{
	if(number == 0)
	{
		return 0;
	}
	else if(number < 0)
	{
		cout << "You idiot, Thats a negative number" <<endl;
		return -1;
	}
	else
	{
		return number+sum(number-1);
	}
}

