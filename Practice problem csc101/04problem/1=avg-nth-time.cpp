#include <iostream>
using namespace std;

int main () {

int num,i,sum;

float avarage;




num=1;

sum=0;
for(i=0; num!=0; i++){

cout<<"enter number";
cin>>num;

sum=sum+num;



}



avarage=sum/((i-1)*1.0);



cout<<"avarage is "<<avarage;



return 0;
}
