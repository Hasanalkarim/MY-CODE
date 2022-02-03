#include <iostream>
using namespace std;

int main () {

int n,i;

float sum,num,avarage;

cout<<"number";
cin>>n;




sum=0;
for(i=0; i<n; i++){

cout<<"enter("<<i+1<<")=";
cin>>num;

sum=sum+num;

}

avarage=sum/n;

cout<<"totall "<<sum<<endl;

cout<<"avarage "<<avarage;



return 0;
}
