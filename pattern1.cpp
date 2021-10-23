#include<iostream>
using namespace std;
int main()
{
    //rectangle
    int rows,col;
    cout<<"Enter number of rows of rectangle: ";
    cin>>rows;
    cout<<"Enter number of columns of rectangle: ";
    cin>>col;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}