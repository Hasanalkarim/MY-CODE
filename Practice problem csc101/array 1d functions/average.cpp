#include <iostream>

using namespace std;

//function prototype

void input_1d(float [], int);

void print_1d(float [], int); 

float average(float [], int);



int main (){

int num;

float x[10];


cout<<"How many integers ";
cin>>num;

  
  
input_1d(x,num); //taking input with the help of input funtion

cout<<"the average of ";



print_1d(x,num); //printing array

cout<<" is "<<average(x,num);

return 0;
}



//***************************function definition******************************








//************************** array input **************
void input_1d(float a[], int number){

 int i;

   for(i=0; i<number; i++){

       cout<<"["<<i<<"]=";

       cin>>a[i];
   }
}




//************************** array print ******************
void print_1d(float a[], int number){

int i;

   for(i=0; i<number; i++){

       cout<<a[i]<<" ";

   }


}


//************************** average ***********************************

float average(float x[], int num){

  int i;

  float sum;

  //adding  all the value in sum

  sum=0;

  for (i=0; i<num; i++){

      sum=sum+x[i];

  }


  return sum/num;

}

