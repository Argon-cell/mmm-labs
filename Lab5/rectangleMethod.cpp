#include <iostream>
using namespace std;

double f(double x)
{
	return (x * x);
}
int main() 
{
	double a = -1, b = 11;
    int n;
    
    cout << endl;
    cout << "Введите количество отрезков разделения: ";
	cin >> n;

    double s = (f(a) + f(b)) / 2;
	double h = (b-a) / n;

	for (int i = 1; i <= n - 1; i++)
	{ 
		s += f(a + i * h);
	}
	double I = h * s;

    cout << "Площадь интеграла методом Прямоугольников: " << endl;
	cout << I << endl << endl;
	
	return 0;
}