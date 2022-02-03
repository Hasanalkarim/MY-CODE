#include <iostream>

using namespace std;

void print_1d(int [], int);

void initialize_character_array(char[], int);

int input_character_array(char[]);

int is_substring_count(char [], int, char[], int ,int[]);




int main (){

int n1,n2, x[10];
 
char st[100] , subst[100];


initialize_character_array(st, 100);

initialize_character_array(subst, 100);


n1=input_character_array(st);

n2=input_character_array(subst);



n1=is_substring_count(st,n1, subst,n2, x);

if(n1!=0){

  cout<<"is substring"<<endl;

  cout<<n1<<" times"<<endl;

  cout<<"location are "<<endl;

  print_1d(x,n1);

}
else{
  
  cout<<"is not substring";

}

cout<<endl;

return 0;
}

//***************************function definition******************************




//************************** array print ******************
void print_1d(int a[], int number){

int i;

   for(i=0; i<number; i++){

       cout<<a[i]<<" ";

   }

}




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




//***************** is_substring_count **********************


int is_substring_count(char st[100], int n1,char subst[100], int n2 ,int location[10]){

    int i,j,flag,count;

    count=0;

    for(i=0; i<=n1-n2; i++){

        flag=1;

        for(j=0; j<n2; j++){
        
            if(st[i+j]!=subst[j]){
 
                    flag=0;

                    break;
            }
        }
          
        if(flag==1){

           location[count]=i;

           count=count+1;  
        }
    }


 return count;

}