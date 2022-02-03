#include <iostream>

using namespace std;

int main() {

int num,r,userinput;



cout<<"enter number";
cin>>num;



userinput=num;

r=0;
while (num>0) {

    r=r*10;      //to add zero as last digit

    r=r+num%10;  //taking the last number and adding r

    num=num/10;  //removing the last number



           }



//printing output


if(r==userinput){

    cout<<" symmetric ";

}
else{

    cout<<" Not symmetric ";
}



return 0;
}


