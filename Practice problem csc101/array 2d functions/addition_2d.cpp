#include <iostream>

using namespace std;

//function prototype

void input_2d(float[10][10], int,int);

void print_2d(float [10][10], int,int);

void add_2d(float [10][10], float [10][10],float [10][10],int ,int );



int main (){

int row, column;

float x[10][10],y[10][10],z[10][10];


cout<<"how many row ";
cin>>row;

cout<<"how many column ";
cin>>column;


cout<<"************** input array x *****************"<<endl;

input_2d(x ,row,column);





cout<<"************** input array y *****************"<<endl;

input_2d(y ,row,column);



 
add_2d(x,y,z,row,column); // adding x and y and putting it into z





      cout<<"************** print array x *****************";

      cout<<endl;

      print_2d(x ,row,column); //function calling



      cout<<endl<<"************** print array y *****************";

      cout<<endl;


      print_2d(y ,row,column);//function calling

       
      
      cout<<endl<<"************** print array z *****************";

       cout<<endl;

      print_2d(z ,row,column); //function calling


return 0;
}

//***************************function definition******************************







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



//**************************  Print array **********************************
void print_2d(float x[10][10], int row,int column){

    int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
           cout<<x[i][j]<<" ";

       }

        cout<<endl<<endl;
   }


}


//************************** array Addition *****************************

void add_2d(float x[10][10], float y[10][10],float z[10][10], int row,int column ){


  int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
          z[i][j]= x[i][j]+y[i][j];

       }

   }


}
