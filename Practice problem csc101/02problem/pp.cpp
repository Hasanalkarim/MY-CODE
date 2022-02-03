#include <iostream>

using namespace std;

int main() {

   int x,r,n,i;


cout<<"enter number" ;
cin>>n;



while( n>0) {

    x=n%10;

    r=r*10+x;

    n=n%10;



}

cout<<"reversed is "<<r;



return 0;
}


