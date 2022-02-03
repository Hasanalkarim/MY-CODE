#include <iostream>

using namespace std;

void hcf(int *,int *); //3. calculaete hcf

int main(){


int *number1, *number2;

number1 = new int;

number2 = new int;


  cout<<endl<<"<< hcf >>"<<endl<<endl;

      cout<<"Enter first number ";
      cin>>*number1;

      cout<<"Enter second number ";
      cin>>*number2;
   
      hcf(number1,number2);

      cout<<"hcf is "<<*number1<<endl;
              



 return 0;   

 }




//defining a function defination



// ********************3.hcf*************************

void hcf(int *fst,int *scnd){


int *i;

i = new int;




if(*fst<*scnd){ //chosing small as 'second'

*i=*scnd;
*scnd=*fst;
*fst=*i;

}


for (*i=*scnd; 1<*scnd; *i=*i-1){

      if((*fst%*i==0)&&(*scnd%*i==0)){

          break;
        
      }

}


 *fst=*i;

}