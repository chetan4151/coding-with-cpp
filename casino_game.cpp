#include <bits/stdc++.h>
#include <ctime>
using namespace std;

class casino
{
    string name[50];
    int amnt[50]; 
    int bidamnt[50];
    int guess[50];
    int dice[50]; 
    char choice[50];
    int n;
    
    public:
    casino()
    {
        cout<<"Enter the number of players: "<<endl;
        cin>>n;
    }
    void set_name();
    void diposit();
    void start_the_game();
    void result();

};

void casino :: set_name()
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the name of "<<i+1<<" player: "<<endl; 
        cin>>name[i];
    }
}

void casino::diposit()
{
    for(int i = 0; i < n; i++)
    {
        cout <<"\n\n"<<name[i]<<", Please Deposit Your Amount: $"<<endl;
        cin>>amnt[i];
    }
}

void casino::start_the_game()
{  
    srand(time(0));
    system("cls");        
}

void casino::result()
{
    for (int i = 0; i < n; i++)
    {
            
        do{
            do
            {
                cout <<"\n\nWelcome "<<name[i]<<", Are You Ready To Play? "<<"\n\n"; 
                cout<<"Enter Bid Amount: $";
                cin >> bidamnt[i];
                if(bidamnt[i] > amnt[i])
                    cout <<"You Can not Bid More Than Current Amount\n"
                            <<"\nRe-enter Amount: ";           
            }while(bidamnt[i] > amnt[i] );

            do
            {
                cout<<name[i]<<", Please Guess The Number Between 1 To 10 :"<<endl;
                cin >> guess[i];
                if(guess[i] <= 0 || guess[i] > 10)
                    cout << "\nNumber Sholud Be Between 1 To 10\n"
                         <<"\nGuess Numer Again: ";
                        
            }while(guess[i] <= 0 || guess[i] > 10 );

            dice[i] = rand()%10 + 1;
   
            if(dice[i] == guess[i])
            {
                cout <<"\nHurray You Won " << bidamnt[i] * 10<<"$";
                amnt[i] = amnt[i] + bidamnt[i] * 10;
            }
            else
            {
                cout << "Sorry! " <<name[i]<<" You Lose "<< bidamnt[i] <<"$\n";
                amnt[i] = amnt[i] - bidamnt[i];
            }

            cout << "The Winning Number Was: " << dice[i] <<"\n";
            cout <<name[i]<<", Your Remaining Amount Is " << amnt[i] << "$\n";
            if(amnt[i] == 0)
            {
                cout << "\nSorry You Don't Have Money To Play \n";
                break;
            }
            cout << "\nYou Want To Play Again Press (y/n)? "; 
            cin >> choice[i];
        }while(choice[i] =='Y'|| choice[i]=='y');
    }    
}

void rules();
int main(){
    cout<<"\n===============================================================================================";
 cout<<"\n\t\t   CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
 cout<<"\n\t\t CC          A  A      SS             III     NN N   NN   OO      OO    ";
 cout<<"\n\t\tCC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    ";
 cout<<"\n\t\t CC        AAAAAAAA           SS      III     NN   N NN   OO      OO    ";
 cout<<"\n\t\t   CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
 cout<<"\n===============================================================================================\n";
    rules();
    casino c1;
    c1.set_name();
    c1.diposit();
    cout<<"\n===============================================================================================";
    cout<<"\n\t\t   SSSSSSSSS   TTTTTTTTT       A        RRRRRR      TTTTTTTTT    ";
    cout<<"\n\t\t   SS             TTT         A  A      RR   RR        TTT       ";
    cout<<"\n\t\t   SSSSSSSSS      TTT        A    A     RRRRR          TTT       ";
    cout<<"\n\t\t          SS      TTT       AAAAAAAA    RR   RR        TTT       ";
    cout<<"\n\t\t   SSSSSSSSS      TTT      A        A   RR     RR      TTT       ";
    cout<<"\n===============================================================================================\n";
    c1.start_the_game();
    c1.result();
    return 0;
}
 
void rules()
{
    system("cls");
    cout<<"\n===============================================================================================\n";
    cout << "\t\t\tGame Rules";
    cout<<"\n===============================================================================================";
    cout << "\n1. Choose Number Between 1 To 10";
    cout << "\n2. Winning Amount Will Be 10 Times Of Bid Amount";
    cout << "\n3. Loose Amount Will Be Biding Amount";
    cout << "\n4. You Can Leave A Game Any Time";
    cout<<"\n===============================================================================================\n";
}