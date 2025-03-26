#include<iostream>
using namespace std;

int numbers[] = { 7,9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
char check[] = { '1', '0', 'X', '9' ,'8', '7', '6', '5', '4', '3', '2' };

int main()
{
	char idnum[19];
	int idnums[18];
	int result = 1;
	cin >> idnum;
	for (int i = 0; i < 18; i++)
		idnums[i] = (int)(idnum[i] - '0');
	for (int i = 0; i < 17; i++)
	{
		result += idnums[i] * numbers[i];
	}
	if (result % 11)
		cout << check[result % 11-1];
	else
		cout << check[10];
	return 0;
}