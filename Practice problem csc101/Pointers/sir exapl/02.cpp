//using pointer in main and sending value in function as normal varable


#include <iostream>

using namespace std;

int add(int, int);

int main(){

int z;

int *x,*y; //creating 2 random address 

  cout<<x; //here x is a random address 

  

  x= new int; //giving x and y a specific vreable

  y= new int;

  // now we can put values

  *x=10;

  *y=20;


  z=add(*x,*y);

cout<<"value is "<<z;

return 0;  
}


int add(int a, int b){

 int totall;

  totall=a+b;

  return totall;

}