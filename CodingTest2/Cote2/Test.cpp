#include <iostream>
using namespace std;

int t, a,b;
int main()
{
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;

		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a+b<<"\n";
	}

}