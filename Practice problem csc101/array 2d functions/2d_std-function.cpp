#include <iostream>
using namespace std;

void input_2d(float[10][10], int,int);

void print_2d(float [10][10], int,int);

float average_2d(float [10][10], int,int);

float s_dev_2d(float [10][10], int,int);






int main () {

float x[10][10];

int row,column;


      cout<<"how many row ";
      cin>>row;

      cout<<"how many column ";
      cin>>column;


      cout<<"************** input array x *****************"<<endl;

      input_2d( x ,row,column);

   
     
   


//**************print array x**************************
        print_2d( x ,row,column);

            
      
        cout<<endl<<"std is "<<s_dev_2d( x ,row,column);


return 0;
}
//************************** **** function defination****************************************************

       











//**************************  input array******************
void input_2d(float x[10][10], int row,int column){

   int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
           cout<<"["<<i<<"]"<<"["<<j<<"]=";

           cin>>x[i][j];

       }

       cout<<endl;
   }
}




//**************************  print array **********************************
void print_2d(float x[10][10], int row,int column){

    int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
           cout<<x[i][j]<<" ";

       }

        cout<<endl<<endl;
   }


}






//************************avarage of 2d array**************

float average_2d(float x[10][10], int row,int column){

     int i,j;

     float sum;

     sum=0;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
           sum=sum+x[i][j];

       }
   }


   return (sum/(row*column));

}






//*****************************2d-std*******************

float s_dev_2d(float x[10][10], int row,int column){

int i, j;

float sum,mean,std;

mean=average_2d( x ,row,column);


sum=0;
      for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
        sum=sum+(mean-x[i][j])*(mean-x[i][j]);  

       }
   }


std=sum/(row*column);

 return std;

}


 
