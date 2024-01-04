#include<iostream>
using namespace std;
class employees{
    public:
union employee{
    char name[20];
    char dpt[10];
    double salary;
    char dsgn[20];
     };
union employee arr[30];
};
int main(){
   employees emp;
   int n;
   cout<<"Enter the number of employees"<<endl;
   cin>>n;
   for(int i=1;i<=n;i++){
    cout<<"Enter the name of the employee"<<endl;
    cin>>emp.arr[i].name;
    cout<<"Enter the department of the employee"<<endl;
    cin>>emp.arr[i].dpt;
    cout<<"enter the salary of the employee"<<endl;
    cin>>emp.arr[i].salary;
    cout<<"enter designation of the employee"<<endl;
    cin>>emp.arr[i].dsgn;
   
   }
   for(int i=1;i<=n;i++){
    cout<<"Details of employees are:"<<endl;
    cout<<"Name of employee"<<i <<" is "<< emp.arr[i].name<<endl;
    cout<<"Department of the employee"<<i <<" is "<< emp.arr[i].dpt<<endl;
    cout<<"Salary of the employee "<<i << " is "<< emp.arr[i].salary<<endl;
    cout<<"Designation of employee "<< i <<"is"<< emp.arr[i].dsgn<<endl;
     }
     return 0;
}