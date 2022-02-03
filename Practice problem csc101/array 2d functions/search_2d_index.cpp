#include <iostream>

using namespace std;

//function prototype

void input_2d(float[10][10], int,int);

void print_2d(float [10][10], int,int);

void print_2d_index(int [100][2], int,int);

int search_2d_index(float [10][10], int,  int, float, int[100][2]); // search location of all y(int [][])  counts y(int) value, in x array(float [][])




int main (){

int row,column, count, y_index[100][2];

float x[10][10],y ;


cout<<"how many row ";
cin>>row;

cout<<"how many column ";
cin>>column;


cout<<"************** input array x *****************"<<endl;

input_2d(x ,row,column);


cout<<"Search: ";
cin>>y;


count=search_2d_index(x, row,column, y, y_index); // ssearching location of all y in x array AND how many times


//printing result

if(count>0){
  
  cout<<y<<" is avilable "<<count<<"times"<<endl;  

  print_2d_index(y_index, count,2);

}
else{
      
    cout<<endl<<"did not found ";
}



cout<<endl<<" of below array "<<endl;

print_2d(x,row, column ); //printing array


cout<<endl;

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


//**************************  Print index **********************************
void print_2d_index(int x[100][2], int row,int column){

    int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
           cout<<"["<<x[i][j]<<"]";

       }

        cout<<endl<<endl;
   }


}





//******************* search y value location in x array *******************************

int search_2d_index(float x[10][10], int row,  int column, float y, int y_index[100][2]){

   int  i,j,k; 

   k=0; 

   for(i=0; i<row; i++){

      for(j=0; j<column; j++){
         
         if(x[i][j]==y){ // seaching the value (linear srearch)

            y_index[k][0]= i; //seaving row(i) from x array to y_index array in 0 column

            y_index[k][1]= j; //seaving row(j) from x array to y_index array in 1 column


            k=k+1;  // increasing k AND counts how many times

         }
      }

   }


  return k; //returning how many times == y_index row value
}


