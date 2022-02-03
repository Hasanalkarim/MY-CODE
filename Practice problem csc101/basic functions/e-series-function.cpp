// e series
#include <iostream>

using namespace std;

//function prototype  or function declaration

float power(float,int);

int factorial(int);




int main (){




int i,fac,n;

float pwr,sum,x;




cout<<"enter x ";
cin>>x;

cout<<"enter presesion ";
cin>>n;




  sum=0;
for(i=0; i<n; i++ ){

   pwr=power(x,i);

   fac=factorial(i);

   sum=sum+(pwr/fac);

}

cout<<"e series is "<<sum;




return 0;
}

//*************************** function defination******************************







// *********power*************

float power(float b, int e){ //b^e: myltiplying b , e times

 int   i;

 float p;



  p=1;
      for(i=0; i<e; i++){
                         // b=2
          p=p*b;        //p=1*2...p=2*2..p=4*2...p=8*2..p=16*2..e times
      }

  return p;

}

   


// ****************factorial**********************

int factorial(int n){ // n!

int i, f;



  f=1;
for(i=1; i<=n; i++){

  f=f*i;       //code: i*i*i*...n= n!
              //exmpl: 1*2*3*...7= 7!
}

  return f;

}

