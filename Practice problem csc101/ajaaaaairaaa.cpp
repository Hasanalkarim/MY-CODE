#include <iostream>
using namespace std;

void initialize_character_array(char[], int); // initialize_character_array( ,100);

int input_character_array(char[]);  // =input_character_array(a);

void input_2d_sers_lnth_chk_chr(char [100][100], int,int[]);

void print_2d_sers_lnth_chk_chr(char [100][100], int,int[]);

void print_1d(int [], int);  // for the seres location

int copy_2d_1d(float[10][10], int,int, char, int, float []);// copy 2d array column or row in a 1d array






int main () {

char x[100][100];

int row, column[10];


      cout<<"how many row ";
      cin>>row;

    

      cout<<"************** input array x *****************"<<endl;

      input_2d_sers_lnth_chk_chr( x ,row,column);

   


   


//**************print array x**************************
        print_2d_sers_lnth_chk_chr( x ,row,column);


        
//**************print array x all location**************************
            
      
      print_1d(column,row);

return 0;
}
//************************** **** function defination****************************************************

       


//***************** initialize **********************

void initialize_character_array(char ch[], int n){

  int i;


   for(i=0; i<n; i++){

        ch[i]='\0';


   }


}



//***************** input_character_array **********************

int input_character_array(char ch[100]){

  int length;


   for(length=0; length<100; length++){ // length checker of the character

       if (ch[length]=='\0'){

           break;

       }

   }

    return length;
}









//**************************  input_2d_sers_lnth_chk_chr ******************
void input_2d_sers_lnth_chk_chr(char x[10][10], int row, int column[10]){

   int i,j;

   for(i=0; i<row; i++){

            cout<<"SERIES LENTH: ";

            column[i]=;
          

       for(j=0; j<column[i]; j++){
           
           cout<<"["<<i<<"]"<<"["<<j<<"]=";

           cin>>x[i][j];

       }

       cout<<endl;
   }
}




//**************************  print_2d_sers_lnth_chk_chr **********************************
void print_2d_sers_lnth_chk_chr(char x[10][10], int row,int column[10]){

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
