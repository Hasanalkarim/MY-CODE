#include <iostream>
using namespace std;

void input_2d_sers_lnth_chk_vriabl(float[10][10], int,int[]);

void print_2d_sers_lnth_chk_vriabl(float [10][10], int,int[]);

void print_1d(int [], int);  // for the sers location






int main () {

float x[10][10];

int row, column[10];


      cout<<"how many row ";
      cin>>row;

    

      cout<<"************** input array x *****************"<<endl;

      input_2d_sers_lnth_chk_vriabl( x ,row,column);

   


   


//**************print array x**************************
        print_2d_sers_lnth_chk_vriabl( x ,row,column);


        
//**************print array x all location**************************
            
      
      print_1d(column,row);

return 0;
}
//************************** **** function defination****************************************************

       











//**************************  input_2d_sers_lnth_chk_vriabl ******************
void input_2d_sers_lnth_chk_vriabl(float x[10][10], int row, int column[10]){

   int i,j;

   for(i=0; i<row; i++){

            cout<<"SERIES LENTH: ";
            cin>>column[i];
          

       for(j=0; j<column[i]; j++){
           
           cout<<"["<<i<<"]"<<"["<<j<<"]=";

           cin>>x[i][j];

       }

       cout<<endl;
   }
}




//**************************  print_2d_sers_lnth_chk_vriabl **********************************
void print_2d_sers_lnth_chk_vriabl(float x[10][10], int row,int column[10]){

    int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column[i]; j++){
           
           cout<<x[i][j]<<" ";

       }

        cout<<endl<<endl;
   }


}





//************************** print_1d ******************
void print_1d(int a[], int number){

int i;

   for(i=0; i<number; i++){

       cout<<a[i]<<" "<<endl;

   }


}