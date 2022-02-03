#include <iostream>

using namespace std;

int main () {

int first,second,i,sum,counter;

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

counter=0;

sum=0;
for (i=first; i<=second; i++) {




       if (i%2==1)   {

        cout<<i<<" ";

        sum=sum+(i*i);

        counter=counter+1;

       }


}//for bracket




  cout<<endl<<"sum of the squares of all odd from "<<first<<" to "<<second<<" is "<<sum;


  cout<<endl<<" And totall odd number is "<<counter;



return 0;

}
