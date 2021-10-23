// // C++ program to demonstrate implementation 
// // of Inheritance 

// #include <iostream> 
// using namespace std; 

// //Base class 
// class Parent 
// { 
// 	public: 
// 	int id_p; 

// 	// protected:
// 	// 	int noOflolilops=7;
// }; 

// // Sub class inheriting from Base Class(Parent) 
// class Child : public Parent 
// { 
// 	public: 
// 	int id_c; 
// }; 

// //main function 
// int main() 
// { 
	
// 		Child obj1; 
		
// 		// An object of class child has all data members 
// 		// and member functions of class parent 
// 		obj1.id_c = 7; 
// 		obj1.id_p = 91; 
// 		cout << "Child id is " << obj1.id_c << endl; 
// 		cout << "Parent id is " << obj1.id_p << endl; 
		
// 		return 0; 
// }
// #include<iostream>
// using namespace std;

// 	class Human{

// 		protected :
// 			//int speedOfBrain = 200; gves error 
// 			char hasEmotions[10] ="Yes";
// 			char understandsSarcasm[10] = "Yes";
// 			char feelsPain[10] = "Yes";
// 			void speak()
// 			{
// 					cout<<"I am a human\n";
// 			}
// 	};

// 	class Robot {

// 		protected :
// 			// char hasEmotions[10] ="STFU";
// 			int speedOfBrain = 100;
// 			char canLie[20] = "never lies";
// 			char hasFriends[10] ="No";
// 			void speak()
// 			{
// 					cout<<"I am a robo\n";
// 			}
// 		};

// 	class Sheldon : public Human , public Robot{
// 		private :
// 			char hasFriends[10] ="Many";
// 		public:
// 			void speak()
// 			{
// 				cout<<"Bazingaaa I am a robo human\n";
// 			}
// 			void printDetails(){
// 				cout<<"Does Sheldon have emotions ? "<<hasEmotions<<endl;
// 				cout<<"Does Sheldon understand sarcasm ? "<<understandsSarcasm<<endl;
// 				cout<<"Does Sheldon feel pain ? "<<feelsPain<<endl;
// 				cout<<"What is speed of Sheldon's brain ? "<<speedOfBrain<<endl;
// 				cout<<"Does Sheldon lie ? "<<canLie<<endl;
// 				cout<<"Does Sheldon has any friends ? "<<hasFriends<<endl;
// 				//speak();
// 			}
// 	};
// 	int main(){

// 		Sheldon s ;
// 		s.printDetails();
// 		s.speak();

// 		return 0;
// 	}
#include<iostream>
#include<string>
#include<cstring>
using namespace std ;

class Human{
protected:
	int noOfHands = 2;
	int noOfLegs = 2;
	int noOfEyes = 2;
	int noOfEars = 2;
	string hair;
	int age=0;
public :
	void print(){
		cout<<age<<endl;
	}
	void setAge(int a){ // setter 
			age = a;
	}

};

class SirDirubai : public Human{
	protected:
		char money[10] = "Billions";
		string contribution = "Extreme";
};

class MukeshA : public SirDirubai{
	protected:
		char iplTeam[20]="Mumbai Indians";
		int numberOfCars = 500;
		int numberOfJets = 200;
		int noOfhair = 10;
	
};

class Anant : public MukeshA{
	private :
		string college = "Down University";
		//int noOfhair = 1000;

};

class Isha : public MukeshA{
	private :
		string college = "Yale University";
		

};




int main(){
	
	Anant a ;
	a.setAge(100);
	a.print();
	cout<<endl;
	//cout<<a.noOfhair<<endl; 
	// gives error  WHY HW ???

	return 0;
}
