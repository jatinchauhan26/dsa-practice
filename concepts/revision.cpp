// Max size of an array = 10^6 inside int main()
// Outside int main means globally it will 10^7

// Traversing in  an array 

// #include <iostream>
// using namespace std;
// // int n = 5;
// void traverse(int arr[], int n ){
//     for(int i = 0 ; i <= n-1 ; i++){
//         cout << arr[i] << " ";
//         }
// }
// int main(){
// int arr[] = {1,3,4,5,7};
// int n = sizeof(arr)/sizeof(int);
//  traverse(arr,n);
// }





//Largest element in an array 

// int largerelement(int arr[],int n ){
    
// int secondlargest = -1;
// int larger = arr[0] ;

// for(int i = 0 ; i <= n-1 ; i++){
//  larger = max(larger,arr[i]);


// if(arr[i]>larger){
   
//     secondlargest = larger;
//     larger = arr[i];
// }
// if(arr[i] > secondlargest && arr[i] < larger){
//     secondlargest = arr[i];
// }

// }
// return secondlargest;
// }
// int main(){

// int arr[] = {3,6,11,5,6};
// int n = sizeof(arr)/sizeof(int);
// cout << largerelement(arr,n);

// }





//SECOND SMALLER 


// #include <iostream>
// using namespace std;

// int n = 5; 
// int smallerElement(int arr[], int n ){
//  int smaller = arr[0];
//  int secondsmaller = INT8_MAX;
// for(int i = 0 ; i <= n-1 ; i++){
//   if(arr[i]<smaller){
//     secondsmaller = smaller;
//     smaller = arr[i];
//   }
//   if(arr[i]<secondsmaller && arr[i] > smaller){
//    secondsmaller = arr[i];
//   }
// }
// return secondsmaller;
// }
// int main(){
//     int arr[] = {2,5,6,2,9,1,1};
//     int n = sizeof(arr)/sizeof(int);
//     cout << smallerElement(arr,n);
// }


// ARRAY IS SORTED CHECK 

// #include <iostream>
// using namespace std;

// int sortedarray(int arr[],int n ){
//     for(int i = 1 ; i <= n-1 ; i++){
//         if(arr[i-1] <= arr[i]){
            
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }
// int main(){

//     int arr[] = {1,2,3,4};
//     int n = sizeof(arr)/sizeof(int);
//     cout << sortedarray(arr,n);
// }



//Remove duplicate from the array 

// #include <iostream>
// using namespace std;
// int removeduplicates(int arr[], int n ){
//   int i = 0 ;
//   for(int j = 1 ; j <= n-1 ; j++){
//   if(arr[i]!= arr[j]){
//     arr[i+1] = arr[j];
//     i++;
//   }
//   }

//   return i+1;
// }
// int main (){
//  int arr[] = {1,1,2,2,2,3,3};
//  int n = sizeof(arr)/sizeof(int);
//  int newsize = removeduplicates(arr,n);
//  for(int i = 0 ; i < newsize ; i++){
//  cout << arr[i] << " ";
//  }
 
// }





// #include<iostream>
// using namespace std ;
// void removeduplicates(int arr[],int n){
//   int i = 0;
// for(int j = 1 ; j < n ; j++){
// if(arr[i] != arr[j]){
//    arr[i+1] = 
// }

// }



// }




// int main (){
//  int arr[] = {1,1,2,2,2,3,3};
//  int n = sizeof(arr)/sizeof(int);
// }



// #include <iostream>
// using namespace std;
// int even_odd(int n , int arr[]) {
// for(int i = 0 ; i < n ; i++){
//     if(arr[i]%2 == 0){
//         cout << arr[i] << " is even" << "\n" ;
//     }
//     else {
//         cout << arr[i] << " is odd " << endl;
//     }
// }
// return 0;
// }
// int main(){
// int arr[] = {1,4,3,8,15};
// int n = sizeof(arr)/sizeof(int);
// even_odd(n,arr);
// return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
// int n ;
// cout << "Enter a number ";
// cin >> n;

// if(n%2 == 0 ){
//     cout << "no is even";
// }
// else{
//     cout << "no is odd";
// }


// }






//Remove the duplicates 


// #include <iostream>
// using namespace std;
// int function(int n , int arr[]){
//  int i=0;
//  for(int j = 1; j < n ; j++){
//  if(arr[i] != arr[j]){
//   arr[i+1] = arr[j];
//   i++;
//  }

// }
// return i+1;

// }
// int main (){
//  int arr[] = {9,5,5,3,6,2,2,4,4,4};
//  int n = sizeof(arr)/sizeof(int);
//  int newsize =  function(n,arr);

//  for(int i = 0 ; i < newsize ; i++){
//     cout << arr[i] << " ";
//  }
// }



// Find the sum of digits in a number

// #include <iostream>
// using namespace std;
// int main(){
//     int i = 0;
//     int sum = 0;
//     int n;
//     cout << "enter the number";
//     cin >> n ;
//    while (n>0)
//    {
//     int last_digit = n % 10 ;
//     n = n/10;
//     sum = last_digit + sum ;
//    }
//    cout << sum ;
// }



// Count the number of digits in a number 

// #include <iostream>
// using namespace std;
// int main(){
//  int count = 0;
//  int n = 8922;
//  while(n>0){
//     n = n/10;
//     count++ ;
//  }
//  cout << count ;
// }


// Find the largest of three numbers.

// #include <iostream>
// using namespace std;
// int main() {
// int arr[] = {1,8,9,11,11} ;
// int n = sizeof(arr)/sizeof(int);
// int larger = INT8_MIN;
// for(int i = 0 ; i < n ; i++){
//    if(arr[i]>larger){
//       larger = arr[i];
//    }
   
// }
// cout << larger;
// }






///////REVISION 

// Count the number of digits in a number  

// #include <iostream>
// using namespace std;

// int main() {
//    int count = 0 ;
// int n = 2005 ;
// while(n>0){
//    int l_d = n % 10 ;
//    n = n/10;
//    count++ ;
// }
// cout << count ;
// }



// #include <iostream>
// using namespace std;

// int main() {
// int sum = 0 ;

// int n = 2085 ;
// while(n>0){
// int  l_d = n % 10 ;   
//  n = n/10;
//  sum = sum + l_d ;
// }
// cout << sum ; 


// }

//Second Larger Element in an array 

// #include <iostream>
// using namespace std;
// int main (){
//    int larger = 0 ;
//    int secondlarger = 0;
//    int arr[]= {5,7,6,9,3,3,11,55,34,4};
//    int n = sizeof(arr)/sizeof(int);
//    for(int i = 0 ; i < n ; i++){
//       if(arr[i]>larger){
//          secondlarger = larger ;
//          larger = arr[i];
//       }
//       else if(arr[i] > secondlarger){
//          secondlarger = arr[i];
//       }
//    }
//    cout << secondlarger ; 
// }


// Reverse an array 

// #include <iostream>
// using namespace std;
// int main (){
//    int arr[]= {5,7,6,9,3,3,11,55,34,4};
//    int n = sizeof(arr)/sizeof(int);
//    int i = 0 ;
//    int j = n-1;
//   while ((i<j))
//   {
//    swap(arr[i],arr[j]);
//    i++;
//    j--;
//   }
//   for(int i= 0 ; i < n-1 ; i++){
//    cout << arr[i] << " " ;
//   }

// }



// Reverse an number 

// #include <iostream>
// using namespace std;

// int main() {
//     int number = 62736782;
//     int reverse = 0;

//     while(number > 0) {
//         int last_digit = number % 10;

//         reverse = reverse*10 + last_digit ;

//         number = number / 10;
//     }

//     cout << reverse;
// }



// Remove duplicates 


#include <iostream>
using namespace std;

int main() {
int arr[] = {9,5,5,3,6,2,2,4,4,4};
int n = sizeof(arr)/sizeof(int); 
int i = 0 ; 
for(int j=1 ; j < n ; j++){
    if(arr[i] != arr[j]){
      arr[i+1] = arr[j];
      i++;
    }
      }
     int newsize = i + 1 ;
     for(int i= 0 ; i < newsize ; i++){
   cout << arr[i] << " " ;
  }

}