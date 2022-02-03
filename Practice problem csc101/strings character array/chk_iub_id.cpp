#include <iostream>

using namespace std;

void initialize_character_array(char[], int); //give int 100

int input_character_array(char[]);

int is_digit(char);

int chk_iub_id(char [],int); // give chr array and lenth will return 1 or 0



int main(){

int lenth,flag,i;

char ch[100];


initialize_character_array(ch, 100);

cout<<"Enter your id ";
cin>>ch;


lenth=input_character_array(ch);

flag=chk_iub_id(ch,lenth);
 

 
//printing output


if(flag==1){

    cout<<"valid id";
}
else{

    cout<<"invalid ";
}


 return 0;   

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


   for(length=0; length<100; length++){ // length checker of the character

       if (ch[length]=='\0'){

           break;

       }

   }

    return length;
}


//********************* is digit **************************

int is_digit(char ch){

 int d=0;


 if (ch>='0'&& ch<='9'){

        d=1;

 }
  

      
 return d;

}




//********************* chk_iub_id **************************

int chk_iub_id(char ch[],int lenth){

    int i,flag;

    flag=0;

    if (lenth==7){

        flag=1;

        for(i=0; i<lenth; i=i+1){

            if(is_digit(ch[i])==0){
                
                flag=0;

                break;

            }

        }


    }


    return flag;

}