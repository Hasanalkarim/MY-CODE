


 #include <iostream>

 

using namespace std;

 

int main()

{

    int i,num,count;

     count=0;

      cin>>num;

    for(i=1; ; i=i+2){

        

        count=count+1;

          if(count==num){

              break;
          }


    }

   

      cout<< i;

   

    return 0;

}