#include <iostream>
using namespace std;

//function prototype

void input_1d(int [], int);

void print_1d(int [], int);

int isprime(int);

void array_to_p_np(int [], int);





int main () {

int x[10],num;


      cout<<"How many integers (n<=10): ";
      cin>>num;

      
      array_to_p_np(x,num); //function calling


return 0;
}






//************************** **** function defination****************************************************




//************************** array input******************
void input_1d(int a[], int number){

   int i;

   for(i=0; i<number; i++){

       cout<<"["<<i<<"]=";

       cin>>a[i];
   }
}




//************************** array print **********************************
void print_1d(int a[], int number){

   int i;

       

   for(i=0; i<number-1; i++){

       cout<<a[i]<<",";

   }

    

    cout<<a[i];
}



//************************** Prime ***************************


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


//*******************************************array to prime and not prime function**************

void array_to_p_np(int y[], int number){


    int prime[10],notPrime[10], i,j,k;


     input_1d(y,number);


      j=0;

      k=0;
      
      for(i=0; i<number; i++){

            if(isprime(y[i])==1){

               prime[j]=y[i];

               j=j+1;// using for counter AND setting up location for prime array
                
            }
            else{

               notPrime[k]=y[i];

               k=k+1;// using for counter AND setting up location for not prime array

            }

      }

     //********************printing************

      cout<<endl;

      //******************** x array************
        
      cout<<"X="; 

      print_1d(y,number);


      //******************** p array************

      cout<<endl<<"P=";

      print_1d(prime,j);


       //******************** np array************
      
      cout<<endl<<"NP=";

      print_1d(notPrime,k);

}