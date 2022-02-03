#include <iostream>

using namespace std;

int main (){


 


 int x[11],i,num,counter[10],j;




cout<<"How many integers ";
cin>>num;

cout<<"enter any value from 0 to 9";

//taking input as x array

for (j=0; j<num; j++){

    cout<<"x["<<j<<"]=";

    cin>>x[j];


}


// ********* Main process ********************************************************************************



for (i=0; i<10; i++){ //making counter all value 0

    counter[i]=0;
}





for (i=0; i<10; i++){  //**** counter ****

      for(j=0; j<num; j++){//*** x ****

            if(i==x[j]){

                counter[i]=counter[i]+1;
            }

      }




}





//printing counter Arrary


for (i=0; i<10; i++){

cout<<i<<" is "<<counter[i]<<" times "<<endl<<endl;

}





return 0;
}
