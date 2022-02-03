#include <iostream>

using namespace std;

int add(int *, int *); //we need an Address of an integer value

int main (){

int x,y;

x=10;

y=30;


add(&x,&y);

cout<<"tatall is "<<add(&x,&y);






return 0;
}

int add(int *x, int *y){

int z;

    z=*x+*y;

    

 return z;

}