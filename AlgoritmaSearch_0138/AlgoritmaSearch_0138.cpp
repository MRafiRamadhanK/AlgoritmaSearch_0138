#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input 
{
	while (true)
	{
		cout << "Enter The number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
	}
}