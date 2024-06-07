#include <iostream>
using namespace std;
class Human
{
public:
    int height, weight, age;
    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        this->weight = w;
    }
};
class male : public Human{
    public:
    string color;
    void sleep(){
        cout<<"Male sleeping "<<endl;
    }
};
int main()
{
    Human h1;
    cout << "size : " << sizeof(h1) << endl;
    cout << h1.getAge();
    male m1;
    cout<<m1.age<<endl;
    return 0;
}