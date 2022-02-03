#include <iostream>

using namespace std;

void initialize_character_array(char[], int);

int input_character_array(char[]);

int is_substring(char [], int, char[], int );




int main (){

int n1,n2;
 
char st[100] , subst[100];


initialize_character_array(st, 100);

initialize_character_array(subst, 100);


n1=input_character_array(st);

n2=input_character_array(subst);



n1=is_substring(st,n1, subst,n2);

if(n1!=0){

  cout<<"is substring"<<endl;

 
}
else{
  
  cout<<"is not substring";

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


//***************** is_substring **********************


int is_substring(char st[100], int n1,char subst[100], int n2 ){

int i,j,flag;

    for(i=0; i<=n1-n2; i++){

        flag=1;

        for(j=0; j<n2; j++){
        
            if(st[i+j]!=subst[j]){

                    flag=0;

                    break;
            }
        }
          
        if(flag==1){

             break;         
            
        }
    }


 return flag;

}