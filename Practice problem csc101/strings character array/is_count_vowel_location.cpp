#include <iostream>

using namespace std;

void print_1d(int [], int);

void initialize_character_array(char[], int); // give int 100

int input_character_array(char[]);

int is_vowel(char);

int is_count_vowel_location(char [], int, int []); //returns n that is counter And loacation array length


int main (){

int n, x[10];
 
char ch[100];


initialize_character_array(ch, 100);


n=input_character_array(ch);


n=is_count_vowel_location(ch, n ,x);

cout<<"found "<<n<<" vowel in the string"<<endl;

cout<<"locations of the vowel are"<<endl;


print_1d(x, n);

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



int is_count_vowel_location(char ch[], int length, int location[10]){

 int i, count;

     count=0;

   for(i=0; i<length; i++){

      if(is_vowel(ch[i])==1){

         location[count]=i;

          count=count+1;
      }

   }

   return count;
}