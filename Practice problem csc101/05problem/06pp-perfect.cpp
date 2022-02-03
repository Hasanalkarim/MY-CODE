#include <iostream>

using namespace std;

int main () {


int n,i,sum; // variable declaration




cout<<"enter number ";
cin>>n;







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




return 0;
}
