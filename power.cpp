#include <iostream>
using namespace std;

double power(double x, int n)
{
    double value = 1.0;
    while(n--)
        value *= x;
    return value;
}

int main()
{
    double input_x, pow;
    //double pow;
    int input_n;
    cout << "please enter the input_x and input_n" << endl;
    cin >> input_x >> input_n;
    pow = power(input_x, input_n);
    cout << input_x << "^" << input_n << "=" << pow << endl;
    return 0;
}