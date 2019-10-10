#include <iostream>


	using namespace std;

	int main()
	{
		int n;
		cout << "Enter number:\t";
		cin >> n;
		cout << "\nFactors of " << n << " are:\n";
		
		for (int i = 1; i < sqrt(n); ++i)
		{
			if (n % i == 0)
			{
				if (n / i == i)
					cout << i << ' ';
				else
					cout << i << ' ' << n / i << ' ';
			}
		}

		return 0;
	}
