#include <iostream>
using namespace std;

int n;
string str;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		cout << str[0] << str[str.size() - 1]<<"\n";
	}
}