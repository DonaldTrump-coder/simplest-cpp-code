#include<iostream>
using namespace std;
int main()
{
	cout << "斐波那契数列：" << endl;
	int a, b, c;
	a = 1;b = 1;
	cout << a << " " << b;
	int i;
	for (i = 1;i <= 20;i++)
	{
		c = a + b;
		cout << " " << c;
		a = b;b = c;
	}
	return 0;
}

