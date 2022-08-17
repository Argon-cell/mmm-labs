#include <iostream>
#include <cmath>


using namespace std;
const int n = 11;

double *aproximation(double x[n], double y[n]);

int main() {

    double x[n]={0.1, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5};
    double y[n]={-5.621, -3.406, -2.033, -1.105, -0.652, -0.459, 0.133, 1.144, 1.185, 1.567, 1.975};
    cout << endl;
    cout << "Аппроксимация методом меньших квадратов" << endl << endl;
    cout << "y = " << aproximation(x, y)[0] << "x " << aproximation(x, y)[1] << endl;
    cout << endl;
    return 0;

}

double *aproximation(double x[n], double y[n]){
        double mX = 0;
        double mXsquares = 0;
        double mY = 0;
        double mYX = 0;

        double b = 0;
        double a = 0;

        for (int j=0; j<n; j++){
                mX += x[j];
                mXsquares += pow(x[j], 2);
                mY += y[j];
                mYX += x[j] * y[j];
        }

        b = (n * mYX - mX * mY) / (mXsquares * n - pow(mX, 2));
        a = (mY - b * mX) / n;
        
        double *answerArray = new double[2];
        answerArray[0] = b;
        answerArray[1] = a;

        return answerArray;
                
}