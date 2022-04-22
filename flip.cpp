#include <iostream>
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int _random;

int start();
string coins[3] = {"filler","Heads", "Tails"};

int flip() {
//  Numie coin(1,2);
  srand(time(NULL));
 // _random = (rand() %  2 + 1 );
  
 // for(int i = 0; i < 10; i++){
 

    cout << "You flipped a : " << coins[(rand() %  2 + 1 )] <<endl;
    
    start();
    
}

 
