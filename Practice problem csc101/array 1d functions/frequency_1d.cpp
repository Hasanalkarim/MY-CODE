#include <iostream>

using namespace std;

//function prototype

void input_1d(int [], int);

void print_1d(int [], int); 

int frequency_1d(int [], int, int); // search how many times y(int) value, is avilable in x array(int [])




int main (){

int x[10], num, y, counts;


cout<<"How many integers ";
cin>>num;

  
  
input_1d(x,num); //taking input with the help of input funtion


cout<<"Search: ";
cin>>y;


counts=frequency_1d(x, num, y); // finds how many times y is in x array



//printing result

if(counts>0){
  
  cout<<y<<" is avilable  "<<counts<<" times";  



}
else{
      
    cout<<endl<<"did not found ";
}

//printing array

cout<<" of array "<<endl;

print_1d(x,num);


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




//******************* finds how many times y is in x array ***************************

int frequency_1d(int x[], int num, int y){

  int  i, counts; // search_ind for saveing the location//


  counts=0;


  for (i=0; i<num; i++){

      if(x[i]==y){ // seaching the value (linear srearch)

          counts=counts+1;  // counts how many time

      
      }

  }

  return counts;
}


