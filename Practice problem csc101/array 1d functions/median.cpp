#include <iostream>

using namespace std;

//function prototype

void input_1d(float [], int);

void print_1d(float [], int); 

void ascending_sort(float [], int);

float median(float [], int);

int main (){

int num1ber1;

float x[10];


cout<<"How many integers ";
cin>>num1ber1;

input_1d(x, num1ber1); //calling input function




cout<<"***************** the series *******************"<<endl;

print_1d(x, num1ber1);// printing x array


ascending_sort(x,num1ber1);



cout<<endl<<"median is "<<median(x,num1ber1);


cout<<endl;


return 0;
}
//***************************function definition******************************




//************************** array input **************
void input_1d(float a[], int n1){

 int i;

   for(i=0; i<n1; i++){

       cout<<"["<<i<<"]=";

       cin>>a[i];
   }
}













//************************** array print ******************
void print_1d(float a[], int num1ber){

  int i;

  for(i=0; i<num1ber; i++){

      cout<<a[i]<<" ";

  }


}


//************************** ascending_sort ******************

void ascending_sort(float x[], int num1){


  int i,j,max_ind,temp;


    for(i=0; i<num1-1; i++){

        max_ind=i;

        for (j=i+1; j<num1; j++){
                                  
            if(x[max_ind]>x[j]){    // finds the Location of the maximum value
                                  //  max_ind is the location and x[max_ind] is the value
                max_ind=j;

            }

        }
        temp=x[i];
        x[i]=x[max_ind];
        x[max_ind]=temp;

    }



}




//************************** median ********************

float median(float a[], int nth){

  float mdian;

  if(nth%2==0){

    mdian=( a[nth/2] + a[(nth/2)-1] )/2;


  }
  else{

    mdian=a[nth/2];

  }


 return mdian;

}