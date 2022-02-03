#include <iostream>

using namespace std;

int main () {


int i,num,sum;

cout<<"enter a positive number";
cin>>num;

sum=0;
for (i=1; i<num; i++){
                       cout<<i<<"+";

                       sum=sum+i;
                     }

      cout<<num<<"="<<sum+num;


return 0;
}

