#include <iostream>
using namespace std;

int main(void)
{
    int i = 1, sum = 0;
    do{
        sum += i;
        i++;
    } while (i < 11);
    cout << "sum = "<< sum << endl;
    cin.get();
    return 0;
}