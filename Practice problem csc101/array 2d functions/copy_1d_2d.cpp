#include <iostream>

using namespace std;

//function prototype

void input_1d(float [], int);

void copy_1d_2d(float [], int[],float [10][10], int);// copy 2d array column or row in a 1d array

void print_2d(float [10][10], int,int[]);




 
int main (){


 float x[10]   ;

 float y[10][10];

 int column[10],row_2d,i;


 cout<<"how many 1d array";
 cin>>row_2d;


 for(i=0; i<row_2d; i=i+1){


    cout<<"how many integers ";
    cin>>column[i];

    input_1d(x,column[i]);





 }




copy_1d_2d(x,column,y,row_2d);




print_2d(y,row_2d,column);



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















//**************************  Print 2d array **********************************
void print_2d(float x[10][10], int row,int column[10]){

    int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column[i]; j++){
           
           cout<<x[i][j]<<" ";

       }

        cout<<endl<<endl;
   }


}

//**************************  copy_1d_2d **********************************

 void copy_1d_2d(float x[10], int column[10],float y[10][10],int row_2d){

   int i,j;

       for(i=0; i<row_2d; i++){

       for(j=0; j<column[i]; j++){

           y[i][j]=x[j];

       }

   }







}
