#include <iostream>

using namespace std;

int main () {


int first, second, i;


cout<<"first number ";
cin>>first;

cout<<"second number ";
cin>>second;


if (first<second) { //chosing the small number (as second) because between 2 num the hcf will be middle of small num

   i=first;
   first=second;
   second=i;
}




for (i=second; i>1; i=i-1){ //counting second backwords like 10 9 8 ...


if((first%i==0)&&(second%i==0)) {// findig hcf from that number and the 1st number will be hcf cause
                                 // its the largest num divisible by both

     break;
}



//this is where i=i-1 happend
}


cout<<"HCF is "<<i;


cout<<endl<<"LCM is "<<(first*second)/i;



return 0;
}
