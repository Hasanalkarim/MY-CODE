#include <iostream>

using namespace std;

int add(int *, int *); //we need an Address of an integer value

int main (){

int *x,*y;


x = new int;

y = new int;

*x=10;

*y=30;


   x;   // x er value is the address

  *x;  // x er pointing address is the value 10
  

add(x,y);

cout<<"tatall is "<<add(x,y);






return 0;
}

int add(int *x, int *y){

int z;



    z=*x+*y;


    

 return z;

}