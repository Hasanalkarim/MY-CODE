#include <iostream>

using namespace std;

void lcm(int *,int *); //4. calculaete lcm

int main(){

int  *number1, *number2;

number1 = new int;

number2 = new int;


   cout<<endl<<"<< lcm  >>"<<endl<<endl;

   cout<<"first number ";
    cin>>*number1;

    cout<<"second number ";
    cin>>*number2;

    lcm(number1,number2);

   cout<<" lcm  is "<<*number1;


 return 0;   

 }




//defining a function defination



//**************************4.lcm**********************

void lcm(int *first,int *second){

int *i;

i = new int;



if (*first<*second) { //choosing the large number(as *first)

   *i=*first;
   *first=*second;
   *second=*i;
}

for(*i=1;   ;  *i++){  //no condition means infinti loop

      if((*first*(*i))%*second==0){//finding i for divisible


          break; //when found i it will break

      }


}
*first=*first*(*i);



}