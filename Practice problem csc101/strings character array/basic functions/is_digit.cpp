#include <iostream>

using namespace std;

int is_digit(char);

int main (){

char ch;


   cout<<"Enter a character ";
   cin>>ch;

    if(is_digit(ch)==1){

        cout<<"is digit";

    }
    else{

        cout<<"is not digit";

    }

return 0;
}





//********************* is digit **************************

int is_digit(char ch){

 int d=0;


 if (ch>='0'&& ch<='9'){

        d=1;

 }
  

      
 return d;

}