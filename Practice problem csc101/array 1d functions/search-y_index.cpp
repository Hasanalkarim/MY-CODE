#include <iostream>

using namespace std;

//function prototype

void input_1d(int [], int);

void print_1d(int [], int); 

int search_1d(int [], int,  int); // search location of  y(int) value, in x array(int [])




int main (){

int x[10], num, y, index;


cout<<"How many integers ";
cin>>num;

  
  
input_1d(x,num); //taking input with the help of input funtion


cout<<"Search: ";
cin>>y;


index=search_1d(x, num, y); // searching location of  y in x array



//printing result

if(index>=0){
  
  cout<<x[index]<<" is avilable at location "<<index;  

  //x[index] is same as y

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




//******************* search y value location in x array ***************************

int search_1d(int x[], int num, int y){

  int  i, search_ind; // search_ind for saveing the location//


  search_ind=-1;


  for (i=0; i<num; i++){

      if(x[i]==y){ // seaching the value (linear srearch)

          search_ind=i;  // saving location of the of tht value on array

      
      }

  }

  return search_ind;
}


