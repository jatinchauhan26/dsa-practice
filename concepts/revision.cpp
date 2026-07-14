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

#include <iostream>
using namespace std;

int sortedarray(int arr[],int n ){
    for(int i = 1 ; i <= n-1 ; i++){
        if(arr[i-1] <= arr[i]){
            
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){

    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    cout << sortedarray(arr,n);
}
