#include <iostream>

using namespace std;

int main() {

   int r,num;


cout<<"enter number";
cin>>num;

cout<<"reversed is ";

while (num>9) {

    r=num%10;//taking the last number

    num=num/10;//removing the last number

    cout<<r;

           }

cout<<num;


return 0;
}


