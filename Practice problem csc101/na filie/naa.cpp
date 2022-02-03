#include <iostream>

using namespace std;
float Sphere_volume(int);
int factorial(int);
int Number_Of_Digits(int);
int Sum_Of_The_Digits(int);
int Reversed_number(int);
int HCF(int, int);
int LCM(int, int);
int prime_numbers(int);
int perfect_numbers(int);
int palindrome_numbers(int);
int main()
{
    int x;

    cout << "Enter x : ";
    cin >> x;

    palindrome_numbers(x);
    return 0;
}
int palindrome_numbers(int x){
    int i, r, rev;
    rev = 0;
    for(i=x; i!=0;){
        r = i % 10;
        rev = rev * 10 + r;
        i = i / 10;
    }
    if(rev==x){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
}

int perfect_numbers(int x){
    int i, sum = 0;
    for (i=1; i<x; i=i+1){
        if(x%i==0){
            sum = sum + i;
        }
    }
    if(sum==x){
        cout << "Perfect number";
    }
    else{
        cout << "Not Perfect";
    }
}

int prime_numbers(int x){
    int isPrime = 1, i;
    for(i=2; i<x; i=i+1){
        if(x%i==0){
            isPrime = 0;
        }
    }
    return isPrime;
}
int LCM(int x, int y){
    int high, i;
    if(x>y){
        high = x;
    }
    else{
        high = y;
    }
    for(i=high; i>0; i = i+1){
        if(i%x==0 && i%y==0){
            break;
        }
    }
    return i;
}

int HCF(int x, int y){
    int low, i;
    if(x>y){
        low = y;
    }
    else{
        low = x;
    }
    for(i=low; i>0; i = i-1){
        if(x%i==0 && y%i==0){
            break;
        }
    }
    return i;
}

int Reversed_number(int x){
    int i, rev, rem;
    rev = 0;
    for(i=x; i!=0; i = i/10){
        rem= i % 10;
        rev = rev * 10 + rem;
    }
    return rev;
}

int Number_Of_Digits(int x){
    int i;
    if(x==0){
        return 1;
    }
    for(i=0; x!=0; i=i+1){
        x = x / 10;
    }
    return i;
}
int Sum_Of_The_Digits(int x){
    int i, sum=0, rem;
    for(i=0; x!=0; i=i+1){
        rem = x % 10;
        sum = sum + rem;
        x = x / 10;
    }
    return sum;
}
int factorial(int a){
    int i, fact=1;
    for(i=1; i<=a; i=i+1){
        fact=fact*i;
    }
    return fact;
}

float Sphere_volume(int x){
    float volume;
    volume = 4.0/3 * 3.14 * (x * x *x);
    return volume;
}





#include <iostream>

using namespace std;

///////// List of Basic Functions \\\\\\\\\

// miscellaneous functions
int digitSum    ( int );
int countDigits ( int );
int numReverse  ( int );

// calculator functions
int   factorial ( int );
int   hcf  ( int, int );
int   lcm  ( int, int );
float pow  ( float, int );
float abs  ( float );

// number property checkers
bool isEven       ( int );
bool isPrime      ( int );
bool isPerfect    ( int );
bool isFibonacci  ( int );
bool isArmstrong  ( int );
bool isPalindrome ( int );

//_______________________________________//


int main()
{
// USE THIS TO TEST FUNCTIONS
	int   trialCounter = 5,
		  x, y;		
	float z;
	
	while ( trialCounter > 0 )
	{
	  // input test values
  	cout << "enter x: "; cin >> x;	 
  	//cout << "enter y: "; cin >> y;
  	//cout << "enter z: "; cin >> z;
  	
  	// call function and output
  	cout << isEven(x) << "\n";
  	
  	// tally run
  	trialCounter--;
	}

	return 0;
}


///////////////// EVEN-ODD CHECKER /////////////////
bool isEven ( int inputNum )
{
	if ( inputNum % 2 == 0 )
	  return true;
	else
	  return false;
}
// returns true if even, false if odd //////////////
////////////////////////////////////////////////////


//////////// PALINDROME NUMBER CHECKER /////////////
bool isPalindrome ( int inputNum )
{
// Check
	if ( numReverse( inputNum ) == inputNum )
	  return true;
	else
	  return false;
}
// returns true if inputNum is a palindrome ////////
// REQUIRED: NUMBER REVERSER                ////////
////////////////////////////////////////////////////


////////////// ARMSTRONG NUMBER CHECKER //////////////
bool isArmstrong ( int inputNum )
{
// Variables
	int i,				//iteration variable
		digit,			//"last" digit of inputNum
		sum = 0;		  //sum of digit cubed
		

// Calculation
	for ( i = inputNum; i > 0; i /= 10 )
	{
	  //taking last digit
	  digit = i % 10; 
	  //summing cube of removed digit
	  sum  += (digit * digit * digit);
	}

//Determination and Output
	if ( sum == inputNum )
	  return true;
	else
	  return false;
}
// returns true if inputNum is Armstrong number /////
/////////////////////////////////////////////////////


/////////////// PERFECT NUMBER CHECKER //////////////
bool isPerfect ( int inputNum )
{
// Variables
	int sum = 0,		 //sum of divisors
		i;			   //probable divisor
		
// Calculation
	//brute force from 1 to inputNum
	for ( i = 1; i < inputNum; i++ )
	{
	  //sum divisors
	  if ( (inputNum % i) == 0 )
	    sum += i;
	}
	
// Determination and Output
	if ( sum == inputNum )
	  return true;
	else
	  return false;
}
// returns true if inputNum is a perfect number /////
/////////////////////////////////////////////////////


///////////////// PRIME CHECKER ///////////////////
bool isPrime ( int inputNum )
{
// Variables
	int i;		//probable factors
	
	
// Check and return
	//input greater than 2 and odd
	if ( inputNum > 2  &&  inputNum % 2 != 0 )
	{
	  //brute force factor finder
	  for ( i = 3; i < inputNum; i += 2)
  	{
  	  //not prime if factor found
	    if ( (inputNum % i) == 0 )
  	    return false;
  	}
  	
  	//is prime if no factor found
	  return true;
	}
	
	//input is 2
	else if ( inputNum == 2 )
	  return true;
	
	//input less than 2, or even
	else
	  return false;
}
// returns true if inputNum is prime ///////////////
////////////////////////////////////////////////////


///////////// FIBONACCI NUMBER CHECKER //////////////
bool isFibonacci ( int inputNum )
{
// Variables
	int num1 = 1,				//two terms previous
		num2 = 1,				//previous term
		x    = num1 + num2;  	//current term
	 
	 
// Check if 0 or 1 ( i.e. 1st-3rd terms )
	if ( inputNum == 0 || inputNum == 1 )
	  return true;
	  
// Check against Fibonacci sequence 4th term onwards
	while ( x <= inputNum )
	{
	  //check if match
	  if ( inputNum == x )
	    return true;
	  
	  //if not, create next term
	  num1 = num2;
	  num2 = x;
	  x    = num1 + num2;
	}
	
	//if not in Fibonacci
	return false;
  
  
  
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


///////// list of funtions: 1D array //////////

int  arrayInput     ( int[] );
int  arrayRandFill  ( int[] );
int  fillFibonacci  ( int[], int, int );
int  fillPrime      ( int[], int, int );

int  arraySum   ( int[], int );
int  arrayMax   ( int[], int );
int  arrayMin   ( int[], int );
int  arrayMode  ( int[], int );
int  arrayFreq  ( int[], int, int );

int  arrayFind  ( int[], int[], int, int );
int  arrayOdds       ( int[], int[], int );
int  arrayEvens      ( int[], int[], int );
int  arrayPositives  ( int[], int[], int );
int  arrayNegatives  ( int[], int[], int );

bool areArraysEqual  ( int[], int[], int );
void ascBubbleSort   ( int[], int );
void ascSelectSort   ( int[], int );

void arrayCopy    ( int[], int[], int );
void arraySwap    ( int[], int[], int );
void arrayReverse ( int[], int );

void arrayPrint ( int[], int );

int  digitSeparator ( int[], int );
void digitFreq      ( int[10], int[], int );

bool isFibonacci ( int );
bool isPrime     ( int );

///_________________________________________\\\


int main()
{
// USE TO TEST FUNCTIONS
// Variables etc.
	int const SIZE = 10;
	
	int array1[ SIZE ] = { 3, 5, 3, 3, 2, 9, 5, 9, 0, 2 };
	int array2[ SIZE ] = { 32, 9, 54, 9, 92 };
		
	int ele1 = 10,
		ele2 = 10;
	
	
// Input
	//ele1 = arrayRandFill( array1 );
	//ele2 = arrayInput( array2 );

// Pre-processing output
	cout << "\nunprocessed array 1:";
	arrayPrint( array1, ele1);
	
	//cout << "\nunprocessed array 2:\n";
	//arrayPrint( array2, ele2 );
	
	
// Call whatever function is being tested
	digitFreq ( array2, array1, 9 );
	
// Output processed arrays here
	cout << "\nprocessed array 1:";
	arrayPrint( array1, ele1 );
	
	cout << "\nprocessed array 2:";
	arrayPrint( array2, ele2 );
	
	
	return 0;
}


/////////////// SIMPLE ARRAY MODE FINDER //////////////////// 
int arrayMode ( int myArray[], int size )
{
// Variables
	int i, 
		mode = myArray[ 0 ],
		freqMode = arrayFreq( myArray, size, mode );
	
// Counting and storing frequencies
	for ( i = 1; i < size; i++ )
	{
	  if ( arrayFreq( myArray, size, myArray[i] ) > freqMode )
	  {
	    mode = myArray[i];
	    freqMode = arrayFreq( myArray, size, myArray[i] );
	  }
	}
	
	return mode; 
}
// does not work if there are more than one mode - use 2D ///
// returns the mode of myArray[size]        /////////////////
// REQUIRED: array element frequency finder /////////////////
/////////////////////////////////////////////////////////////


//////////////////// ARRAY FILLER: PRIMES ///////////////////
int fillPrime ( int fillThis[], int limLow, int limUpp )
{
// Variables
	int i,
		size = 0;			//number of elements filled
		
// Filling
	for ( i = limLow; i <= limUpp; i++ )
	{
	  if ( isPrime( i ) == 1 )
	  {
	    fillThis[ size ] = i;
	    size++;
	  }
	}
	
	return size;
}
// fills array with prime numbers in [limLow, limUpp] ///////
// REQUIRED: prime number checker                     ///////
/////////////////////////////////////////////////////////////


/////////////////// ARRAY FILLER: FIBONACCI /////////////////
int fillFibonacci ( int fillThis[], int limLow, int limUpp )
{
// Variables
	int i,
		size = 0;			//number of elements filled
		
// Filling
	//exception case
	if ( limLow < 1 )
	{
	  limLow = 1;
	  size = 2;
	  fillThis[ 0 ] = 0;
	  fillThis[ 1 ] = 1;
	}
	
	for ( i = limLow; i <= limUpp; i++ )
	{
	  if ( isFibonacci( i ) == 1 )
	  {
	    fillThis[ size ] = i;
	    size++;
	  }
	}
	
	return size;
}
// fills array with Fibonacci numbers in [limLow, limUpp] ///
// REQUIRED: Fibonacci number checker                     ///
/////////////////////////////////////////////////////////////


///////////////// PRIME CHECKER ///////////////////
bool isPrime ( int inputNum )
{
// Variables
	int i;		//probable factors
	
	
// Check and return
	//input greater than 2 and odd
	if ( inputNum > 2  &&  inputNum % 2 != 0 )
	{
	  //brute force factor finder
	  for ( i = 3; i < inputNum; i += 2)
  	{
  	  //not prime if factor found
	    if ( (inputNum % i) == 0 )
  	    return false;
  	}
  	
  	//is prime if no factor found
	  return true;
	}
	
	//input is 2
	else if ( inputNum == 2 )
	  return true;
	
	//input less than 2, or even
	else
	  return false;
}
// returns true if inputNum is prime ///////////////
////////////////////////////////////////////////////


///////////// FIBONACCI NUMBER CHECKER //////////////
bool isFibonacci ( int inputNum )
{
// Variables
	int num1 = 1,				//two terms previous
		num2 = 1,				//previous term
		x    = num1 + num2;  	//current term
	 
	 
// Check if 0 or 1 ( i.e. 1st-3rd terms )
	if ( inputNum == 0 || inputNum == 1 )
	  return true;
	  
// Check against Fibonacci sequence 4th term onwards
	while ( x <= inputNum )
	{
	  //check if match
	  if ( inputNum == x )
	    return true;
	  
	  //if not, create next term
	  num1 = num2;
	  num2 = x;
	  x    = num1 + num2;
	}
	
	//if not in Fibonacci
	return false;
}
// returns true if inputNum is in Fibonacci /////////
/////////////////////////////////////////////////////


///////////////////// DIGIT FREQUENCY //////////////////////
void digitFreq ( int freq[10], int digitsArray[], int size )
{
// Variables
	int i,			//index of digitsArray
		digit,		//corresponds to index of freq[]
		freqCounter;  //used to count frequency of each digit
		
// Counting
	for ( digit = 0; digit < 10; digit++ )
	{
	  //initialise counter
	  freqCounter = 0;
	  
	  //search and tally digit's frequency
	  for ( i = 0; i < size; i++ )
	  {
	    if ( digitsArray[ i ] == digit )
	      freqCounter++;
	  }
	  
	  //record frequency in freq[]
	  freq[ digit ] = freqCounter;
	}
}
// records frequency of digits in digitsArray[ size ] //////
////////////////////////////////////////////////////////////


///////////////////// DIGIT SEPARATOR //////////////////////
int digitSeparator ( int keepHere[], int inputNum )
{
// Variables
	int i;			//number of digits removed

// Separate "last" digit and store
	for ( i = 0; inputNum != 0; i++, inputNum /= 10 )
	  keepHere[ i ] = inputNum % 10;
	  
// "Right" order of digits (if necessary)
	arrayReverse( keepHere, i );
	  
// Return number of digits
	return i;
}
// returns numDigits, stores inputNum in reverse order /////
// REQUIRED: array reverser (if necessary)             /////
////////////////////////////////////////////////////////////


/////////////// BUBBLE SORT: ASCENDING ///////////////
void ascBubbleSort ( int myArray[], int size )
{
// Variables
	int  i,   				//no. of runs
		 j,				   //index
		 tempSwap;			//used for swapping
		 
	bool flagSwap = false;    //true if swaps occur
		
		
// Sorting
	for ( i = 0; i <= size; i++ )
	{
	  //loop through elements
	  for ( j = 0; j < size - 1; j++ )
	  {
	    if ( myArray[ j ] > myArray[ j+1 ] )
  	  {
  	    //swap if current is larger than next
	      tempSwap       = myArray[ j ];
  	    myArray[ j ]   = myArray[ j+1 ];
	      myArray[ j+1 ] = tempSwap;
	      
	      flagSwap = true;	//confirm swap
  	  }
	  }

	  //check for swaps
	  if ( flagSwap == true )
	    flagSwap = false; 	//reset for next round
	  else
	    break;				//stop if no swaps
	}
}
// sorts array in asc. order using bubble sort ///////
//////////////////////////////////////////////////////

//////////////// SELECTION SORTER: ASCENDING ///////////////
void ascSelectSort ( int myArray[], int size )
{
// Variables
	int i, j,   		  //indexes
		indexMin,		 //index of min
		tempSwap;		 //temp used to swap
		
		
// Sorting
	for ( i = 0; i < size - 1; i++ )
	{
	  //initialise/reset for next round
	  indexMin = i;
	  
	  //find min
	  for ( j = i+1; j < size; j++ )
	  {
	    if ( myArray[ j ] < myArray[ i ] )
	      indexMin = j;
	  }
	  
	  //place min in at index i
	  if ( indexMin != i )
	  {
	    tempSwap = myArray[ i ];
  	  myArray[ i ] = myArray[ indexMin ];
	    myArray[ indexMin ] = tempSwap;
	  }
	}
}
// sorts array of given size using selection sort /////////
///////////////////////////////////////////////////////////
	  
/*	  
///////unfinished SELECTION SORT: ASCENDING //////////////
void ascSelectSort ( int myArray[], int size, bool dummy )
{
// Variables
	int i, j,			//iteration variables
	
		indexMax,		//holds index of max
		indexMin,		//holds index of min
		
		max,	 		//holds max value
		min,			 //holds min value
		tempSwap;		//used to swap
		
	//32 9 54 9 66  UNFINISHED CODE DO NOT RELY UPON
// Sorting
	for ( i = 0; i <= size / 2; i++ )
	{
	  //initialise / reset
	  max = myArray[ i ];
	  indexMax = i;
	  min = myArray[ i ];
	  indexMin = i;
	  
  	//find max and min
  	for ( j = i + 1; j < size - i; j++ )
  	{
  	  //store in max if larger value found
  	  if ( myArray[ j ] > max )
  	  {
	      max = myArray[ j ];
	      indexMax = j;
  	  }
	    //store in min if smaller value found
	    else if ( myArray[ j ] < min )
	    {
	      min = myArray[ j ];
	      indexMin = j;
	    }
  	}
	
	  //place min and max at extremes
	  if ( min < myArray[ i ] )
	  {
	    tempSwap = myArray[ i ];
  	  myArray[ i ] = myArray[ indexMin ];
	    myArray[ indexMin ] = tempSwap;
	  }
	  if ( max > myArray[ size - 1 - i ] )
	  {
	    tempSwap = myArray[ size-1-i ];
  	  myArray[ size-1-i ] = myArray [ indexMax ];
	    myArray[ indexMax ] = tempSwap;
	  }
	}
}
// sorts array in asc. order using select sort ///////
//////////////////////////////////////////////////////
*/

////////////////////// ARRAY REVERSE ////////////////////////
void arrayReverse ( int myArray[], int size )
{
// Variables
	int i,				//index
		tempSwap;		 //temp used to swap
		
// Flip
	for ( i = 0; i < (size / 2); i++ )
	{
	  tempSwap              = myArray[ i ];
	  myArray[ i ]          = myArray[ size-1 - i ];
	  myArray[ size-1 - i ] = tempSwap;
	}		
}
// reverses element ordering of an array of given size //////
/////////////////////////////////////////////////////////////


//////////////////////// ARRAY SWAP /////////////////////////
void arraySwap ( int arrayOne[], int arrayTwo[], int size )
{
// Variables
	int i,				//index
		tempSwap;		 //temp used to swap
		
// Swapping
	for ( i = 0; i < size; i++ )
	{
	  tempSwap      = arrayOne[ i ];
	  arrayOne[ i ] = arrayTwo[ i ];
	  arrayTwo[ i ] = tempSwap;
	}
}
// swaps all values of two arrays of given size ////////////
////////////////////////////////////////////////////////////


//////////////////////// ARRAY COPY /////////////////////////
void arrayCopy ( int copyThis[], int pasteHere[], int size )
{
// Variables
	int i;			//index

// Copying	
	for ( i = 0; i < size; i++ )
	  pasteHere[ i ] = copyThis[ i ];
}
// copies one array of given size to another ////////////////
/////////////////////////////////////////////////////////////


//////////////// ARRAY NEGATIVE NUMBER FINDER ///////////////
int arrayNegatives ( int result_indexes[], int myArray[], int size )
{
// Variables
	int i,				//index
		frequency = 0;	//number of neg. nums
	
// Search myArray
	for ( i = 0; i < size; i++ )
	{
	  //record index of negative numbers
	  if ( myArray[ i ] < 0 )
	  {
	    result_indexes[ frequency ] = i;
	    frequency++;
	  }
	}
	
// Output
	return frequency;
}
// returns freq and records indexes of neg. nums ////////////
/////////////////////////////////////////////////////////////


//////////// ARRAY POSITIVE NUMBER FINDER ////////////
int arrayPositives ( int result_indexes[], int myArray[], int size )
{
// Variables
	int i,				//index
		frequency = 0;	//number of pos. nums
	
// Search myArray
	for ( i = 0; i < size; i++ )
	{
	  //record index of positive numbers
	  if ( myArray[ i ] > 0 )
	  {
	    result_indexes[ frequency ] = i;
	    frequency++;
	  }
	}
	
// Output
	return frequency;
}
// returns freq and records indexes of pos. nums /////
//////////////////////////////////////////////////////


///////////// ARRAY EVEN NUMBER FINDER ///////////////
int arrayEvens ( int result_indexes[], int myArray[], int size )
{
// Variables
	int i,				//index
		frequency = 0;	//number of even numbers
	
// Search myArray
	for ( i = 0; i < size; i++ )
	{
	  //record index of even numbers
	  if ( myArray[ i ] % 2 == 0 )
	  {
	    result_indexes[ frequency ] = i;
	    frequency++;
	  }
	}
	
// Output
	return frequency;
}
// returns freq and records indexes of even nums /////
//////////////////////////////////////////////////////


////////////// ARRAY ODD NUMBER FINDER ///////////////
int arrayOdds ( int result_indexes[], int myArray[], int size )
{
// Variables
	int i,				//index
		frequency = 0;	//number of odd numbers
	
// Search myArray
	for ( i = 0; i < size; i++ )
	{
	  //record index of odd numbers
	  if ( myArray[ i ] % 2 != 0 )
	  {
	    result_indexes[ frequency ] = i;
	    frequency++;
	  }
	}
	
// Output
	return frequency;
}
// returns freq and records indexes of odd nums //////
//////////////////////////////////////////////////////


/////////////////// ARRAY MAX ////////////////////////
int arrayMax ( int myArray[], int size )
{
// Variables
	int i,				 	//index
		max = myArray[ 0 ];	//holds max value
		
// Finding amd storing max. value
	//loop through elements
	for ( i = 0; i < size; i++ )
	{
	  //store in max if larger value found
	  if ( myArray[ i ] > max )
	    max = myArray[ i ];
	}
	
	return max;
}
// returns max value in an array of given size ///////
//////////////////////////////////////////////////////


/////////////////// ARRAY MIN ////////////////////////
int arrayMin ( int myArray[], int size )
{
// Variables
	int i,				 	//index
		min = myArray[ 0 ];	//holds min value
		

// Finding and storing min. value
	//loop through elements
	for ( i = 0; i < size; i++ )
	{
	  //store in min if smaller value found
	  if ( myArray[ i ] < min )
	    min = myArray[ i ];
	}
	
	return min;
}
// returns min value in an array of given size ///////
//////////////////////////////////////////////////////


//////////////// ARRAY ELEMENT FINDER ////////////////
int arrayFind ( int result_indexes[], int myArray[], int size, int inputNum )
{
// Variables
	int i,				//index
		frequency = 0;	//frequency of inputNum
	
// Search myArray
	for ( i = 0; i < size; i++ )
	{
	  //record index of instances
	  if ( myArray[ i ] == inputNum )
	  {
	    result_indexes[ frequency ] = i;
	    frequency++;
	  }
	}
	
// Output
	return frequency;
}
// returns freq and records indexes of searched num //
//////////////////////////////////////////////////////


///////////// ARRAY ELEMENT FREQUENCY ////////////////
int arrayFreq ( int myArray[], int size, int inputNum )
{
// Variables
	int i,					//index
		countNum = 0;		 //tallies frequency
		
// Search, Tally, Return
	for ( i = 0; i < size; i++ )
	{
	  if ( myArray[ i ] == inputNum )
	    countNum++;
	}
	
	return countNum;
}
// returns frequency of inputNum in myArray[size] ////
//////////////////////////////////////////////////////


//////////////// ARRAYS EQUAL CHECKER ////////////////
bool areArraysEqual ( int arrayOne[], int arrayTwo[], int size )
{
// Variables
	int i;					//index
	
// Loop through elements to check for non-matches
	for ( i = 0; i < size; i++ )
	{
	  //if elements don't match
	  if ( arrayOne[ i ] != arrayTwo[ i ] )
	    return false;
	}
	
	//if all matched
	return true;
}
// returns true if both arrays are same //////////////
//////////////////////////////////////////////////////


//////////////////// ARRAY SUM ///////////////////////
int arraySum ( int myArray[], int size )
{
// Variables 
	int i,				//index
		sum = 0;		  //holds sum

// Calculation and Output
	for ( i = 0; i < size; i++ )
	  sum += myArray[ i ];

	return sum;
}
// calculates sum of all elements in array ///////////
//////////////////////////////////////////////////////


////////////////// ARRAY PRINTER /////////////////////
void arrayPrint ( int myArray[], int size )
{
// Variables
	int i;			//index	
	
// Printing 
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n{ ";
	for ( i = 0; i < size; i++ )
	{
	  //print each element
	  cout << myArray[ i ];
	  
	  if ( i < size - 1 )
	  {
	    //print comma after each
	    cout << ", ";
	    
	    //go to new line every 5 printed
	    if ( (i+1) % 5 == 0 )
	      cout << "\n  ";
	  }
	}
	cout << " }\n______________________________\n";
}
// prints array up to the numOfElements specified ////
//////////////////////////////////////////////////////


/////////////// ARRAY RANDOM INPUT ///////////////////
int arrayRandFill ( int myArray[] )
{
// Variables
	int size,		//number of elements entered
		i;		   //index
		
// Input 
	cout << "Enter number of inputs: ";
	 cin >>  size;
	 
// Filling
	srand( time(0) );
	
	for ( i = 0; i < size; i++ )
	  myArray[ i ] = rand() % 10;
	
// Return number of elements entered
	return size;
}
// fills array of given size with random integers  ///
// REQUIRES <cstdlib> and <ctime> for fresh values ///
//////////////////////////////////////////////////////



/////////////////// ARRAY INPUT //////////////////////
int arrayInput ( int myArray[] )
{
// Variables
	int size,		//number of elements entered
		i;		   //index
		
// Input 
	cout << "Enter number of inputs: ";
	 cin >>  size;
	 
// Filling
	for ( i = 0; i < size; i++ )
	{
	  cout << "index number " << i << ": ";
	   cin >>  myArray[ i ];
	}
	
// Return number of elements entered
	return size;
}
// takes array input, returns num. of elements ///////
//////////////////////////////////////////////////////




#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//////////////// list of functions: 2D array /////////////////

void arrayRand2D  ( int[20][20], int, int, int );
void arrayPrint2D ( int[20][20], int, int );  //normal
void arrayPrint2D ( int[400][2], int );  //for search indexes
void arrayPrint2D ( int[400][3], int );  //with elements too

void arrayCopy2D  ( int[20][20], int[20][20], int, int );
void arraySwap2D  ( int[20][20], int[20][20], int, int );

void transpose    ( int[20][20], int[20][20], int, int );
void array1Dto2D  ( int[20][20], int, int, int[], int );
int  array2Dto1D  ( int[], int[20][20], int, int );

int  getRowOrCol  ( int[], int[20][20], int, int, char, int );
int  getDiagonal  ( int[], int[20][20], int, char );
void fillRowOrCol ( int[20][20], int, int, int[], char, int );
void fillDiagonal ( int[20][20], int, int[], char );

void sortRowOrCol ( int[], int[200][200], int, int, char, int );
void sortDiagonal ( int[], int[200][200], int, char );

int  arrayFreq2D  ( int[20][20], int, int, int );
int  arrayFind2D  ( int[400][2], int[20][20], int, int, int );
int  findPrimes   ( int[400][3], int[20][20], int, int );

int  arrayMax2D   ( int[20][20], int, int );
int  arrayMin2D   ( int[20][20], int, int );
int  arraySum2D   ( int[20][20], int, int );
int  sumRowOrCol  ( int[20][20], int, int, char, int );
int  sumDiagonal  ( int[20][20], int, char );

void matrixAdd ( int[20][20], int[20][20], int[20][20], int, int );
void matrixSub ( int[20][20], int[20][20], int[20][20], int, int );
void matrixMul ( int[20][20], int[20][20], int, int, int[20][20], int, int );

bool isPrime(int);
///________________________________________________________///


int main()
{
// USE THIS TO TEST FUNCTIONS
// Variables etc.
	int i, j,
		array1[ 20 ][ 20 ],
		array2[ 20 ][ 20 ],
		result[ 20 ][ 20 ],
		index[400][2],
		index_wElem[400][3],
		
		array1D[ 100 ] = { 13, 32, 53, 67, 99, 43, 22, 35 };
	
// Input
	arrayRand2D ( array1, 4, 3, 583 );
//	arrayRand2D ( array2, 4, 3, 232 );
	
// Call whatever function is being tested
	i = findPrimes( index_wElem, array1, 4, 3 );
	
// Output
	cout << "\narray1:";
	arrayPrint2D ( array1, 4, 3 );
//	cout << "\narray2:";
//	arrayPrint2D ( array2, 4, 3 );
	cout << "\nresult:";
	arrayPrint2D ( index_wElem, i );
	
//	arrayPrint2D ( index, k );

//	for ( i = 0; i < j; i++ )
//	  cout << array1D[i] << "  ";
	
	return 0;
}

////////////// 2D ROW OR COLUMN SORTER ASCENDING ////////////
void sortRowOrCol ( int myArray[20][20], int rows, int cols, char userChoice, int index_wanted )
{
// Variables
	int temp[20],
		numOfElements;
	
// Sorting
	// retrieve wanted row or col
	numOfElements = getRowOrCol( temp, myArray, rows, cols, userChoice, index_wanted );
	
	//sort the row or col
	ascSelectSort( temp, numOfElements );
	
	// overwrite with sorted array
	fillRowOrCol ( myArray, rows, cols, temp, userChoice, index_wanted );
}
// sorts row or col of 2D array 						   ///
// REQUIRED: 1D sort, row/col retriver and filler, reverse ///
//////////////////////////////////////////////////////////////	


///////////////// PRIME CHECKER ///////////////////
bool isPrime ( int inputNum )
{
// Variables
	int i;		//probable factors
	
	
// Check and return
	//input greater than 2 and odd
	if ( inputNum > 2  &&  inputNum % 2 != 0 )
	{
	  //brute force factor finder
	  for ( i = 3; i < inputNum; i += 2)
  	{
  	  //not prime if factor found
	    if ( (inputNum % i) == 0 )
  	    return false;
  	}
  	
  	//is prime if no factor found
	  return true;
	}
	
	//input is 2
	else if ( inputNum == 2 )
	  return true;
	
	//input less than 2, or even
	else
	  return false;
}
// returns true if inputNum is prime ///////////////
////////////////////////////////////////////////////


//////////////////// PRIME FINDER ///////////////////////////
int findPrimes ( int keepHere[400][3], int myArray[20][20], int rows, int cols )
{
// Variables
	int i, j,			//rows, cols
		count = 0;	   //counts no. of primes found
	
// Finding
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
	  {
	    if ( isPrime( myArray[i][j] ) == true )
	    {
	      keepHere[ count ][ 0 ] = myArray[i][j];
	      keepHere[ count ][ 1 ] = i;
	      keepHere[ count ][ 2 ] = j;
	      
	      count++;
	    }
	  }
	}
	
	return count;		// no. of elem in keepHere[400][3]
}
// finds and records primes and their location from myArray//
// REQUIRED: isPrime, printer for [400][3] array 		  //
/////////////////////////////////////////////////////////////
	

///////////////// MATRIX MULTIPLICATION /////////////////////
void matrixMul ( int keepHere[20][20], int array1[20][20], int rows1, int cols1, int array2[20][20], int rows2, int cols2 )
{
// Variables
	int i, j, k;			//rows, cols
	
// Multiplication
	for ( i = 0; i < rows1; i++ )
	{
	  for ( j = 0; j < cols2; j++ )
	  {
	    for ( k = 0; k < cols1; k++ )
	    {
	      keepHere[i][j] += array1[i][j] * array2[i][j];
	    }
	  }
	}
}
////

/////////////////// MATRIX SUBTRACTION //////////////////////
void matrixSub ( int keepHere[20][20], int matrix1[20][20], int matrix2[20][20], int rows, int cols )
{
// Variables
	int i, j;		//indexes
	
// Addition
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
	    keepHere[i][j] = matrix1[i][j] - matrix2[i][j];
	}
}
// subtracts two matrices to produce another ////////////////
/////////////////////////////////////////////////////////////


////////////////////// MATRIX ADDITION //////////////////////
void matrixAdd ( int keepHere[20][20], int matrix1[20][20], int matrix2[20][20], int rows, int cols )
{
// Variables
	int i, j;		//indexes
	
// Addition
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
	    keepHere[i][j] = (matrix1[i][j] + matrix2[i][j]);
	}
}
// adds two matrices to produce another /////////////////////
/////////////////////////////////////////////////////////////


/////////////////// 2D ARRAY DIAGONAL FILLER ///////////////
void fillDiagonal ( int myArray[20][20], int size, int copyThis[], char userChoice )
{
// Variables
	int i;
		
// Summing
	// If primary diagonal wanted
	if ( userChoice == 'p' )
	{
	  for ( i = 0; i < size; i++ )
	    myArray[i][i] = copyThis[i];
	}
	
	// If secondary diagonal wanted
	else if ( userChoice == 's' )
	{
	  for ( i = 0; i < size; i++ )
	    myArray[ size - 1 - i ][ i ] = copyThis[i];
	}
	
	// For invalid userChoice
	else
	  cout << "invalid choice - only 'p' or 's' allowed";
}
// fills diagonal from 1D							   /////
// ENSURE: diagonal size == 1D size					 /////
/////////////////////////////////////////////////////////////


///////////////// 2D ARRAY ROW/COLUMN FILLER ////////////////
void fillRowOrCol ( int myArray[20][20], int rows, int cols, int copyThis[], char userChoice, int index_wanted )
{
// Variables
	int i;			//various indexes
		
// Copying
	// If row wanted
	if ( userChoice == 'r' )
	{
	  for ( i = 0; i < cols; i++ )
	    myArray[ index_wanted ][ i ] = copyThis[ i ];
	}
	
	// If cols wanted
	else if ( userChoice == 'c' )
	{
	  for ( i = 0; i < rows; i++ )
	    myArray[ i ][ index_wanted ] = copyThis[i];
	}
	
	// For invalid userChoice
	else
	  cout << "invalid choice - only 'r' or 'c' allowed";
}
// fills row/col with an 1D array and returns size filled  //
// ENSURE: size of copyThis == size of row/col             //
/////////////////////////////////////////////////////////////


///////////////// 2D ARRAY DIAGONAL RETRIEVER ///////////////
int getDiagonal ( int keepHere[], int myArray[20][20], int size, char userChoice )
{
// Variables
	int i;
		
// Summing
	// If primary diagonal wanted
	if ( userChoice == 'p' )
	{
	  for ( i = 0; i < size; i++ )
	    keepHere[i] = myArray[i][i];
	    
	  return size;		//num of elements in diagonal
	}
	
	// If secondary diagonal wanted
	else if ( userChoice == 's' )
	{
	  for ( i = 0; i < size; i++ )
	    keepHere[i] = myArray[ size - 1 - i ][ i ];
	    
	    return size;		//num of elements in diagonal
	}
	
	// For invalid userChoice
	else
	{
	  cout << "invalid choice - only 'p' or 's' allowed";
	  return 0;
	}
}
// copies a diagonal into a 1D and returns size      ////////
/////////////////////////////////////////////////////////////


/////////////// 2D ARRAY ROW/COLUMN RETRIEVER ///////////////
int getRowOrCol ( int keepHere[], int myArray[20][20], int rows, int cols, char userChoice, int index_wanted )
{
// Variables
	int i;			//various indexes
		
// Copying
	// If row wanted
	if ( userChoice == 'r' )
	{
	  for ( i = 0; i < cols; i++ )
	    keepHere[ i ] = myArray[ index_wanted ][ i ];
	    
	  return cols;	//i.e. num of elements copied
	}
	
	// If cols wanted
	else if ( userChoice == 'c' )
	{
	  for ( i = 0; i < rows; i++ )
	    keepHere[ i ] = myArray[ i ][ index_wanted ];
	    
	  return rows;	//i.e. num of elements copied
	}
	
	// For invalid userChoice
	else
	{
	  cout << "invalid choice - only 'r' or 'c' allowed";
	  return 0;
	}
}
// copies a row/col of myArray and returns how many copied //
/////////////////////////////////////////////////////////////


///////////////// 2D ARRAY SUM OF DIAGONAL //////////////////
int sumDiagonal ( int myArray[20][20], int size, char userChoice )
{
// Variables
	int i,
		sum = 0;
		
// Summing
	// If primary diagonal sum wanted
	if ( userChoice == 'p' )
	{
	  for ( i = 0; i < size; i++ )
	    sum += myArray[i][i];
	}
	// If secondary diagonal wanted
	else if ( userChoice == 's' )
	{
	  for ( i = 0; i < size; i++ )
	    sum += myArray[ size - 1 - i ][ i ];
	}
	// For invalid userChoice
	else
	{
	  cout << "invalid choice - only 'p' or 's' allowed";
	  return 0;
	}
	
	return sum;
}
// returns sum of primary (p) or secondary (s) diagonal /////
/////////////////////////////////////////////////////////////


////////////////// 2D ARRAY ROW/COLUMN SUM //////////////////
int sumRowOrCol ( int myArray[20][20], int rows, int cols, char userChoice, int index_wanted )
{
// Variables
	int i,			//index of myArray (row or col)
		sum = 0;	  //holds sum  
		
// Summing
	// If column sum wanted
	if ( userChoice == 'c' )
	{
  	for ( i = 0; i < rows; i++ )
	    sum += myArray[i][ index_wanted ];
	}
	// If row sum wanted
	else if ( userChoice == 'r' )
	{
	  for ( i = 0; i < cols; i++ )
	    sum += myArray[ index_wanted ][i];
	}
	// For invalid userChoice
	else
	{
	  cout << "invalid choice - only 'r' or 'c' allowed";
	  return 0;
	}
	  
	return sum;
}
// returns the sum of row (r) or col (c) from myArray ///////
/////////////////////////////////////////////////////////////


/////////////////////// 2D ARRAY SUM ////////////////////////
int arraySum2D ( int myArray[20][20], int rows, int cols )
{
// Variables
	int i, j,			//index of rows and cols
		sum = 0;		 //holds sum
		
// Summing
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
	    sum += myArray[i][j];
	}
	
	return sum;
}
// returns sum of all elements in myArray[rows][cols] ///////
/////////////////////////////////////////////////////////////


//////////////////// 2D ARRAY MIN FINDER ////////////////////
int arrayMin2D ( int myArray[20][20], int rows, int cols )
{
// Variables
	int i, j,						//iteration variables
		min = myArray[0][0];		 //holds min value
		
// Finding min
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
	  {
	    if ( myArray[i][j] < min )
	      min = myArray[i][j];
	  }
	}
	
	return min;
}
// returns min value in myArray[rows][cols] /////////////////
/////////////////////////////////////////////////////////////


//////////////////// 2D ARRAY MAX FINDER ////////////////////
int arrayMax2D ( int myArray[20][20], int rows, int cols )
{
// Variables
	int i, j,					//row and column of myArray
		max = myArray[0][0];	 //holds max value
		
// Finding max
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
	  {
	    if ( myArray[i][j] > max )
	      max = myArray[i][j];
	  }
	}
	
	return max;
}
// returns max value in myArray[rows][cols] /////////////////
/////////////////////////////////////////////////////////////


////////////////// 2D ARRAY ELEMENT FINDER //////////////////
int arrayFind2D ( int result_indexes[400][2], int myArray[20][20], int rows, int cols, int inputNum )
{
// Variables
	int i, j,						//iteration variables
		freq = 0;					//holds frequency
		
// Searching
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
	  {
	    //record indexes of hits and tally
	    if ( myArray[i][j] == inputNum )
	    {
	      result_indexes[freq][0] = i;
	      result_indexes[freq][1] = j;
	      freq++;
	    }
	  }
	}
	
	return freq;
}
// returns freq of input and records element rows and cols //
// index[rows] are elements. col0 is rows, col1 is cols    //
/////////////////////////////////////////////////////////////
	    

//////////////// 2D ARRAY ELEMENT FREQUENCY /////////////////
int arrayFreq2D ( int myArray[20][20], int rows, int cols, int inputNum )
{
// Variables
	int i, j,						//iteration variables
		freq = 0;					//holds frequency
		
// Tallying frequency
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
	  {
	    if ( myArray[i][j] == inputNum )
	      freq++;
	  }
	}
	
	return freq;
}
// returns frequency of inputNum in myArray[rows][cols] /////
/////////////////////////////////////////////////////////////


/////////////////////// 2D ARRAY TO 1D //////////////////////
int array2Dto1D ( int array1D[], int myArray[20][20], int rows,int cols )
{
// Variables
	int i, j, k;			//iteration variables
	
// Conversion
	for ( i = 0, k = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++, k++ )
	    array1D[k] = myArray[i][j]; 
	}

// Return size of converted array
	return k;
}
// converts 2D array of given size into 1D (row to row ) ////
/////////////////////////////////////////////////////////////


/////////////////////// 1D ARRAY TO 2D //////////////////////
void array1Dto2D ( int array2D[20][20], int rows, int cols, int myArray[], int size )
{
// Variables
	int i, j, k;			//iteration variables
	
// Conversion
	for ( i = 0, k = 0; i < cols; i++ )
	{
	  for ( j = 0; j < rows; j++, k++ )
	    array2D[j][i] = myArray[k];
	}
}
// converts a 1D array to 2D array column-wise  /////////////
/////////////////////////////////////////////////////////////


/////////////////// 2D ARRAY TRANSPOSE //////////////////////
void transpose ( int transposed[20][20], int myArray[20][20], int rows, int cols )
{
//Variables
	int i, j;			//iteration variables
	
// Flipping
	for ( i = 0; i < cols; i++ )
	{
	  for ( j = 0; j < rows; j++ )
	    transposed[i][j] = myArray[j][i];
	}
}
// creates transposed[col][row] from myArray[row][col] //////
/////////////////////////////////////////////////////////////



///// 2D ARRAY PRINTER: SEARCH INDEX VERSION (w/ elem) ///////
void arrayPrint2D ( int indexes[400][3], int search_hits )
{
// Variables
	int i, j;				//iteration variables
	
// Printing
	cout << "\n~~~~~~~~ SEARCH RESULTS ~~~~~~~~\n";
	for ( i = 0; i < search_hits; i++ )
	{
	  cout << "result no." << i+1 << ":    ";
	  
	  for ( j = 0; j < 3; j++ )
	    cout << indexes[i][j] << "  ";
	  
	  cout << endl;
	}
	cout << "________________________________\n";
}
// prints indexes of 2D array searches                  /////
// col0 is rows, col1 is cols, each row is each element /////
/////////////////////////////////////////////////////////////


/////////// 2D ARRAY PRINTER: SEARCH INDEX VERSION //////////
void arrayPrint2D ( int indexes[400][2], int search_hits )
{
// Variables
	int i, j;				//iteration variables
	
// Printing
	cout << "\n~~~~~~~~ SEARCH RESULTS ~~~~~~~~\n";
	for ( i = 0; i < search_hits; i++ )
	{
	  cout << "result no." << i+1 << ":    ";
	  
	  for ( j = 0; j < 2; j++ )
	    cout << indexes[i][j] << "  ";
	  
	  cout << endl;
	}
	cout << "________________________________\n";
}
// prints indexes of 2D array searches                  /////
// col0 is rows, col1 is cols, each row is each element /////
/////////////////////////////////////////////////////////////


////////////////////// 2D ARRAY PRINTER //////////////////////
void arrayPrint2D ( int myArray[20][20], int rows, int cols )
{
// Variables
	int i, j;				//iteration variables
	
// Printing
	cout << "\n~~~~~~~~~~ 2D ~~~~~~~~~~~\n";
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
		cout << myArray[i][j] << "  ";
	  
	  cout << endl;
	}
	cout << "_________________________\n";
}
// prints 2D array of specified size ////////////////////////
/////////////////////////////////////////////////////////////


//////////////////// 2D ARRAY FILLER: RANDOM /////////////////
void arrayRand2D ( int myArray[20][20], int rows, int cols, int seed )
{
// Variables
	int i, j;				//iteration variables

// Filling
	srand( seed );
	
	for ( i = 0; i < rows; i++ )
	{
	  for ( j = 0; j < cols; j++ )
	    myArray[i][j] = rand() % 10;
	}
}
// fills 2D array of specified size with random integers /////
// REQUIRED: <cstdlib>								   /////
//////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void  sortList_az  ( char[20][20], int );
void  stringCopy   ( char[], char[] );
void  stringSwap   ( char[], char[] );

int main()
{
// Variables etc.
	char nameList[20][20];
	int  i,
		 listSize = 3;
		 
// Input
	for ( i = 0; i < listSize; i++ )
	{
	  cout << "Enter name " << i << ": ";
	   cin >>  nameList[i];
	}
	cout << endl;
	
// Sort
	sortList_az( nameList, 5 );
	
// Output
	cout << "Sorted alphabetically:\n";
	for ( i = 0; i < listSize; i++ )
	  cout << nameList[i] << endl;
	
	return 0;
}

//////////// ASCENDING ALPHABETICAL BUBBLE SORT ////////////
void sortList_az ( char myList[20][20], int size )
{
// Variables
	int  i, j;
	bool flagSwap = false;    //true if swap occur
	
// Sorting
	for ( i = 0; i <= size; i++ )
	{
	  for ( j = 0; j < size - 1; j++ )
	  {
		if ( myList[j][0] > myList[ j+1 ][0] )
		{
	      stringSwap( myList[j], myList[ j+1 ] );
	      
	      flagSwap = true;	//confirm swap
		}
	  }
	  
	  //check for swaps
	  if ( flagSwap == true )
	    flagSwap = false; 	//reset for next round
	  else
	    break;				//stop if no swaps
	}
}
// sorts a 2D char array in a-z order				   //////
// ENSURE: first character of each all capital or small //////
//////////////////////////////////////////////////////////////


/////////////////////// STRING SWAP //////////////////////////
void stringSwap ( char string1[], char string2[] )
{
// Variables
	int  i;		 	//index of arrays
	char temp[100];		//used to swap
	
// Swapping
	stringCopy( temp, string1 );
	stringCopy( string1, string2 );
	stringCopy( string2, temp );
}
// swaps all characters between two strings 			//////
// REQUIRED: string length finder					   //////
//////////////////////////////////////////////////////////////


////////////////// STRING COPY: NO SIZE //////////////////////
void stringCopy ( char pasteHere[], char copyThis[] )
{
// Variables
	int  i = 0;			//index of copyThis

// Copying
	while ( copyThis[i] != '\0' )
	{
	  pasteHere[i] = copyThis[i];
	  i++;
	}
}
// copies a string to another ////////////////////////////////
//////////////////////////////////////////////////////////////


/////////////////////// STRING LENGTH ////////////////////////
int stringLength ( char myString[] )
{
// Variables
	int charCount = 0;	//number of characters inputted

// Count length and return
	while ( myString[ charCount ] != '\0' )
	  charCount++;

	return charCount;
}
// returns length of a string  ///////////////////////////////
//////////////////////////////////////////////////////////////




