#include <iostream>
using namespace std;

//function prototype

void input_1d(int [], int);

void print_1d(int [], int);

void add(int [] ,int [], int [], int);





int main () {

int x[10],y[10],z[10], num;


      cout<<"how many integers ";
      cin>>num;

      cout<<"************** input array x *****************"<<endl;

      input_1d(x,num); //function calling

      cout<<"************** input array y *****************"<<endl;

      input_1d(y,num); //function calling



      //calculating   

      add(x, y, z, num);  //function calling 




      cout<<"************** print array x *****************";

       cout<<endl;

      print_1d(x,num); //function calling



      cout<<endl<<"************** print array y *****************";

      cout<<endl;


      print_1d(y,num);//function calling

       
      
      cout<<endl<<"************** print array z *****************";

       cout<<endl;

      print_1d(z,num); //function calling


return 0;
}

//***************************function definition******************************





//************************** array input **************
void input_1d(int a[], int number){

 int i;

   for(i=0; i<number; i++){

       cout<<"["<<i<<"]=";

       cin>>a[i];
   }
}




//************************** array print ******************
void print_1d(int a[], int number){

int i;

   for(i=0; i<number; i++){

       cout<<a[i]<<" ";

   }


}


//************************** array Addition *****************************
void add(int a[] ,int b[], int c[], int number){

int i;

   for(i=0; i<number; i++){

       c[i]=a[i]+b[i];

   }



}