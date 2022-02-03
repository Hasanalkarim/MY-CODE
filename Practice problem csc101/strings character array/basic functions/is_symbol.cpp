#include <iostream>

using namespace std;

int is_symbol(char);

int main (){

char ch;


   cout<<"Enter a character ";
   cin>>ch;

    if(is_symbol(ch)==1){

        cout<<"is symbol";

    }
    else{

        cout<<"is not symbol";

    }

return 0;
}





//********************* is symbol **************************

int is_symbol(char ch){

 int s=1;


 if (ch>='a'&& ch<='z' || ch>='A'&& ch<='Z'){

    s=0;
 }

 if(ch>='0'&& ch<='9'){

    s=0;   
}

   
 return s;

}