#include <iostream>

using namespace std;

int main () {

int x,sum, i;

float average ;

sum=0;
x=1;

i=0;

while (x!=0) {

cout<<"enter an integer";
cin>>x;

sum=sum+x;

 i=i+1;

}

 


average =  sum /(1.0*(i-1));

cout<<"avarage="<<average;





    return 0;
}