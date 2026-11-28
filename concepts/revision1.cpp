//  Revision 

// Even / odd
// #include <iostream>
// using namespace std ;

// int n = 5;
// int main(){
// for(int  i = 0 ; i < n ; i++){
//  if(i%2 != 0){
//     cout << "no. is odd number" << "\n";
//  }
//  else {
//     cout << "even" << "\n";
 
// }
// }

// }



// smallerrrrrr
// #include <iostream>
// using namespace std ;
// int arr[] = {4,7,1,8,0,5};
// int n = sizeof(arr)/sizeof(int);
// int main() {
// int smaller = INT8_MAX ;
// for(int i = 0 ; i < n ; i++ ){
// if(arr[i] < smaller){
// smaller = arr[i];
// }
// }
// cout << smaller ;
// }



// //bigger 
// #include<iostream>
// using namespace std ;
// int arr[] = {3,8,11,15,4,2};
// int larger = 0;
// int n = sizeof(arr)/sizeof(int);
// int main(){
// for(int i = 0 ; i < n ; i++) {
//     if(arr[i]>larger){
//         larger = arr[i];
//     }
// }
// cout << larger;
// }

//second smaller 

// #include <iostream>
// using namespace std ;
// int arr[] = {5,8,11,15,4,2};
// int smaller = INT8_MAX;
// int second_smaller = 0;
// int n = sizeof(arr)/sizeof(int);
// int main (){
// for(int i = 0 ; i < n ;  i++ ){
//     if(arr[i]<smaller){
//     second_smaller = smaller;
//     smaller = arr[i];
// }
// else if (arr[i] < second_smaller &&  arr[i] != smaller ){
//     second_smaller = arr[i];
// }
// }
// cout << second_smaller;
// }


// Second larger 

// #include <iostream>
// using namespace std ;
// int arr[] = {5,8,11,15,4,2};
// int larger = 0;
// int second_larger = 0;
// int n = sizeof(arr)/sizeof(int);
// int main (){
// for(int i = 0 ; i < n ;  i++ ){
//     if(arr[i]>larger){
//     second_larger = larger;
//     larger = arr[i];
// }
// else if (arr[i] > second_larger &&  arr[i] != larger ){
//     second_larger = arr[i];
// }
// }
// cout << second_larger;
// }



//Even odd
// #include <iostream>
// using namespace std ;
// int n ;
// int main(){
// cout << "enter any number" << " ";
// cin >> n ;
// if(n%2 != 0){
//     cout << "number is odd";
// }
// else {
//     cout << "number is even";
// }
// }


//Count digits 
// #include <iostream>
// using namespace std ;
// int n = 67298332 ;

// int main(){
//     int count = 0 ;
// while(n>0){
// n = n/10;
// count= count +1 ;

// }
// cout << count ;
// }


//sum of digits
// #include <iostream>
// using namespace std ;
// long long n = 3248957239;

// int main(){
// int sum = 0 ;
// while(n>0){
// int ld = n%10;
// sum += ld;
// n=n/10;
// }
// cout << sum;
// }


//Write a C++ program to count how many even digits are present in a number. 

// #include <iostream>
// using namespace std ;
// long long n = 3248957239;
// int main(){
//     int count = 0;
// while(n>0){
//     int ld = n % 10 ;
//     if(ld%2 == 0){
//         count = count+1;
//     }
//     n=n/10;
// }
// cout<< count; 
// }



//Print even digits ::
// #include <iostream>
// using namespace std;

// long long n = 3248957239;

// int main(){
//     while(n > 0){
//         int ld = n % 10;

//         if(ld % 2 == 0){
//             cout << ld << " ";
//         }

//         n = n / 10;
//     }
// }


//Products of digits 

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 545;
//     int mul = 1;
//     while(n>0){
//         int ld = n%10;
//         mul *= ld;
//         n = n/10;
//     }
//     cout << mul;
// }

//Reverse the number 
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5452342;
//     int rev = 0;
//     while(n>0){
//         int rem = n%10;
//          n = n/10;
//         rev = rev*10 + rem ;
     
//     }
//     cout << rev;
// }


//Palindrome number
// #include <iostream>
// using namespace std;
// int rev = 0;
// int palindrome(int n){
    
//     while(n>0){
//         int rem = n%10;
//          n = n/10;
//          rev = rev*10+rem;
//     }
//     return rev;
// }
// int main(){
//     int n = 3456543;
//     int v = palindrome(n);
//     if(v==n){
//        cout << "no. is palindrome";
//     }
//     else {
//         cout << "no. is not palindrome";
//     }
// }



//smallest digit in a number
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 798254;
//     int smallest = INT_FAST8_MAX;
//     while(n>0){
//         int ld = n%10;
//         if(ld<smallest){
//             smallest = ld;
//         }
//         n = n/10;
//     }
//     cout << smallest;
// }


//armstrong


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     int n = 153;
//     int temp = n;
//     int original = n;
//     int sum = 0;
//     int count = 0;

//     while(temp>0){
//         temp = temp/10;
//         count++;
//     }
//     while(n>0){
//         int ld = n%10;
//         sum += round(pow(ld,count));
//         n = n/10;
//     }
//    if(sum == original) {
//     cout << " no. is armstrong number";
//    }
//    else {
//     cout << "not armstrong";
//    }
// }


// #include <iostream>
// using namespace std;
// int main () {
//     int n = 145;
    
//     int original = n;
//     int sum = 0;
//     while(n>0){
//         int fact = 1;     //because calculating for each digit factorial
//         int ld = n % 10;
//         for(int i = 1 ; i <= ld ; i++){
//             fact *= i;
//         }
//         sum += fact;
//         n = n/10;
//     }
//     if(sum == original ){
//         cout << "no. is strong no.";
//     }
//     else {
//         cout << "not strong no.";
//     }
// }



///Count the digits that divides a number

// class Solution {
// public:
//     int countDigits(int num) {
//         int original = num;
//          int count = 0;
//         while(num>0){
//            int ld = num%10;
//            if(ld!= 0 && original % ld == 0){
//               count ++;
//            }
//            num = num/10;
//         }
//         return count ;
//     }
// };



// 1342. Number of Steps to Reduce a Number to Zero
// class Solution {
// public:
//     int numberOfSteps(int num) {
//       int steps = 0;
//       while(num>0){
//       if(num%2 == 0){
//         num = num/2;
//         steps++;
//       }
//       else {
//         num = num - 1;
//         steps++;
//       }}
//       return steps;
//     }
// };






#include<iostream>
using namespace std;
int main(){
 int n = 129;
 int original = n;
 int rev = 0;
 while(n>0){
   int  ld = n%10;
   rev = rev*10 + ld;
   n = n / 10;
 }
 if(rev == original){
 cout << "no. is palindrome ";
 }
 else {
    cout << "no is not palindrome";
 }
}