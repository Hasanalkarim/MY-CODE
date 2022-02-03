#include <iostream>

using namespace std;

int is_vowel(char);

int main (){

char ch;


   cout<<"Enter a character ";
   cin>>ch;

    if(is_vowel(ch)==1){

        cout<<"is vowel";

    }
    else{

        cout<<"is not vowel";

    }

return 0;
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