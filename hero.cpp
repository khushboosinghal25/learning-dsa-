#include <iostream>
#include<string.h>
using namespace std;
class Hero
{
    // properties
    public:
    char *name;
    int health;
    char level;
   static  int timeToComplete;
    Hero()
    {
        cout << "Constructor Called " << endl;
        name= new char[100];
    }
    // Parameterized constructor
    Hero(int health)
    {
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    
    //copy constructor
    Hero(Hero &temp)
    {
        char *ch= new char[strlen(temp.name) +1 ];
        strcpy(ch,temp.name);
        this->name=ch;
        cout << "copy constructor is called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout<<endl;
        cout<<"name: "<<this->name<<endl;
        cout << "level is :" << this->level << endl;
        cout << "health is:  " << this->health << endl;
    }
    int getHealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        // if(name=="A")
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    static int random(){
        cout<<health<<endl;
    }
    //destructor
    ~Hero(){
        cout<<"Destructor called "<<endl;
    }
};
int Hero::timeToComplete = 5;
int main()
{
    // cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;
    // Hero a;
    // cout<<a.timeToComplete<<endl;
    // Hero b;
    // b.timeToComplete=10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;

    //static
    // Hero a;
    // //dynamic
    // Hero *b= new Hero();
    // //manually destructor called
    // delete b;

}

    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[100]="Babbar"; 
    // hero1.setname(name);

    // hero1.print();
    //use default copy constructor
//    Hero hero2=hero1;
//    Hero hero2(hero1);
// //    hero2.print();
//    hero1.name[0]='G';
//    hero1.print();
//    hero2.print();
//    hero1=hero2;
//    hero1.print();
//    hero2.print();
   

    // object created statically
    // Hero ramesh(10);
    // // cout<<"address of ramesh "<<&ramesh<<endl;
    // // ramesh.getHealth();
    // // dynamically
    // Hero *h = new Hero(11);
    // Hero temp(22, 'b');
    // temp.print();
    // Hero suresh(70, 'C');
    // suresh.print();
    // // copy constructor is called
    // Hero ritesh(suresh);
    // ritesh.print();

    // static allocation
    /* Hero a;
     a.setHealth(80);
     a.setLevel('B');
     cout << "level is " << a.level << endl;
     cout << "health is " << a.getHealth() << endl;

     // dynamically
     Hero *b = new Hero;
     b->setHealth(70);
     b->setLevel('A');
     cout << "level is " << (*b).level << endl;
     cout << "health is " << (*b).getHealth() << endl;
     cout << "level is " << b->level << endl;
     cout << "health is " << b->getHealth() << endl;
     */

    // creation of object
    // Hero Ramesh;
    // cout<<"ramesh health is "<<Ramesh.getHealth()<<endl;
    // cout<<"size of ramesh is : "<<sizeof(Ramesh)<<endl;
    // Ramesh.health = 70;
    // Ramesh.level = 'A';
    // cout << "health is : " << Ramesh.health << endl;
    // cout << "level is : " << Ramesh.level << endl;
    // cout<<"size : "<<sizeof(h1)<<endl;
//     return 0;
// }