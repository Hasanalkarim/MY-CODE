#include <iostream>

using namespace std;

//function prototype

void input_2d(float[10][10], int,int);

void print_1d_row(float [], int);

void print_2d(float [10][10], int,int);

int copy_2d_1d(float[10][10], int,int, char, int, float []);// copy 2d array column or row in a 1d array


 


int main (){

int row, column,num;

float x[10][10],y[10];

char chr;


cout<<"how many row ";
cin>>row;

cout<<"how many column ";
cin>>column;


cout<<"Chose \"r\" for row or \"c\" for column: ";
cin>>chr;


if(chr=='r'){

cout<<"row number: ";
cin>>num;
}
else{

cout<<"column number: ";
cin>>num;
}


cout<<"************** input array x *****************"<<endl;

input_2d(x ,row,column);



num=copy_2d_1d(x,row,column,chr,num,y); // saving y array how many numbers for printing And function calling
 



                //printing output



cout<<"************** print array x *****************";

cout<<endl;

print_2d(x ,row,column); //function calling



            //************ print 1d array y ***************

cout<<endl<<"************** copied result *****************";

cout<<endl;

print_1d_row(y ,num);// 


       

return 0;
}

//***************************function definition******************************




//**************************  input 2d array******************
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



//**************************  Print 1d row array ******************
void print_1d_row(float a[], int number){

int i;

   for(i=0; i<number; i++){

       cout<<a[i]<<endl<<endl;

   }

}


//**************************  Print 2d array **********************************
void print_2d(float x[10][10], int row,int column){

    int i,j;

   for(i=0; i<row; i++){

       for(j=0; j<column; j++){
           
           cout<<x[i][j]<<" ";

       }

        cout<<endl<<endl;
   }


}

//**************************  copy_2d_1d **********************************

 int copy_2d_1d(float x[10][10], int row,int column, char chr, int num, float y[]){

    int i;

    if(chr=='r'){

        for(i=0; i<column; i++){

           y[i]=x[num][i];

        }

          i=column; // saving row length
    }
    else{

        for(i=0; i<row; i++){

           y[i]=x[i][num];
            
        }



         i=row; //saving  column length

    }

     

return i;

}
