// #include <iostream>
// using namespace std;


// int main() {
//     int x = 10; // adx
//     int y1 = 20; //ady1
//     cout<< &x <<endl;  //adx 

//     float y = 10.5; // ady
//     cout<< &y <<endl;  //ady

//     //It doesnt work for character variables
//     char ch = 'A'; // adch
    

//      //cout<<"Character"<<&ch<<endl; //'A'
//     //Explicit Typecasing from char* to void*
//     cout<<&ch<<endl;
//     cout<<(void *)&ch <<endl;

//     //Pointers

//     int * xptr;  //addxptr
//     //Store the address of a variable
//     xptr = &x; //xptr = adx

//     cout<< &x<<endl; //adx
//     cout<< xptr <<endl; //adx

//     //Re-assign another address to the variable
//     xptr = &y1; // xptr = ady1
//     cout<< &y1 <<endl; //ady1
//     cout<<xptr<<endl; //ady1



// return 0;
// }
#include <iostream>
using namespace std;


// #include<iostream>
using namespace std;


int main(){

	int x = 10; // adx

	int *y; // ady

	y=&x;  // y= adx

	cout<< x <<endl; // 10

	cout<< &x <<endl; //adx
	
	x = x + 10; //x = 20
	cout<< &x<<endl; // adx
	cout<< y <<endl; //adx

cout<<"Here"<<endl;  //Here 
	cout<< *y <<endl;  //20
	x =   (*(&x)) + 1; // 21
	cout<<x<<endl; //21 
	cout<<&x<<endl; // adx
	cout<<"address of x +  1 "<<&x + 1<<endl;  // adx + (1*4)  // suppose adx is 0x1235 then 0x1239


	int a=5;  // ada
	int b = 10; // adb
	
	int c = a +b ; //adc c=15
	cout<< &(c) <<endl;	 //adc

	return 0;
}
