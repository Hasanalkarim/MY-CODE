#include <iostream>
using namespace std;


int main () {

int  x[10],i,num,last;



cout<<"Enter number of digits ";
cin>>num;

for(i=0; 0<num; i++){ //talking number in array in reverse

 last=num%10;

  x[i]=last;

  num=num/10;

}

num=i-1; //counting how many digit user gave minues the cancel number for loop



cout<<endl;


//printing array revers

for(i=num; 0<=i; i=i-1){

     cout<<x[i]<<endl<<endl;

}



 return 0;
}




