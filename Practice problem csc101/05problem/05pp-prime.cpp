#include <iostream>

using namespace std;

int main () {


int n,i,isprime; // variable declaretion




cout<<"enter number ";
cin>>n;





isprime=1;//assuming x is prime


for (i=2 ; i<n; i++){ //checking all numbet 1 to n prime or not

    if (n%i==0){

        isprime=0;

        break;
    }


}



//printing output

if (n>1) {
        if(isprime==1) {

          cout<<" prime ";

        }

        else {

        cout<<" not prime!!  ";
        cout<<"it is divisible by "<<i;

        }


}
else {      if (n==1){
                       cout<<" you enterd 1 which is not prime by definition "<<endl;
               }
            else {
                      cout<<n<<" is invalid  ";

            }

}




return 0;
}
