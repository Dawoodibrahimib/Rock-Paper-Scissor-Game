#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


char GetuserOption()

{
	char c;
	cout<<"Enter your options:"<<"\n"<<"1:Rock"<<"\n"<<"2:Paper"<<"\n"<<"3:Scissor" << "\n";
	cout<<"----------------------------------"<<endl;
	cout<<"r for Rock,p for Paper,s for scissor:"<<"\n" << "Enter";
	cin>>c;
	while( c != 'r' && c!='p' && c != 's')
	{
		cout<<"r for Rock,p for Paper,s for scissor:"<<"\n"<<"Enter";
	    
	    cin >> c;
	}
	return c;
		
}

char ComputerOption()
{
	srand(time(0));
	
    int num = rand() % 3 + 1;
    
    if(num == 1) return 'r';
    if(num == 2) return 's';
    if(num == 3) return 'p';
    
}

string ShowOptions(char option)
{
	if(option == 'r') return "Rock";
	if(option == 'p') return "Paper";
	if(option == 's') return "Scissor";
	
}
void SelectWinner(char uChoice,char cChoice)
{
	if (uChoice == 'r' && cChoice == 'p') {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (uChoice == 'p' && cChoice == 's') {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (uChoice == 's' && cChoice == 'r') {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (uChoice == 'r' && cChoice == 's') {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == 'p' && cChoice == 'r') {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == 's' && cChoice == 'p') {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie. Play again win the Game." << endl;
    }
}


int main()
{   char x,a;
    string y,b;
    
	x=GetuserOption();
	y=ShowOptions(x);
	cout <<  "Your choice is " << y << endl;
	
	a=ComputerOption();
	b=ShowOptions(a);
	cout << "Computer option is " << b << endl;
	
	SelectWinner(x,a);
	
	
	

	
	
}
