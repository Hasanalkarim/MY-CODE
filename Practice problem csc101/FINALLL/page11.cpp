#include <iostream>

using namespace std;

int don0(int);
int donA(int);
int donB(int);
int donC(int);
int donD(int);

//function prototype


int main (){

int number1;


   cout<<"Salary Range";
   cin>>number1;


   if(number1<=20000){

      cout<<don0(number1);


   }
   else if(number1<=40000){

     cout<<donA(number1);

   }
    else if(number1<=60000){

      cout<<donB(number1);

   }
    else if(number1<=120000){

       cout<<donC(number1);

   }
   
    else if(number1<=250000){

       cout<<donD(number1);

   }
   















return 0;
}

//***************************function definition******************************



int don0(int Donation){ //20000


   Donation=0;

  return Donation;
}


int donA(int Donation){ //40000



  Donation=(25000*0)+((Donation-25000)*(10/100));





  return Donation;
}


int donB(int Donation){  //60000



    Donation=(25000*0)+((25000*10)/100)+((Donation-50000)*(15/100));





  return Donation;
}


int donC(int Donation){  //120000




    Donation=(25000*0)+((25000*10)/100)+((50000*15)/100)+((Donation-100000)*(20/100));




  return Donation;
}


int donD(int Donation){  //250000



   Donation=(Donation*20)/100;





  return Donation;
}