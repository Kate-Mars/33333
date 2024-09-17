#include <iostream>
using namespace std;
int main()
{
	int a, b;
	setlocale(LC_ALL, "ru");
	cout << "¬ведите 2 целых числа: " << endl;
	cin >> a >> b;
	cout << "¬аша сумма чисел: " << a + b << endl;
	return 0;
}