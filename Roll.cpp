#include <iostream>
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// note: need to include dependencies for each individual file
/* 
rolls an input number of dice, then adds the dice together and displays the total and individual dice
*/
int dicer;
int BaseRoll() {
  DStu Diceobj;
  int start();
  
  for (int i = 0; i < 1;){  
  
  cout << endl;
  cout << ":::::::";
  cout << endl;
  cout << "Enter number of dice faces\n";
  cin >> Diceobj.faces;
  if (Diceobj.faces >= 50000){
  cout << "too much  ";
    return 0;
  }
  if (Diceobj.faces <= 0){
    return 0;
  } 
  else{
 cout << "How many dice?\n";
  }

  int totalnum{};
  cin >> Diceobj.number;
  if (Diceobj.number >= 50000){
    cout << "too much   ";
    return 0;
  }
  else
  srand(time(NULL));
  for (int z = 0; z < Diceobj.number; z++)
  {
    cout << "You rolled: ";    // just says you rolled
    cout <<endl;
  
  dicer = rand() % Diceobj.faces + 1;    // dicer does random function, then modulo by enter //+ 1.  The +1 sets the minimum to prevent 0 die rolls and the modulo
  // sets the maximum they can display to num ( the face count)
  totalnum = totalnum + dicer;
  cout << "                       " << dicer <<endl;
  
  }
  cout <<endl;
  cout << "Dice total is : ";
  cout << totalnum  << endl;
  start();
  
  
  }
} 
