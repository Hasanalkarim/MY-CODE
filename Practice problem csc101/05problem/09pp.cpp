#include <iostream>

using namespace std;

int main() {

int x,num,r,u;



cout<<"enter number";
cin>>num;




r=0;
while (num>0) {

    x=num%10;//taking the last number

    num=num/10;//removing the last number

    r=(r*10)+x;


           }



while (r>0) {

    x=r%10;//taking the last number

    cout<<x<<" "<<endl<<endl;

    r=r/10;//removing the last number



           }




return 0;
}


