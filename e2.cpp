
	#include <iostream>
	#include <algorithm>

	using namespace std;

	int main()
	{
		int n;
		cin >> n;
		if (n < 0)
			cout << n << " is negative" << endl;
		else if (n > 0)
			cout << n << " is positive" << endl;

		return 0;
	}
