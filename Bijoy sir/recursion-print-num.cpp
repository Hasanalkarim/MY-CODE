#include <iostream>

using namespace std;


int print_num(int );

int add(int);

int factorial(int);

int paw(int ,int );


//bool palindrome(string);



int main () {

int x, y;

string pld;



   
   //cout<<"Enter number x";cin>>x;
   
   //cout<<"Enter number y";cin>>y;

    print_num(5);
    //cout<<print_num(x);

   // cout<<add(x);

   // cout<<factorial(x);   

    // cout<<paw(x, y );



     cout<<"Enter string";cin>>pld;


    









    return 0;
}




int paw(int x ,int y ){

 if (y<=0)
   {
       return 1;
   }
   else{

     return x * paw( x , y-1 );

   }






}

















//**********************************factorial***************
int factorial(int x){

    if (x<=1)
    {
       return 1;
    }
    else{

       return x* factorial(x -1);

    }







}






//**********************************add***************
int add(int x){


    if (x<=0)
    {
        return 0;
    }
    else{

        
     return x + add(x-1) ;

    }





}





//****************print*************************************
int print_num(int x){
  
   if (x<=0)
   {
       return 0;
   }
   else {

    cout<<x<<endl;

   return print_num(x-1);


   }
   

    

    


}
