#include <iostream>

using namespace std;


int main () {

int f1, f2, f3 , n,i;

cout<<"enter a number ";
cin>>n;

f1=0;

f2=1;

f3=0;

if (n<2 ){

    if(n==1){

      cout<<f1;
    }
    else{
      cout<<"invalid";
    }
    
}
else{

 cout<<f1<<","<<f2;

}




for (i=2;i<n; i++ ) {

f3=f1+f2;


cout<<","<<f3;

//the real work for fibonacci

f1=f2;

f2=f3;


}





return 0;

}

