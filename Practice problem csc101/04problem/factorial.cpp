#include <iostream>
using namespace std;

int main () {

int n,multiply,i;



cout<<"number" ;
cin>>i; //taking input as i because i will decrease i one by one

n=i; //saving the number that user gave will use it in printing

if (i<0) {
          i=i*-1; //if user put negative i  will remove it otherwise it will increase because of (i=i-1)
         }


multiply=1;
for(i;  i>0; i=i-1){// (i-1) means decreasing i one by one


multiply=multiply*i;// and multiplying them one by one
}



if (n<0) {
          cout<<n<<"!="<<"-"<<multiply;
         }
else {
      cout<<n<<"!="<<multiply;
     }




return 0;
}
