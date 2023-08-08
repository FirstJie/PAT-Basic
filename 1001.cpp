#include<iostream>

int main()
{
	int n, cnt = 0;
	scanf("%d", &n);

	while (n != 1)
	{
		n = n % 2 == 0 ? n / 2 : (3 * n + 1) / 2;
		cnt++;
	}
	printf("%d", cnt);
}