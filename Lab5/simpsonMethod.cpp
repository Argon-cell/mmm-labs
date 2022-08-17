#include <iostream>
#include <math.h>
using namespace std;
 
double f(double x)
{
	return x*x;	
}
 
int main() {
	double a = -1, b = 11, eps = 0.00001;
	double I = eps + 1, I1=0;
    
    for (int n = 2; (n <= 4) || (fabs(I1 - I) > eps); n *= 2) {
		
        double h, sum2 = 0, sum4 = 0, sum = 0;
		
        h = (b - a) / (2 * n);

		for (int i = 1; i <= 2 * n - 1; i += 2) {   
			sum4 += f(a + h * i);
			sum2 += f(a + h * (i + 1));
		}

		sum = f(a) + 4 * sum4 + 2 * sum2 - f(b);
		I = I1;
		I1 = (h / 3) * sum;
	}

    cout << "Площадь интеграла методом Симпсона: " << endl;
	cout << I1 << endl << endl;
	return 0;
}