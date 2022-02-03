#include <iostream>

using namespace std;

int main () {

int first,second,i,j,sum;

//taking input

cout<<"First number ";
cin>>first;

cout<<"Second number ";
cin>>second;


if(second<first){ //making first small

sum=second;

second=first;

first=sum;

}



for (i=first; i<=second; i++) {


            sum=0;
                for (j=1 ; j<i; j++){ //checking all number 1 to n

                            if (i%j==0){    //checking the divisibility

                                sum=sum+j;  //adding the divisible one into sum

                            }


                 }

                if(sum==i) {

                    cout<<i<<" ";

                  }


}//for bracket











return 0;

}
