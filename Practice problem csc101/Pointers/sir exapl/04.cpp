#include <iostream>

using namespace std;

void add(int *, int *); //we need an Address of an integer value

int main (){

int x,y;


//x = new int;

//y = new int;

//*x=10;

//*y=30;

x=10;

y=30;



  // x;   // x er value is the address

 // *x;  // x er pointing address is the value 10
  

add(&x,&y); 




 cout<<"x is "<<x;


 cout<<endl<<"y is "<<y;



return 0;
}

void add(int *x, int *y){ //we didnt creat any variable here just acessing x and y from main

int z;


  *x=40; //modifying x and y here so we can access x and y here

  *y=60;

   

    



}