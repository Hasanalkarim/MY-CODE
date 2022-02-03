#include <iostream>

using namespace std;

//function prototype

void print_1d(int [], int); 

int int2array(int,int []); //user will give integerss(int) will make it array(int [])



int main (){

int x[10], num;


cout<<"Enter number of digits ";
cin>>num;


  
num=int2array(num,x);

cout<<"********array********"<<endl;


print_1d(x,num);//printing the array

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




//******************************* int to array ***************************

int int2array(int num,int x[]){

 int i ,temp;


 temp=0;

 while (num>0) { //*****Making the integers revers***

       i=num%10;  //taking the last number and putting it in "i"

       num=num/10;//removing the last number

       temp=(temp*10)+i; //adding all number in reverse
 }



 num=temp; //seaveing the reverse number in num




 for(i=0; 0<num; i++){ //***talking number in array in reverse***

    temp=num%10;  //taking the last number

    x[i]=temp;   //adding the last number in x array

    num=num/10; //removing the last number 

 }

   
return i;
}