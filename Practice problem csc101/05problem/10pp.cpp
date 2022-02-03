
#include <iostream>

using namespace std;


int main () {

  int i,nth,sum,result;


cout<<"enter number " ;
cin>>nth;

sum=1; //sum=1 and i=0 is causing the series
result=0;


nth=nth-1;

for (i=0; i<nth; i++) {

   sum=sum+i; //makeing the series

   cout<<sum<<"+";


   result=result+sum;


}
   //have to do all again because of (nth-1)


  sum=sum+i;// adding the last i tht didnt added previously because of (nth-1)

  cout<<sum<<"="<<result+sum;




   return 0;
}




