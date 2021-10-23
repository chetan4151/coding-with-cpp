#include<iostream>
using namespace std;
class student
{
    string name;
    public:

    bool gender;
    int age;
    student ()
    {
        cout<<"Default constructor"<<endl;
    }
    student(string s,bool g,int a)
    {
        cout<<"Parameterised constructor"<<endl;
        name=s;
        gender=g;
        age=a;
    }//Parameterised constructor
    student(student &a)
    {
        cout<<"Copy constructor"<<endl;
        name=a.name;
        gender=a.gender;
        age=a.age;
    }


};
int main()
{
     student a("Neha",0,23);
     student b("Chetan",1,21);
     student c("Rahul",1,22);
     student d = a;
    
    return 0;
}
