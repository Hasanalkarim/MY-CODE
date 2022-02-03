#include <iostream>

using namespace std;


int main () {

int f1, f2, f3, n, i, isfibonacci;

cout<<"enter a number ";
cin>>n;

f1=0;

f2=1;

f3=0;


isfibonacci=0; //assuming its not fibonacci

for (i=3;i<=n; i++ ) {

f3=f1+f2;


    if (n==f3) {// checking is it in the fibonacci squence?

      isfibonacci=1;
         
         break;
    }



//the real work for fibonacci

f1=f2;

f2=f3;


}



//printing output

if(isfibonacci==1){

   cout<<i<<"th terms of the fibonacci squence ";

}
else {


   cout<<" dose not exist in the  fibonacci squence ";


}


return 0;

}
