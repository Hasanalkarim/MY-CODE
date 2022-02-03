#include <iostream>
using namespace std;

int main () {

int num,i,sum;

float average;




num=1;

sum=0;
for(i=0; i<100; i++){

cout<<"enter number";
cin>>num;

 if (num==0) {

    break;
 }

sum=sum+num;



}



average=sum/(i*1.0);



cout<<"average is "<<average;



return 0;
}
