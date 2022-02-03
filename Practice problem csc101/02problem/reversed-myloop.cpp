#include <iostream>

using namespace std;

int main() {

   int x,r,n,i;


cout<<"enter number";
cin>>n;



for (i=0; n>0; i++) {

    x=n%10;//taking the last number

    r=r*10+x;

    n=n/10;//removing the last number

}

cout<<"reversed is "<<r<<endl;


cout<<i<<" digite ";//i  is taking the steps thats why i is counting


return 0;
}


