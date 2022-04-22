#include <iostream>
#include "functions.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// !!! Use the GDB version https://onlinegdb.com/TRXMlc2de to run properly !!!


/*
Plan for this :
Has small option menu. This menu leads to the different functions, these functions are stored in the seperate .cpp files. 
------
list of possible
/-Roll and add total (done)
/-Roll and check how many rolls are above a threshold (DONE)
Half/-Allow inputting data to a type of character list that you can change and access from menu (using classes that you can edit / dynamic or something ?) (
done) running into issue of segmentation fault (core dumped), preventing it from running. Attempted to see what issue was by replacing with DSTU class object, still no work.
used structure
very basic, one character and user is unable to input custom stuff nor make new ones. To be done further

-Puzzle thing where one inputs a string and that string gets changed to 
follow specific ciphers or something, like rot13 but you can set the {13} or something. Already have a similar thing in other old project, for base ()

/-Random Number picker, between minimum and maximum (DONE), need to use onlineGDB version as replit breaks

/-Coin flip, randomly picks between one and two and says heads if one tail if two (done)

- saving numbers to temp memory, which can then be used on other things
(ie do roll, then it asks if you want to save it to memory with yes or no. In Char class you can be asked to add or subtract that number automatically)

- 

*/



int start(){
cout << "::::Table Top Tools::::" << endl;
//cout << "Enter '-1' or 'STOP' to exit programs" << endl;
cout<< endl;
cout << "1.Roll and add" << endl;
cout << "2.Roll with threshold" << endl;
cout << "3.Character Information"<<endl;
cout << "4.Random number" << endl;
cout << "5.Coin flip" << endl;
cout << endl;     

int choice{};
cin >> choice;

switch(choice){
  case 1:
     BaseRoll();
     break;

  case 2:
//cout << "\rUnable to do so at the moment    " << endl;
     PRoll();    
     break;
  case 3:
     CharRun();
    break;
  case 4:
    numberer();
     break;
    case 5:
    flip();
    break;
  
  default:
    cout << "\rNot supported at all         " << endl;
    start();
  break;

}
}
int main(){
start();
}



// functions

// putting the Charclass stuff into this main script doesn't work either, it still has the core dumped failure. 

// seems to be an issue with replit, use GDB online debugger to do stuff
