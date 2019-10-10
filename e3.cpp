#include <iostream>

	using namespace std;

	int main()
	{
		int arr[10], n, flag = 0;
		cout << "Enter 10 numbers\n";
		for (int i = 0; i < 10; ++i)
			cin >> arr[i];
		
		cout << "Enter number to be found\t";
		cin >> n;

		for (int i = 0; i < 10; ++i)
		{
			if (arr[i] == n)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			cout << n << " is present in the array";
		else
			cout << n << " is not present in array";

		return 0;
	}
