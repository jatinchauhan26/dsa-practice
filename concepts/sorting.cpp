
///////////BUBBLE SORT
// #include<iostream>
// using namespace std;



// void bubblesort(int arr[],int n){


//     for(int i=0;i<n-1;i++){
//       bool isSwap = false;
//         for(int j=0;j<n-i-1;j++){
//           if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             isSwap = true;
//           }
//         }
    
//     if(!isSwap) {
//       return;
//     }
//   }

// }
// int main(){
// int arr[] = {1,2,5,7,9,6,7};
// int n = sizeof(arr)/sizeof(int);
//  bubblesort(arr,n);
//  for(int i=0;i<=n-1;i++){
//     cout<< arr[i] << " ";
//  }
// }




#include<iostream>
using namespace std;

void selectionsort(int arr[],int n ){
  
  for(int i = 0;i<n-1;i++){
    int smallestindex = i;
   for(int j=i+1;j<n;j++){
    if(arr[j]<arr[smallestindex]){
       smallestindex = j;
    }
  
}
   swap(arr[smallestindex],arr[i]);
  }
}
int main(){
  int arr[]= {4,1,5,2,3};
  int n = sizeof(arr)/sizeof(int);
  selectionsort(arr,n);
  for(int i=0;i<n;i++){
  cout<< arr[i] << " ";
  } 
}