#include <iostream>

using namespace std;

int main (){


 float x[10],sum,mean,s_dev;


 int i,num;




cout<<"How many integers ";
cin>>num;



//taking input as array

for (i=0; i<num; i++){

    cout<<"x["<<i<<"]=";

    cin>>x[i];


}


// ********* Main process ********************************************************************************


// avarage

sum=0;

for (i=0; i<num; i++){

   sum=sum+x[i];    

}

mean=sum/num;



//std


sum=0;

for (i=0; i<num; i++){

   sum=sum+(mean-x[i])*(mean-x[i]);  

}

s_dev=sum/num;




//printing output

cout<<endl<<"mean and std of "<<endl;


for (i=0; i<num; i++){

cout<<x[i]<<" ";

}


cout<<" are "<<mean<<" and "<<s_dev;


return 0;
}
