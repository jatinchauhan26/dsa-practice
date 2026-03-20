#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> arr,int target){
 int st=0, end = arr.size()-1;
 while(st<=end){
   int mid = (st+end)/2;
 if(arr[mid]<target){
   st=mid+1; 
 }
 else if(arr[mid]>target){
    end = mid-1;
 }
 else{
    return mid;
 }
 }
 return -1;
}
 int main() {
int target ;

cout << "enter target" ;
cin >> target ;
vector<int> arr = {-1,0,3,4,5,9,12};
int index = binarysearch(arr,target);
// cout<< binarysearch(arr,target);
if(index != -1){
    cout<< target << " found at index " << index ;
}
else{
    cout<< "element not found";
}


}