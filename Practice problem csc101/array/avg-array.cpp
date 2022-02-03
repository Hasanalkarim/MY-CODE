#include <iostream>

using namespace std;

int main (){


int i,num;

float average,sum,x[10];

cout<<"How many integers ";
cin>>num;



//taking input as array

for (i=0; i<num; i++){

    cout<<"x["<<i<<"]=";

    cin>>x[i];


}




//adding  all the value in sum

sum=0;

for (i=0; i<num; i++){

     sum=sum+x[i];


}


average=sum/num;



// printing content  of an array

cout<<"The average of ";

for (i=0; i<num; i++){

      cout<<x[i]<<" ";


}

cout<<"is "<<average;








return 0;
}
