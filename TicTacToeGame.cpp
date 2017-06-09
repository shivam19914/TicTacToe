// TicTacToeGame.cpp : Defines the entry point for the console application.
//
/**********************************
Auther  Name: Shivam Singh
Email Id: shivam19914@gmail.com
Date: 09 June'17
//**********************************/
#include "stdafx.h"
#include<iostream>
using namespace std;
char player = 'X';
char mat[3][3] = {'1','2','3','4','5','6','7','8','9'};
int NumberOfTerms;
void show()
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}
char Input()
{
	int num;
	//if(player == 'X')
	cout << player<<" :This is your tern," <<"Enter a number: ";
	cin >> num;

	if (num == 1)
	{
		if (mat[0][0] == '1')
			mat[0][0] = player;
		else
		{
			cout << "This numer is already used. Please enter a valid number!" << endl;
			Input();
		}
	}
	else if (num == 2) {
		if (mat[0][1] = '2')
			mat[0][1] = player;
		else
		{
			cout << "This numer is already used. Please enter a valid number!" << endl;
			Input();
		}
	}
	else if (num == 3) {
		if (mat[0][2] = '3')
			mat[0][2] = player;
		else
		{
			cout << "This numer is already used. Please enter a valid number!" << endl;
			Input();
		}
	}
	else if (num == 4) {
		if (mat[1][0] = '4')
			mat[1][0] = player;
		else
		{
			cout << "This numer is already used. Please enter a valid number!" << endl;
			Input();
		}
	}
	else if (num == 5) {
		if (mat[1][1] = '5')
			mat[1][1] = player;
		else
		{
			cout << "This numer is already used. Please enter a valid number!" << endl;
			Input();
		}
	}
	else if (num == 6) {
		if (mat[1][2] = '6')
			mat[1][2] = player;
		else
		{
			cout << "This numer is already used. Please enter a valid number!" << endl;
			Input();
		}
	}
	else if (num == 7) {
		if (mat[2][0] = '7')
			mat[2][0] = player;
		else
		{
			cout << "This numer is already used. Please enter a valid number!" << endl;
			Input();
		}
	}
	else if (num == 8) {
		if (mat[2][1] = '8')
			mat[2][1] = player;
		else
		{
			cout << "This numer is already used. Please enter a valid number!" << endl;
			Input();
		}
	}
	else if (num == 9) {
		if (mat[2][2] = '9')
			mat[2][2] = player;
		else
		{
			cout << "This numer is already used. Please enter a valid number!" << endl;
			Input();
		}
	}
	show();
	//check is current player wins
	if (   (mat[0][0] == player && mat[0][1] == player && mat[0][2] == player)
		|| (mat[1][0] == player && mat[1][1] == player && mat[1][2] == player)
		|| (mat[2][0] == player && mat[2][1] == player && mat[2][2] == player)

        || (mat[0][0] == player && mat[1][0] == player && mat[2][0] == player)
		|| (mat[0][1] == player && mat[1][1] == player && mat[2][1] == player)
		|| (mat[0][2] == player && mat[1][2] == player && mat[2][2] == player)

		|| (mat[0][0] == player && mat[1][1] == player && mat[2][2] == player)
		|| (mat[2][0] == player && mat[1][1] == player && mat[0][2] == player))
	{
		return player;
	}
	else
		return '/';
}
void turn()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
int main()
{
	NumberOfTerms = 0;
	show();
	while (1)
	{
		NumberOfTerms++;
		char res = Input();
		if (res == 'X')
		{
			cout << "Player X wins!"<<endl;
			break;
		}
		else if (res == 'O')
		{
			cout << "Player O wins!" << endl;
			break;
		}
		else if (res == '/' && NumberOfTerms == 9)
		{
			cout << "Game Drawn!" << endl;
			break;
		}
		turn();
	}
	system("pause");
    return 0;
}

