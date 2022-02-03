#include <iostream>

using namespace std;

void initialize_character_array(char[100][100], int);

int input_character_array(char[100][100]);

int is_equal_character_array(char [100][100], char[][, int );





int main (){

int n1,n2;
 
char ch1[100] , ch2[100];


initialize_character_array(ch1, 100);

initialize_character_array(ch2, 100);


n1=input_character_array(ch1);

n2=input_character_array(ch2);





if(n1==n2 && is_equal_character_array(ch1,ch2,n1)==1){

  cout<<endl<<"is equal"<<endl;

 
}
else{
  
  cout<<"is not equal";

}

cout<<endl;

return 0;
}

//***************************function definition******************************





//***************** initialize **********************

void initialize_character_array(char ch[][], int n){

  int i;


   for(i=0; i<n; i++){

        ch[i]='\0';


   }


}



//***************** input_character_array **********************

int input_character_array(char ch[100]){

  int length;

        cout<<"enter strings ";
        cin>>ch;


   for(length=0; length<100; length++){ // length checker of the character

       if (ch[length]=='\0'){

           break;

       }

   }

    return length;
}


//***************** is_equal_character_array **********************


int is_equal_character_array(char ch1[100],char ch2[100],int n1 ){

int i,j,flag;

      flag=1;

    for(i=0; i<n1; i++){

        if(ch1[i]!=ch2[i]){

            flag=0;

            break;
        }

            
    }
          
       


 return flag;
}
