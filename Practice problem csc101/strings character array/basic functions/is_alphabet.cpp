#include <iostream>

using namespace std;

int is_alphabet(char);

int main (){

char ch;


   cout<<"Enter a character ";
   cin>>ch;

    if(is_alphabet(ch)==1){

        cout<<"is alphabet";

    }
    else{

        cout<<"is not alphabet";

    }

return 0;
}





//********************* is alphabet **************************

int is_alphabet(char ch){

 int a=0;


 if (ch>='a'&& ch<='z' || ch>='A'&& ch<='Z'){

        a=1;

 }
  

      
 return a;

}