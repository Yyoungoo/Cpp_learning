#include <iostream>
using namespace std;

enum hour1 {one=1, two ,three, four, five, six};
struct MyTimeStruct
{
    unsigned int year;
    unsigned int month;
    unsigned int day;

    hour1 hour;
    unsigned int min;
    unsigned int sec;
};

int main()
{
    //强制类型转换
    MyTimeStruct mytime = {2019, 4, 6,hour1(6), 55, 11};
    cout << "please input the current time" << endl;
    //不能直接用键盘通过"cin>>"向枚举变量输入元素值，只能通过初始化或赋值运算符输入。
    //cin >> mytime.hour;
    //可用"cout<<"输出枚举变量，但输出的是元素对应的序号值，而不是元素值。
    cout << "the current time is:" << mytime.year << "/"
         << mytime.month << "/"
         << mytime.day << "/"
         << mytime.hour << ":"
         << mytime.min << ":"
         << mytime.sec << endl;
    mytime.hour = hour1(7);
    //嗯哼？
    cout << mytime.hour << endl;
    cin.get();
    return 0;
}
