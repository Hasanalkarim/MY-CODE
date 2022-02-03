#include <iostream>

using namespace std;

void initialize_character_array(char[], int);

int input_character_array(char[]);

int is_vowel(char);

int is_count_vowel(char [], int );


int main (){

int n;
 
char ch[100];


initialize_character_array(ch, 100);


n=input_character_array(ch);


n=is_count_vowel(ch, n);

cout<<"found "<<n<<" vowel in the string"<<endl;


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



//********************* is vowel **************************

int is_vowel(char ch){

 int v=0;


 if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){

        v=1;

 }
  if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){

     v=1;
  }

      
 return v;

}



int is_count_vowel(char ch[], int length){

 int i, count;

     count=0;

   for(i=0; i<length; i++){

      if(is_vowel(ch[i])==1){

         count=count+1;
      }

   }

   return count;
}