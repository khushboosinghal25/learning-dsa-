#include <iostream>
using namespace std;
void swaps(int a, int b)
{
    swap(a, b);
}
int main()
{
    int a, b;
    cout << "a is " << endl;
    cin >> a;
    cout << "b is " << endl;
    cin >> b;

    swap(a, b);
    cout << a << " ";
    cout << b;
}
// function banana sikh gyi hoon