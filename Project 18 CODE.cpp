//PF project
#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};//global variable so that used in all functions

int win();//function decleration to check who won

void table();//function to display board

void table()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}

//table function defination


int win()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}


//defination of win function simply conditions are used to check who won
int main(){
	int player=1;//player is initialised with value=1
	int i;//for loop
	int choice;//variable for choice
	char mark;//for marking X or O
	do
	{
		table();//show updated table
			
			
					cout << "Player " << player << ", enter a number:  ";
		cin >> choice;//will take value were u want to put your sign whatever x or o
		if(player==1)mark='X';
		
		else 
			mark='O';
		
		
			if (choice == 1 && square[1] == '1')

			{
			square[1] = mark;}
		else if (choice == 2 && square[2] == '2')

			{
			square[2] = mark;}
		else if (choice == 3 && square[3] == '3')

		{
				square[3] = mark;}
		else if (choice == 4 && square[4] == '4')

			{
			square[4] = mark;}
		else if (choice == 5 && square[5] == '5')

			{
			square[5] = mark;}
		else if (choice == 6 && square[6] == '6')

		{
				square[6] = mark;}
		else if (choice == 7 && square[7] == '7')

		{
				square[7] = mark;}
		else if (choice == 8 && square[8] == '8')

		{
				square[8] = mark;}
		else if (choice == 9 && square[9] == '9')

		{
				square[9] = mark;}
		else
		{
			cout<<"Invalid move ";

			player--;//for reentering choice
			cin.ignore();//it will ignore the value
			cin.get();//it will retake the value
		}
		i=win();

		if(player==1){
			player=player+1;
		}
		else {
			player=player-1;
		}//used to switch turn of player 1 to 2 or viceversa
	}while(i==-1);table();
	
	
	if(i==1)

		cout<<"==>\aPlayer "<<--player<<" win ";//\a is used to alert soud
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
			
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



