#include <iostream>

using namespace std;

void decoder(char ch[], int length, int arr[]);
void bubbleSort3(int arr[], int n,char chArr[]);
void bubbleSort2(int arr[], int n, char chArr[]);
void encoder(char ch[], int length, int arr[]);
void bubbleSort(int arr[], int n,int arr2[]);
void swap(char *ch1, char *ch2);
void swap(int *xp, int *yp);

int main()
{
    string s, s2;
        int k=0,i, arr[100];
          char ch[s.length()];
              
          
          
    cout<<"Enter the string for encoding:";
    cin>>s;
    

  
    
    for(i=0;i<s.length();i++)
    {
        ch[i] = s[i];
    }
    
     arr[s.length()];
    
    for( i=0;i<s.length();i++)
    {
        arr[i] = i;
    }
    
    encoder(ch, s.length(), arr);
    
    cout<<"Send message : "<<endl;
     for( i=0;i<s.length();i++)
    {
        cout<<ch[i];
    }
    
    for(i=0;i<s.length();i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    
    cout<<"\nEnter the string for decoding : ";
    cin>>s2;
    
    for( i=0;i<s.length();i++)
    {
        cout<<"Decoder key ["<<i<<"] :"<<arr[i]<<" ";
        cout<<endl;
    }
    
    decoder(ch,s.length(),arr);
    
    cout<<"\nDecoded message : "<<endl;
    
      for( i=0;i<s.length();i++)
    {
        cout<<ch[i];
    }
    
    
 
    
    
    

    return 0;
}

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void swap(char *ch1, char *ch2)
{
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}
  

void bubbleSort(int arr[], int n,int arr2[])  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      {
   
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1]) 
        {
            swap(&arr[j], &arr[j+1]);  
            
            swap(&arr2[j],&arr2[j+1]);
        }
        
      }
}  


void encoder(char ch[], int length, int arr[])
{
    int b[length];
    
    for(int i=0;i<length;i++)
    {
        b[i]= (int)ch[i];
    }
    
    bubbleSort(b,length,arr);
 
    
    for(int i=0;i<length;i++)
    {
        
        ch[i] =(char) b[i];
    }
    
    
    
    
}


void bubbleSort2(int arr[], int n, char chArr[])  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
   
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
            swap(&chArr[j],&chArr[j+1]); 
            
}  

void bubbleSort3(int arr[], int n,char chArr[])  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      {
   
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1]) 
        {
            swap(&arr[j], &arr[j+1]);  
            swap(&chArr[j], &chArr[j+1]);
           
        }
        
      }
}  


void decoder(char ch[], int length, int arr[])
{
    bubbleSort3(arr, length, ch);
    
    
}

