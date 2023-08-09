#include<iostream>
#include<string>

using namespace std;

int main()
{
	string Max_name, Min_name, Max_id, Min_id;
	int n;
	cin >> n;

	int max_score, min_score;
	for(int i = 0; i < n; i++)
	{
		string name, stuid;
		int score;
		cin >> name >> stuid >> score;
		if (!i || score > max_score)
		{
			Max_name = name;
			Max_id = stuid;
			max_score = score;
		}
		if (!i || score < min_score)
		{
			Min_name = name;
			Min_id = stuid;
			min_score = score;
		}
	}
	cout << Max_name << " " << Max_id << endl;
	cout << Min_name << " " << Min_id << endl;
	return 0;;
}