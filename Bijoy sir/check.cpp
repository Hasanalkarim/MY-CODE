#include <iostream>

using namespace std;

int multy(int);

int main(){
    

int x=3;


  cout<<x+--x<<endl
  
  ;

  


 return 0;
}


int multy(int x) {

    
   if(x==1){

       return 1;

   }
    else{

       return x * multy(--x);

    }

   


};