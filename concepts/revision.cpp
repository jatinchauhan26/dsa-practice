// Max size of an array = 10^6 inside int main()
// Outside int main means globally it will 10^7

// Traversing in  an array 

#include <iostream>
using namespace std;
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

int largerelement(int arr[],int n ){
    
int secondlargest = -1;
int larger = arr[0] ;
for(int i = 0 ; i <= n-1 ; i++){
//  larger = max(larger,arr[i]);


if(arr[i]>larger){
   
    secondlargest = larger;
    larger = arr[i];
}
if(arr[i] > secondlargest && arr[i] < larger){
    secondlargest = arr[i];
}

}
return secondlargest;
}
int main(){

int arr[] = {3,6,11,5,6};
int n = sizeof(arr)/sizeof(int);
cout << largerelement(arr,n);

}
