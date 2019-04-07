#include <iostream>
using namespace std;

double arctan(double x)
{
    double value = 0.0;
    double sqr = x * x;
    double e = x;
    int i = 1;
    while (e / i > 1e-15)
    {
        double current_value = e / i;
        value = (i % 4 == 1) ? value + current_value : value - current_value;
        e *= sqr;
        i += 2;
        cout << i << endl;
    }
    return value;
}

int main()
{
    double x1 = 16.0 * arctan(1 / 5.0);
    double x2 = 4.0 * arctan(1 / 239.0);
    cout << "pi is " << x1 - x2 << endl;
    cin.get();
    return 0;
}