#include <iostream>

using namespace std;



void initialize_character_array(char[], int);

int input_character_array(char[]);

int is_paliendrom(char [], int);




int main (){

int n;
 
char ch[100];


initialize_character_array(ch, 100);


n=input_character_array(ch);


n=is_paliendrom(ch,n);

if(n==1){

  cout<<"is paliendrom";

}
else{
  
  cout<<"is not paliendrom";

}

cout<<endl;

return 0;
}

//***************************function definition******************************








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

        cout<<"enter strings ";
        cin>>ch;


   for(length=0; length<100; length++){ // length checker of the character

       if (ch[length]=='\0'){

           break;

       }

   }

    return length;
}


//***************** is_paliendrom **********************


int is_paliendrom(char ch[], int n){

int i,flag;

     flag=1;

    for(i=0; i<n; i++){

      if(ch[i]!=ch[n-1-i]){

           flag=0;
      }

    }

 return flag;

}