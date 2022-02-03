#include <iostream>

using namespace std;

int main () {


//variable declearetion

int positive,negative,zero,odd,even,i,x,num;

cout<<"Number of inputs:";
cin>>num;

positive=0;

negative=0;

zero=0;

odd=0;

even=0;


//Main prossess

for (i=0; i<num; i++){
cout<<"Enter number "<<i+1<<":";
cin>>x;

      if(x>0){

         positive=positive+1;

      }
      else if (x<0){

         negative=negative+1;

      }
      else{
         zero=zero+1;

      }


      if(x%2==0 || x==0){

         even=even+1;

      }
      else{

         odd=odd+1;
      }



}

//printing output

cout<<endl<<"Positive:"<<positive;

cout<<endl<<"Negative:"<<negative;

cout<<endl<<"Zero:"<<zero;

cout<<endl<<"Odd:"<<odd;

cout<<endl<<"Even:"<<even;


return 0;
}
