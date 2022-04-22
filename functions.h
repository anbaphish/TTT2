#ifndef FUNCTIONS_h
#define FUNCTIONS_h
//
#include <iostream>

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>



using namespace std;


int BaseRoll();
int PRoll(); 
int CharRun();
int editor();
int numberer();
int flip();

int _mem();

// note shove the main functions into here, as they need to be //defined in .h BEFORE being used in the main.cpp

////  need parser program thing

class DStu{
public:
  int number;
  int faces;
};   
class Charac{
public:
string name;
int hp;
int mp;
//Charac() : name{"This"}, hp{0}, hp{0} {}

 
}; 
class Numie{
public:
int nmin,nmax;
Numie() : nmin{0}, nmax{0} {} 
Numie(int _nmin, int _nmax) : nmin{_nmin}, nmax{_nmax}  {}
//  nmin = _nmin;
 // nmax = _nmax;

};
#endif


