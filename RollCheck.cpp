// this one should act like Roll but parses it or whatever and adds how many are above an input threshold. 
#include <iostream>
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int dicerz, thresh; 
int start();
//dicerz = dicechecker, thresh = threshold
//below is mostly the same as BaseRoll
int PRoll() {
  DStu DRollCheck;
  for (int i = 0; i < 1;){  
  cout << endl;
  cout << ":::::::";
  cout << endl;
  cout << "Enter threshold (IE 6 would lead to 6 and above)\n";
  cin >> thresh;

  cout << "Enter number of dice faces\n";
  cin >> DRollCheck.faces;
  if (DRollCheck.faces >= 50000){
  cout << "too much  ";
    return 0;
  }
 
 cout << "How many dice?\n";
 
  int tnm{}; //total num met
  cin >> DRollCheck.number;
  if (DRollCheck.number >= 50000){
    cout << "too much   ";
    return 0;
    
  }

  srand(time(NULL));
  for (int z = 0; z < DRollCheck.number; z++) //rolling
  {
    cout << "You rolled: ";
    cout <<endl;
  
  dicerz = rand() % DRollCheck.faces + 1;// dicer does random function, then modulo by enter //+ 1.  The +1 sets the minimum to prevent 0 die rolls and the modulo
  // sets the maximum they can display to entered ( the face count)
 
  if (dicerz >= thresh){
    cout << "                       " << dicerz << "    Above thresh" <<endl;
    tnm = tnm + 1;
  }else{
  cout << "                       " << dicerz <<endl;
  
  }
  }
  cout <<endl;
  cout << "Number above threshold" <<endl;
  cout << tnm << endl;
  start();
  }
  }
