


 #include <iostream>

 

using namespace std;

 

int main()

{

    int i,num,count;

     count=0;

      cin>>num;

    for(i=1; ; i=i+2){

        cout<< i << ",";

        count=count+1;

          if(count==num){

              break;
          }


    }

   

    

   

    return 0;

}