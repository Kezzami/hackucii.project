// Example program
#include <iostream>
#include <string>
using namespace std;
char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9' };

void table()
{
  for(int i = 0; i < 3; i++)
  {
   for(int j = 0; j < 3; j++)
   {
    cout << matrix[i][j] << " ";   
   }
   cout << endl;
  }
};

void playerOneChoice()
{
  int playOneChoice;
  cin >> playOneChoice;
  
  if(playOneChoice == 1)
  matrix[0][0] = 'X';
  
  else if(playOneChoice == 2)
  matrix[0][1] = 'X';
  
  else if(playOneChoice == 3)
  matrix[0][2] = 'X';
  
  else if(playOneChoice == 4)
  matrix[1][0] = 'X';
  
  else if(playOneChoice == 5)
  matrix[1][1] = 'X';
  
  else if(playOneChoice == 6)
  matrix[1][2] = 'X';
  
  else if(playOneChoice == 7)
  matrix[2][0] = 'X';
  
  else if(playOneChoice == 8)
  matrix[2][1] = 'X';
  
  else if(playOneChoice == 9)
  matrix[2][2] = 'X';
  
    
};

void playerTwoChoice()
{
    int playTwoChoice;
  cin >> playTwoChoice;
  
  if(playTwoChoice == 1)
  matrix[0][0] = 'O';
  
  else if(playTwoChoice == 2)
  matrix[0][1] = 'O';
  
  else if(playTwoChoice == 3)
  matrix[0][2] = 'O';
  
  else if(playTwoChoice == 4)
  matrix[1][0] = 'O';
  
  else if(playTwoChoice == 5)
  matrix[1][1] = 'O';
  
  else if(playTwoChoice == 6)
  matrix[1][2] = 'O';
  
  else if(playTwoChoice == 7)
  matrix[2][0] = 'O';
  
  else if(playTwoChoice == 8)
  matrix[2][1] = 'O';
  
  else if(playTwoChoice == 9)
  matrix[2][2] = 'O';
};


int winCondition()
{
  if(matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
  {
  cout << "Player one wins!" << endl;
  return 0;
  }
  
  else if(matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
  {
  cout << "Player one wins!" << endl;
  return 0;
  }
  
  else if(matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
  {
  cout << "Player one wins!" << endl;
  return 0;
  }
  
  else if(matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
  {
  cout << "Player one wins!" << endl;
  return 0;
  }
  
  else if(matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
  {
  cout << "Player one wins!" << endl;
  return 0;
  } 
  
  else if(matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
  {
  cout << "Player one wins!" << endl;
  return 0;
  }
  
  else if(matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
  {
  cout << "Player one wins!" << endl;
  return 0;
  }
  
  else if(matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
  {
  cout << "Player one wins!" << endl;
  return 0;
  }
  

 else if(matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
  {
  cout << "Player two wins!" << endl;
  return 0;
  }
  
  else if(matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
  {
  cout << "Player two wins!" << endl;
  return 0;
  }
  
  else if(matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
  {
  cout << "Player two wins!" << endl;
  return 0;
  }
  
  else if(matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
  {
  cout << "Player two wins!" << endl;
  return 0;
  }
  
  else if(matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
  {
  cout << "Player two wins!" << endl;
  return 0;
  } 
  
  else if(matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
  {
  cout << "Player two wins!" << endl;
  return 0;
  }
  
  else if(matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
  {
  cout << "Player two wins!" << endl;
  return 0;
  }
  
  else if(matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
  {
  cout << "Player two wins!" << endl;
  return 0;
  }
};

int main()
{
  table();
  cout << "Select the number that corresponds to the area where you want to place your mark. Player one goes first." << endl;
  playerOneChoice();
  table();
  playerTwoChoice();
  table();
  playerOneChoice();
  table();
  playerTwoChoice();
  table();
  playerOneChoice();
  table();
  winCondition();
  playerTwoChoice();
  table();
  winCondition();
  playerOneChoice();
  table();
  winCondition();
  playerTwoChoice();
  table();
  winCondition();
  playerOneChoice();
  table();
  winCondition();
  
}