#include<iostream>
using namespace std;
int sushu(int n)
{
	int i,;
	for (i = 1;i <= n;i++)
		if (n % i == 0 && i != n && i != 1)
			return 0;
	return 1;
}
int main()
{
	register int k;
	int a, b;
	for (k = 100;k <= 200;k=k+2)
		for (a = 1;a <= 200;a++)
			for (b = 1;b <= 200;b++)
				if (sushu(a) == 1 && sushu(b) == 1 && a + b == k)
					cout << "是" << endl;
	return 0;
}
