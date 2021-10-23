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
    ~student()
    {
        cout<<"Destructor called"<<endl;
    }
    // void setName(string s)
    // {
    //     name=s;
    // }

    // void getName()
    // {
    //     cout<<name<<endl;  
    // }
    // void printinfo()
    // {
    //     cout<<"Name = "<<name<<endl;
    //     cout<<"Gender = "<<gender<<endl;
    //     cout<<"Age = "<<age<<endl;
    // }
    // bool operator == (student &a)
    // {
    //     if(name==a.name && gender==a.gender && age ==a.age)
    //     {
    //         return true;
    //     }
    //     return false;
    // }

};
int main()
{
    // student a;
    // a.name="Rahul";
    // a.gender=1;
    // a.age=21;
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    //     cout<<"Age = ";
    //     cin>>arr[i].age;

    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printinfo();
    // }
    // student a("Chetan",1,21);
    // // a.getName();
    // // a.printinfo();
    // student b("rahul",1,22);
    // student c=a;

    // if (b==a)
    // {
    //     cout<<"same"<<endl;
    // }
    // else
    // {
    //     cout<<"not same"<<endl;

    // }
    student a;
    student b("Chetan",1,21);
    student c("Rahul",1,22);
    student d = b;
    return 0;
}