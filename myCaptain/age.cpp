#include<iostream>
using namespace std;
int main()
{
    //Program to check voting eligibility
    int age;
    string choice;
    do
    {
        cout<<"Enter your age:";
        cin>>age;
        if (age>=18)
        {
            cout<<"You can Vote"<<endl;
        }
        else if (age<0)
        {
            cout<<"Enter a valid age!!!"<<endl;
            continue;
        }
        else
        {
            cout<<"You cannot vote"<<endl;
            cout<<"You can vote after "<<18-age<<" years"<<endl;
        }
        cout<<"Do you want to check again(Enter yes or no):";
        cin>>choice;
    } while (choice=="yes");
    return 0;
}
