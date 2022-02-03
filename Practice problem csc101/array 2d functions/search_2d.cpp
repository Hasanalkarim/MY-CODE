#include <iostream>

using namespace std;

//function prototype

void input_2d(float[10][10], int,int);

void print_2d(float [10][10], int,int);

int search_2d(float [10][10], int,  int, float); // find y(float) value avilable or not, in x array(int [][])




int main (){

int row,column, ismember;

float x[10][10],y;


cout<<"how many row ";
cin>>row;

cout<<"how many column ";
cin>>column;


cout<<"************** input array x *****************"<<endl;

input_2d(x ,row,column);


cout<<"Search: ";
cin>>y;


ismember=search_2d(x, row,column, y); // searching y is in x array or not



//printing result

if(ismember==1){
  
  cout<<y<<" is avilable";  


}
else{
      
    cout<<endl<<"is not avilable";
}



//printing array

cout<<" of array "<<endl;

print_2d( x ,row,column);



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







//******************* searching y is in x array or not *******************************

int search_2d(float x[10][10], int row,  int column, float y){

   int  i,j,ismember; 

   ismember=0; //assuming not avilable putting 0

   for(i=0; i<row; i++){

      for(j=0; j<column; j++){
         
         if(x[i][j]==y){ // seaching the value (linear srearch)

            ismember=1;  // if avilable put 1
         }
      }

   }


  return ismember;
}


