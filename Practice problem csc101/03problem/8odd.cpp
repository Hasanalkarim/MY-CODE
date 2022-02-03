#include <iostream>

using namespace std;


int main () {


int m,n,i;


cout<<" enter smaller integer";
cin>>m;

cout<<" enter larger integer  ";
cin>>n;


if (n%2==0) {

    n=n-1;
}


for (i=m; i<n; i=i+1 ) {

  if (i%2==0) {
  cout<<i<<",";

  }

}



cout<<i;











    return 0;
}