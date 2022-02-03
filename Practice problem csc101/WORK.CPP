#include <iostream>

using namespace std;

//function prototype

void input_2d(float[10][10], int,int);

void print_1d_row(float [], int);

void print_2d(float [10][10], int,int);

void avg_2d_row(float[10][10],int ,int,float[]); 
 


int main (){

int row, column;

float x[10][10],y[10];


cout<<" Please enter the number of cities : ";
cin>>row;

cout<<"Please enter the number of days :  ";
cin>>column;


input_2d(x ,row,column);


avg_2d_row(x,row, column,y); //main funtion



 //printing output


    //************ print array y *************

      cout<<endl;

      print_1d_row(y ,row);//function calling

       

return 0;
}

//***************************function definition******************************




//**************************  input 2d array******************
void input_2d(float x[10][10], int row,int column){

   int i,j;

   for(i=0; i<row; i++){

       cout<<"for city "<<i+1<<",please enter the temperature";
    
       cout<<endl<<"for "<<column<<" consecutive days:"<<endl;


       for(j=0; j<column; j++){
           
           cout<<"day "<<j+1<<" temperature: ";

           cin>>x[i][j];

       }

       cout<<endl;
   }
}



//**************************  Print 1d row array ****************
void print_1d_row(float a[], int number){

int i;

   for(i=0; i<number; i++){

         cout<<"city "<<i+1<<" avarage temerature is ";
           

       cout<<a[i]<<endl<<endl;

   }

}


//**************************  Print 2d array ********************************
void print_2d(float x[10][10], int row,int column){

    int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){

         
           cout<<x[i][j]<<" ";

       }

        cout<<endl<<endl;
   }


}


//************************** avg_2d_row ***************************

void avg_2d_row(float x[10][10], int row,int column , float y[10]){


  int i,j;

   for(i=0; i<row; i++){

       y[i]=0;

       for(j=0; j<column; j++){

    

           
         y[i]=y[i]+x[i][j];

       }

       y[i]=y[i]/column;

   }


}