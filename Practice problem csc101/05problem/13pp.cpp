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

for (i=1;i<=n; i++ ) {

f3=f1+f2;


    if (n==f3) {// checking is it in the fibonacci sequence?

      isfibonacci=1;

         break;
    }



//the real work for fibonacci

f1=f2;

f2=f3;


}



//printing output

if(isfibonacci==1){

   cout<<i+2<<"th terms of the fibonacci sequence "; //i+2 cause we skip first two number we are readding them for counting

}
else {


   cout<<" dose not exist in the  fibonacci sequence ";


}


return 0;

}
