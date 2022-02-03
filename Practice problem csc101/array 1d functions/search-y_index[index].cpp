#include <iostream>

using namespace std;

//function prototype

void input_1d(int [], int);

void print_1d(int [], int); 

int search_n_1d(int [], int,  int, int []); // search location of   all y(int [])  counts y(int) value, in x array(int [])




int main (){

int x[10], num, y, y_index[10],count;


cout<<"How many integers ";
cin>>num;

  
  
input_1d(x,num); //taking input with the help of input funtion


cout<<"Search: ";
cin>>y;



count=search_n_1d(x, num, y, y_index ); // searching location of all y in x array AND how many times




//printing result

if(count>0){
  
  cout<<y<<" is avilable at location: ";  

  print_1d(y_index, count);

}
else{
      
    cout<<endl<<"did not found ";
}



cout<<endl<<" of below array "<<endl;

print_1d(x,num); //printing array


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



cou
//******************* search y value location in x array ***************************

int search_n_1d(int x[], int num,  int y, int y_index[]){

  int i,index ;

  index=0;

  for (i=0; i<num; i++){

      if(x[i]==y){ // seaching the y value (linear srearch)

          y_index[index]=i;  // saving location of all y on  "y_index" array

          index=index+1;    // increasing index AND counts how many times

      }
  }


  return index;
  
}

