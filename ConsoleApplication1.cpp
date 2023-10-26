
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	int a = 0;
	cout << "Введите число \n";
	cin >> n;
 	for (int i = 0; i < n; i++)
	{
		a += i;
	}
	cout << "Сумма чисел: \n" << a;
}

