
#include <iostream>
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* goal of this is to have a general, and allow the
user to set the variables of that class.
  */
  int start();

  
  void myFunction();

 struct {
    string name;
    int hp;
    
 }Character_One;


int sele;

void list() {
  for (int i = 0; i < 1; i++) {
    cout << "Name: " << Character_One.name << "\n";
    cout << "HP: " << Character_One.hp << "\n";
    CharRun();
  }
};


// functions

int editor(){
cout << "Enter Name" << endl;
cin >>Character_One.name;
cout << "Enter Health" << endl;
cin >>Character_One.hp;
cout << "           ";





CharRun();

  
}

//mainthing



int CharRun(){

cout << "Basic Character Sheets" << endl;

cout << "[1]Edit sheets, [2]List sheet info, [3]Return to menu  ";
int _Choice{};
cin >>_Choice;
switch(_Choice){
  case 1:
     editor();
     break;

  case 2:
  list();
     break;
  case 3:
    start();
    break;



//cout << "Enter 1 for editing sheets";
//cout << "Enter 1 for creating sheets";





  
  }
};


// https://www.w3schools.com/cpp/cpp_function_array.asp
/*
passing aarray thing into function, would work pretty well. Listing it out and then allowing changes or somthing



https://www.w3schools.com/cpp/cpp_structs.asp   structures store any variable type
*/





// https://www.programiz.com/cpp-programming/structure-function

// https://www.programiz.com/cpp-programming/structure-function











