#include<iostream>
using namespace std;

void playGame(char cube[3][3]);
void printCube(char cube[3][3]);
void getChoice1(char cube[3][3]);
void getChoice2(char cube[3][3]);
bool isP1Winning(char cube[3][3]);
bool isP2Winning(char cube[3][3]);


// Main Function for Call;

int main(){
	char cube[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	cout<<"\t\t\t\t\tTIC TAC TOE GAME\n\n";
	printCube(cube);
	playGame(cube);
	
}



//Principle Module for Game Play

void playGame(char cube[3][3]){
	while(true){
		getChoice1(cube);
		if(isP1Winning(cube)){
			printCube(cube);
			cout<<"Player 1 has won the Game.\n\n";
			return;
		}else{
			printCube(cube);
		}
		
		getChoice2(cube);
		if(isP2Winning(cube)){
			printCube(cube);
			cout<<"Player 2 has won the Game.\n\n";
			return;	
		}else{
			printCube(cube);
		}
	}
}

// Getting Choice by Player 1;

void getChoice1(char cube[3][3]){
	char ch;
	cout<<"Player 1's turn : Select Position ";
	cin>>ch;
	
	switch(ch){
		case '1': cube[0][0]='X'; break;
		case '2': cube[0][1]='X'; break;
		case '3': cube[0][2]='X'; break;
		case '4': cube[1][0]='X'; break;
		case '5': cube[1][1]='X'; break;
		case '6': cube[1][2]='X'; break;
		case '7': cube[2][0]='X'; break;
		case '8': cube[2][1]='X'; break;
		case '9': cube[2][2]='X'; break;
		default : cout<<"Wrong option\n";
	}
}

// Getting Choice by Player 2;

void getChoice2(char cube[3][3]){
	char ch;
	cout<<"Player 2's turn : Select Position ";
	cin>>ch;
	
	switch(ch){
		case '1': cube[0][0]='O'; break;
		case '2': cube[0][1]='O'; break;
		case '3': cube[0][2]='O'; break;
		case '4': cube[1][0]='O'; break;
		case '5': cube[1][1]='O'; break;
		case '6': cube[1][2]='O'; break;
		case '7': cube[2][0]='O'; break;
		case '8': cube[2][1]='O'; break;
		case '9': cube[2][2]='O'; break;
		default : cout<<"Wrong option\n";
	}
}

// Printing the cube
 
void printCube(char cube[3][3]){
	cout<<"\t\t\t\t\t     |     |     "<<endl;
	cout<<"\t\t\t\t\t  "<<cube[0][0] <<"  |  "<<cube[0][1]<<"  |  "<<cube[0][2]<<"  "<<endl;
	cout<<"\t\t\t\t\t_____|_____|_____"<<endl;
	cout<<"\t\t\t\t\t     |     |     "<<endl;
	cout<<"\t\t\t\t\t  "<<cube[1][0] <<"  |  "<<cube[1][1]<<"  |  "<<cube[1][2]<<"  "<<endl;
	cout<<"\t\t\t\t\t_____|_____|_____"<<endl;
	cout<<"\t\t\t\t\t     |     |     "<<endl;
	cout<<"\t\t\t\t\t  "<<cube[2][0] <<"  |  "<<cube[2][1]<<"  |  "<<cube[2][2]<<"  "<<endl;
	cout<<"\t\t\t\t\t     |     |     "<<endl;	
}


//Checking if Player 1 Won

bool isP1Winning(char cube[3][3]){
	if(cube[0][0]=='X' && cube[0][1]=='X' && cube[0][2]=='X')
		return true;
	if(cube[0][0]=='X' && cube[1][0]=='X' && cube[2][0]=='X')
		return true;
	if(cube[2][0]=='X' && cube[2][1]=='X' && cube[2][2]=='X')
		return true;
	if(cube[0][2]=='X' && cube[1][2]=='X' && cube[2][2]=='X')
		return true;
	if(cube[0][0]=='X' && cube[1][1]=='X' && cube[2][2]=='X')
		return true;
	if(cube[0][2]=='X' && cube[1][1]=='X' && cube[2][0]=='X')
		return true;
	return false;		
}


//Checking if Player 2 Won

bool isP2Winning(char cube[3][3]){
	if(cube[0][0]=='O' && cube[0][1]=='O' && cube[0][2]=='O')
		return true;
	if(cube[0][0]=='O' && cube[1][0]=='O' && cube[2][0]=='O')
		return true;
	if(cube[2][0]=='O' && cube[2][1]=='O' && cube[2][2]=='O')
		return true;
	if(cube[0][2]=='O' && cube[1][2]=='O' && cube[2][2]=='O')
		return true;
	if(cube[0][0]=='O' && cube[1][1]=='O' && cube[2][2]=='O')
		return true;
	if(cube[0][2]=='O' && cube[1][1]=='O' && cube[2][0]=='O')
		return true;
	return false;		
}
