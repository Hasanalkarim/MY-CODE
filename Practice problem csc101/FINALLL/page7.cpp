#include <iostream>
#include<string>
using namespace std;




int main(){


    
    string ch1,ch2;
    cout<<"Enter the string for encoding: ";
    cin>>ch1;



    cout<<"Enter the string for decoding: ";
    cin>>ch2;


    int n,k[n],i;

    char str[n],temp;


    n= ch2.size();

    


    for(i=0;i<n;i++){
        cout<<"Decoder key ["<<i<<"]: ";
        cin>>k[i];
    }



    cout<<ch2;


    for(i=0; i<n; i++){

        cout<<k[i];
    }
    


    for(i=0;i<n;i++){
      int x=k[i];
      str[x]=ch2[i];

    }



 
     cout<<endl<<"Decoded massage: "<<endl;
    for(i=0;i<n;i++){
      cout<<str[i];
    }
    return 0;
}