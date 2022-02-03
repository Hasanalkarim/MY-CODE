#include <iostream>

using namespace std;


int main () {

  int i,nth,negative_sum,sum;


cout<<"enter number " ;
cin>>nth;

sum=0;

negative_sum=0;


i=0;





while (i<nth) {

i=i+1;

sum=sum+i; //adding all the positive number

cout<<i<<"-";

i=i+1;


negative_sum= negative_sum + i; //adding all the negative number


           if(i<nth){

             cout<<i<<"+";

           }




}
  cout<<nth<<"="<<sum - negative_sum; //positive number minus negative number




   return 0;
}




