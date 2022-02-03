#include <iostream>

using namespace std;


int main () {

  int i,nth,negative_sum,sum;


cout<<"enter number " ;
cin>>nth;


sum=0;


for(i=1; i<=nth; i++){

    if(i%2==1){ //giving plus sign on the odd number and adding

              if(i==1){  //removing plus sign for the first number
                    cout<<i;

                    sum=sum+i;

              }
              else{

                  cout<<"+"<<i;

                   sum=sum+i;
              }


    }
    else { //giving minus sign on the even number and adding


        cout<<"-"<<i;

        sum=sum-i;

    }

}

cout<<"="<<sum; //printing addition of plus and minus both



   return 0;
}




