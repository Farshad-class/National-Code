#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctime>
#include <cstdint>
#include <cinttypes>

#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
using namespace std;

void f(int64_t);

int main()
{

	int64_t n;
	cout << "Please enter national code :";
	cin >> n;
	if (n == 1111111111 || n == 2222222222 || n == 3333333333 || n == 4444444444 || n == 5555555555 || n == 6666666666 || n == 7777777777 || n == 8888888888 || n == 9999999999 || n == 0000000000)
		do
		{
			cout << "Please enter national code :";
			cin >> n;
		} while (false);

		f(n);

		getch();

}

void f(int64_t n)
{
	int64_t k;
	int64_t m, r;
	int64_t sum = 0;
	int64_t a[10];
	for (int i = 0; i <= 9;i++)
	{
		k = n % 10;
		n = n / 10;
		a[i] = k;
	}
	for (int j = 1; j <= 9;j++)
	{
		sum = sum + a[j] * (j + 1);
	}
	m = sum % 11;
	if (m < 2)
	{
		if (m == a[0])
		{
			cout << "national code is true";
		}
		else
		{
			cout << "national code is false";
		}
	}
	else
	{
		r = 11 - m;
		if (r == a[0])
			cout << "national code is true";
		else
		{
			cout << "national code is false";
		}
	}

}
