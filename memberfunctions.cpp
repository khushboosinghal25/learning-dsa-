#include <iostream>
using namespace std;
class C
{
    static int x;
    int y;

public:
    static void fun1()
    {
        cout << "value of x is : " << x << endl;
        cout << "value of y is : " << y << endl;
    }
    void fun2()
    {
        y = 43;
        cout << "value of x is : " << x << endl;
        cout << "value of y is : " << y << endl;
    }
};
int C::x = 67;
int main()
{
    C a;
    a.fun1();
    a.fun2();
    return 0;
} 