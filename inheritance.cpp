#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
       this->weight=w;
    }
    int getHeight(){
        return this->height;
    }
    void setHeight(int h){
        this->height=h;
    }
};
class Male :public Human
{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping "<<endl;
        cout<<"Male sleeping  "<<endl;
    }
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    object1.setWeight(54);
    object1.setHeight(154);
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.color<<endl;
    object1.sleep();
    return 0;
}