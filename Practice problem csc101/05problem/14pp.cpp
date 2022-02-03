//divisor checker

#include <iostream>

using namespace std;


int main () {


int num,i,neg;


cout<<"Enter a Positive number ";
cin>>num;


//handling 0 and negative


if(num==0){
  cout<<0;

}


if (num>0){

cout<<endl<<1;
neg=0;

}

else {

  cout<<endl<<-1;

  num=num*(-1);

  neg=-1;
}




// finding divisior

for(i=2; i<=num; i++) {



    if(num%i==0) {

                if(neg==0){

                     cout<<","<<i;

                }

                else{

                    cout<<","<<-i;
                }

    }



}




return 0;
}
