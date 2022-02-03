#include <iostream>

using namespace std;

int factorial(int);  // 5*4*2*1

int pow(int, int);





int main(){
    

int x, y;





  cout<<pow(4,5);

 return 0;
}




int pow(int x, int y){


    if(y==0){
   
       return 1;

    }
    else{

            
            y=y-1;
  
               
          return x*pow( x, y);

    }


};



























int factorial(int x) {

    
   if(x==1){

       return 1;

   }
    else{

       return x * factorial(--x);

    }

   


};