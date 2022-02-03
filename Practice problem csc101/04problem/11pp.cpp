#include <iostream>

using namespace std;

int main () {


int i,num,sum;

cout<<"enter a positive even number";
cin>>num;


  if (num%2==1) {
    num=num-2;

}


sum=0;
for (i=2; i<num; i=i+2){
                        cout<<i<<"+";

                        sum=sum+i;
                        }

   cout<<i<<"="<<sum+i;





return 0;
  }


