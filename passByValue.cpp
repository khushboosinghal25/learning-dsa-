#include <iostream>
using namespace std;
void dummy(int n)
{
    for (int i = 1; i <= 5; i++)
    {
        n++;
    }
    cout << " n is " << n << endl;
}
int main()
{
    int n;
    cin >> n;
    dummy(n);
    cout << "number n is " << n << endl;
    return 0;
}
// pass by value ka matlab h ki saamne wale ke paas ek superpower h aur woh uski dummy bna leta h without touching it.
/*When you use pass-by-value, the compiler copies the value of an argument in a calling function to a 
corresponding non-pointer or non-reference parameter in the called function definition. 
The parameter in the called function is initialized with the value of the passed argument.*/