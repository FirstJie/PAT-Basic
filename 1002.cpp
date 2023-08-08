#include<iostream>
#include<string>
using namespace std;

int main()
{
	string Time[]
	{
		"ling", "yi", "er", "san","si",
		"wu", "liu", "qi", "ba", "jiu"
	};

	string str;
	cin >> str;
	int sum = 0;
	for (auto& c : str) sum += (c ^ 48);
	string res = to_string(sum);

	cout << Time[res[0] ^ 48];
	for (int i = 1; i < res.size(); i++)
		cout << Time[res[i] ^ 48];
	return 0;
}