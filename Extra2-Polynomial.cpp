#include <iostream>
#include <stdlib.h>
#include <vector>
#include <ctype.h>
using namespace std;

class Polynomial{
  public:
    Polynomial(vector<int> & co, int hD){
      coef = co;
      highestDeg = hD;
    }
    Polynomial & operator + (const Polynomial& b){

    }
  private:
    int highestDeg;
    vector<int> coef;

};

Polynomial createPoly(string poly){
  //accepts polynomials in the form of "3x^2 + 5x + 6"
  char * temp = poly.c_str();
  int count = 0;

  while( *(temp + i) != '\0'){
    if( isdigit( *(temp + i) ) ){

    }//adds to temp digit
    
  }
}



int main(){
  return 0;
}
