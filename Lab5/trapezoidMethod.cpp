#include <iostream>
#include <math.h>

using namespace std;

double f(double x) {
    return (x * x);
}

double I(double a, double b, int n, double y) {
    return ((b - a) / (2 * n) * y);
}

int main() {
	int n; 
    double a = -1, b = 11, y, dy, I;

    cout << endl;
    cout << "Введите количество отрезков разделения: ";
	cin>>n;

    dy = (b - a) / n;
    y += f(a) + f(b);
    for (int i = 1; i < n; i++) {
        y += 2 * (f(a + dy * i));
    }

    I = (b - a) / (2 * n) * y;

    cout << "Площадь интеграла методом Трапеции: " << endl;
	cout << I << endl << endl;
}