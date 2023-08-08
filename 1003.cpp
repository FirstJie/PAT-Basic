#include <iostream>
#include <string>
using namespace std;


// 本题可能有点表诉不清,本题只需要满足下面要求就可以了
// 1, P 与 T 只能有一个且PAT这三个必须都要有
// 2, P之前的字符数乘以PT之间的字符数等于T之后的字符数
// 3, PT之间必须有字符

int main()
{
	int n;
	cin >> n;
	string str;

	while (n--) {
		cin >> str;
		int P = 0, A = 0, T = 0;
		int pre = 0, last = 0, i = 0;

		for (i = 0; i < str.size(); i++)
		{
			if (str[i] == 'P') P++, pre = i;
			else if (str[i] == 'A') A++;
			else if (str[i] == 'T') T++, last = i;
			else break;
		}

		int flag = (P == 1 && T == 1 && A > 0 && last - pre != 1 && (pre - 0) * (last - pre - 1) == str.size() - last - 1);
		printf("%s\n", (i >= str.size() && flag) ? "YES" : "NO");
	}
	return 0;
}