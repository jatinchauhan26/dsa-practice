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


#include <iostream>
using namespace std;

long long n = 3248957239;

int main(){
    while(n > 0){
        int ld = n % 10;

        if(ld % 2 == 0){
            cout << ld << " ";
        }

        n = n / 10;
    }
}
