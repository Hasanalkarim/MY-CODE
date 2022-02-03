#include <iostream>

using namespace std;

//function prototype

void input_1d(int [], int);

void print_1d(int [], int); 

void selection_sort(int [], int);



int main (){

int x[10], num;


cout<<"How many integers ";
cin>>num;

input_1d(x, num); //calling input function




cout<<"********************Before sorting*******************"<<endl;

print_1d(x, num);// printing x array


selection_sort(x,num);



cout<<endl<<"********************After sorting*******************"<<endl;

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


//************************** selection_sort ******************

void selection_sort(int x[], int num){


  int i,j,max_ind,temp;


    for(i=0; i<num-1; i++){

        max_ind=i;

        for (j=i+1; j<num; j++){
                                  
            if(x[max_ind]<x[j]){    // finds the Location of the maximum value
                                  //  max_ind is the location and x[max_ind] is the value
                max_ind=j;

            }

        }
        temp=x[i];
        x[i]=x[max_ind];
        x[max_ind]=temp;

    }



}
