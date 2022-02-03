#include <iostream>

using namespace std;

int main () {

int i,j,k,num;

//taking input

cout<<"Print Shape ";
cin>>num;



for(i=0; i<num; i++) {


      if(i%2==0){

          for(j=num-i; j>0; j=j-1){ // reversed loop

               cout<<j<<" ";

                }

      }



      else{

        for(k=1; k<=num-i; k++){ //forward loop

               cout<<k<<" ";

              }

      }


      cout<<endl<<endl;


}


//num=5

//i=0

//j=num-i=5,3,1

//j=j-1=4,3,2,1,0  2,1,0  0

//i++=1,2,3,4,5

//k=1

   //num-i=4,2

//k++=1,2,3,4,5    1,2,3


















return 0;

}
