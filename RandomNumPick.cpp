#include "functions.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// even after changing from classes to variables, it still core dumps
 //int minRa;
 //int maxRa;
// faces = min , numer = max
int start();
int numberer() {
 // Numie objcoin(0,0);
  Numie num;
  srand(time(NULL));
  cout << "Enter Minimum" << endl;
  cin >> num.nmin;
  cout << "Enter Maximum" << endl;
  cin >> num.nmax ;
  int sneran{};
  
  
  sneran = (rand() %  num.nmax + num.nmin );
  cout << "    " << endl;
  cout << sneran << endl;
  cout << "    " << endl;
  //return 0;
  start();
}



/*
informed that I need to use constructors for the charic and numie classes
Use the photo for reference on general format along with w3school info
*/