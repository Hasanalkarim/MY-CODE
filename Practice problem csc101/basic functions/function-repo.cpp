// e series
#include <iostream>
using namespace std;

//function prototype  or function declaration

float power(float,int); //1. calculate power float=base int=xponent

int factorial(int); //2. n!

int hcf(int,int); //3. calculaete hcf

int lcm(int,int); //4. calculaete lcm

int isprime(int);   //5. calculater prime

void perfect(int); //6.

void armstrong(int); //7.

void symmetric(int); //8.

void printNumberSeparate(int); //9. user enter numbers and it print them separetly

void printFibonacci(int);  //10. print fibonicc series

int isFibonacci(int);   //11. i-th term of the fibonacci series

float volume_sph(float); //12. user will gave radius of a sphere and it will return volume

float area_rectangle(float, float); //13

void swap_int(int *,int *); //send 2 variables address and it swap them copy: swap_int(& ,& );

 
int main (){

//variable declaration

int num1,num2;

float number1=0,number2=0,x;  



 float pie=3.1416,line1, line2,result,radious;

cout<<"1. Power "<<endl;

cout<<"2. Factorial "<<endl;

cout<<"3. Hcf "<<endl;

cout<<"4. lcm "<<endl;

cout<<"5. Prime "<<endl;

cout<<"6. perfect number "<<endl;

cout<<"7. Armstrong number "<<endl;

cout<<"8. symmetric "<<endl;

cout<<"9. number separation "<<endl;

cout<<"10. Fibonacci series "<<endl;

cout<<"11. find number in fibonacci "<<endl;

cout<<"12. Volume of a sphere "<<endl;

cout<<"13. Area of a rectangle "<<endl;



cout<<"14. Swap "<<endl<<endl;



cout<<"select an option (1-6): ";
cin>>x;




if (x==1) {


      cout<<endl<<"<< Power  >>"<<endl<<endl;

      cout<<"Enter base ";
      cin>>number1;

      cout<<"Enter xponent ";
      cin>>number2;

      result=power(number1, number2);
      
      cout<<"power is "<<result<<endl;



          }



else if (x==2) {

     cout<<endl<<"<< Factorial  >>"<<endl<<endl;

     cout<<"Enter n ";
     cin>>number1;

     result=factorial(number1);

     cout<<number1<<"! Factorial is "<<result<<endl;
}





else if (x==3) {

      cout<<endl<<"<< hcf >>"<<endl<<endl;

      cout<<"Enter first number ";
      cin>>number1;

      cout<<"Enter second number ";
      cin>>number2;
   
      result=hcf(number1,number2);

      cout<<"hcf is "<<result<<endl;
               }





else if (x==4) {


   cout<<endl<<"<< lcm  >>"<<endl<<endl;

   cout<<"first number ";
    cin>>number1;

    cout<<"second number ";
    cin>>number2;

    result=lcm(number1,number2);

   cout<<" lcm  is "<<result;

               }





else if (x==5) {


    cout<<endl<<"<< 5. prime >>"<<endl<<endl;
     
     cout<<"Enter a number";
     cin>>number1;

     //prime(number1);

     if(isprime(number1)==1){

         cout<<" is prime";
     }
     else{

          cout<<" Not prime";
     }
     
    
               }





else if (x==6) {


      cout<<endl<<"<< 6. perfect number  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>number1;

      perfect(number1);
      

               }

else if (x==7) {


      cout<<endl<<"<< 7. Amstrong number  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>number1;

      armstrong(number1);

     

               }


else if (x==8) {


      cout<<endl<<"<< 8. symmetric  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>number1;

      symmetric(number1);

}

else if (x==9) {


      cout<<endl<<"<< 9. Number Separation  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>number1;

      printNumberSeparate(number1);

}

else if (x==10) {


      cout<<endl<<"<< 10. Fibonacci series  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>number1;

      printFibonacci(number1);

}

else if (x==11) {


      cout<<endl<<"<< 11. find number in fibonacci  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>number1;

      isFibonacci(number1);

}

else if (x==12) {//


      cout<<endl<<"<< 12. Volume of a sphere  >>"<<endl<<endl;

      cout<<"enter number ";
      cin>>number1;

      cout<<"volume is "<<volume_sph(number1);

}

else if (x==13) {//13


      cout<<endl<<"<< 13. Area of a rectangle  >>"<<endl<<endl;

      cout<<"enter lenth ";
      cin>>number1;

      cout<<"enter width ";
      cin>>number2;

      cout<<"Area of a rectangle is "<<area_rectangle(number1, number2);

}


else if (x==14) {//14


      cout<<endl<<"<< 13. Swap  >>"<<endl<<endl;

      cout<<"enter x ";
      cin>>num1;

      cout<<"enter y ";
      cin>>num2;

      swap_int(&num1,&num2);


      cout<<endl<<"swaped"<<endl;


      cout<<"x:"<<num1;

      cout<<endl<<"y:"<<num2;

}


else {
      cout<<endl<<"wrong instruction please tap 1 to 6"<<endl;
     }


return 0;
}//***************************************END*********************************//









//defining a function defination


//**********************1.Power************************************

float power(float base, int xpo){ //b^e: myltiplying b , e times

 int   i;

 float power;



  power=1;
      for(i=0; i<xpo; i=i+1){
                                     // b=2
          power=power*(base);    //p=1*2...p=2*2..p=4*2...p=8*2..p=16*2..e times    
      }

        base=power;

 return power;

}




// *****************2.factorial******************************

int factorial(int nth){ // n!


int i, fctrl;



  fctrl=1;
for(i=1; i<=nth; i++){

  fctrl=fctrl*i;       //code: i*i*i*...n= n!
              //xmpl: 1*2*3*...7= 7!
}

  return fctrl;

}




// ********************3.hcf*************************

int hcf(int fst,int scnd){


int i;




if(fst<scnd){ //chosing small as 'second'

i=scnd;
scnd=fst;
fst=i;

}


for (i=scnd; 1<scnd; i=i-1){

      if((fst%i==0)&&(scnd%i==0)){

          break;
        
      }

}



return i;
}


//**************************4.lcm**********************

int lcm(int first,int second){

int i;



if (first<second) { //choosing the large number(as first)

   i=first;
   first=second;
   second=i;
}

for(i=1;   ;  i++){  //no condition means infinti loop

      if((first*i)%second==0){//finding i for divisible


          break; //when found i it will break

      }


}
first=first*i;

return first;

}


//**************************5.Prime***************************


int isprime(int n){


int i,prime_chk; // variable declaretion


prime_chk=1;//assuming x is prime


for (i=2 ; i<n; i++){ //checking all numbet 1 to n prime or not

    if (n%i==0){

        prime_chk=0;

        break;
    }


}


return prime_chk; 
}






//******************************6.Perfect number*********************************

void perfect(int n){


    int i,sum; // variable declaration



    sum=0;
    for (i=1 ; i<n; i++){ //checking all numbet 1 to n

        if (n%i==0){    //checking the divisibility

            sum=sum+i;  //adding the divisible one into sum

        }


    }



    //printing output

    if (n>0) {
            if(sum==n) {

            cout<<" perfect ";

            }

            else {

            cout<<" not perfect  ";


            }

    }

    else {

        cout<<n<<" is invalid please inter a positive non zero number ";

    }



}



//***********************************7.Armstrong number****************

void armstrong(int num1){

    int x,userinput,i,power,sum;


    userinput=num1; //saveing the user number



    power=1;
    sum=0;

    while( num1>0) {

        x=num1%10; //taking last number

        num1=num1/10;//removing last number


            power=1;

            for(i=0; i<3; i++){ //cube the last number

            power=power*x;

            }


        sum=sum+power; //adding the cubed number
    }



    //printing output

    if (sum==userinput){

    cout<<" Armstrong number ";
    }

    else {

    cout<<" not an Armstrong number ";

    }
}


//*********************************8. symmetric ***********************
void symmetric(int num1){

    int reverse,userinput;
    

    userinput=num1;

    reverse=0;
    while (num1>0) {

        reverse=reverse*10;      //to add zero as last digit

        reverse=reverse+num1%10;  //taking the last number and adding reverse

        num1=num1/10;  //removing the last number



            }



    //printing output


    if(reverse==userinput){

        cout<<" symmetric ";

    }
    else{

        cout<<" Not symmetric ";
    }

}


//**************************9.Number Separation*********************

void printNumberSeparate(int n){

    int x[10],i,last;



    for(i=0; 0<n; i++){ //talking number in array in reverse

        last=n%10;

        x[i]=last;

        n=n/10;

    }

    n=i-1; //counting how many digit user gave minues the cancel number for loop



    cout<<endl;


    //printing array revers


    for(i=n; 0<=i; i=i-1){

        cout<<x[i]<<endl<<endl;
    }

}

//************************************10. Fibonacci Series ********************

void printFibonacci(int n){

    int f1, f2, f3,i;


    f1=0;

    f2=1;

    f3=0;

    cout<<f1<<","<<f2;



    for (i=1;i<=n; i++ ) {

    f3=f1+f2;


    cout<<","<<f3;

    //the real work for fibonacci

    f1=f2;

    f2=f3;


    }

}


//************************************11. find number in fibonacci ********************

int isFibonacci(int n){

    int f1, f2, f3,i, isfibonacci;


    f1=0;

    f2=1;


    f3=0;


    isfibonacci=0; //assuming its not fibonacci

    for (i=1;i<=n; i++ ) {

    f3=f1+f2;


        if (n==f3) {// checking is it in the fibonacci sequence?

        isfibonacci=1;

            break;
        }



    //the real work for fibonacci

    f1=f2;

    f2=f3;


    }



    //printing output

    if(isfibonacci==1){

            if(n==1){
                   cout<<" second and thirs term in the  fibonacci sequence ";

            }
            else{

                cout<<i+2<<"th terms of the fibonacci sequence "; //i+2 cause we skip first two number we are readding them for counting
            }

    

    }
    else {
            if(n==0){
                     cout<<" first term in the  fibonacci sequence ";
            
            }
            else{
                  cout<<" dose not xist in the  fibonacci sequence ";
       
            }

    

    }

}



//**************************12. Volume of a sphere**********

float volume_sph(float reverse){

 return (4*(3.141*reverse*reverse*reverse))/3;

}



//**************************13. Area of a rectengle**********

float area_rectangle(float l, float w){
 
 return l*w;

}



//**************************14. swap_int *******************

void swap_int(int *x,int *y){


  *x=*x+*y;

  *y=*x-*y; //x with total value - y

  *x=*x-*y; //x with total value - previous y that containx



}