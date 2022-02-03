#include <iostream>

using namespace std;

//function prototype

void input_1d(int [], int);

void print_1d(int [], int); 

int find_min_1d(int [], int);// finds the Location of the minimum value



int main (){

int x[10], num;


cout<<"How many integers ";
cin>>num;

input_1d(x, num); //calling input function



cout<<"Small number is "<<x[find_min_1d(x,num)]; // found the location of min value in x array


cout<<endl<<"of array ";

print_1d(x, num);// printing x array

cout<<endl;


return 0;
}
//***************************function definition******************************




//************************** array input **************
void input_1d(int a[], int number){

 int i;

   for(i=0; i<number; i++){

       cout<<"["<<i<<"]=";

       cin>>a[i];
   }
}













//************************** array print ******************
void print_1d(int a[], int number){

  int i;

  for(i=0; i<number; i++){

      cout<<a[i]<<" ";

  }


}


//************************** find min location ******************

int find_min_1d(int x[], int num){


  int i,min_ind;



  min_ind=0;

  for (i=1; i<num; i++){

      if(x[min_ind]>x[i]){ //min_ind is the location and x[min_ind] is the value

          min_ind=i;

      }

  }

  return min_ind; //return the Location of the minimum value
}
