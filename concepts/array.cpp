// #include <iostream>
// using namespace std;
// int main (){
  
//     int marks[5] = {99,67,88,94,32} ;
//     double price[] = {23.32,24.45,32.32};
//     cout << marks[0]<<endl;
//     cout << marks[7]<<endl ;
//     return 0;
// }



////////LOOPS ON ARRAYS 
// #include<iostream>
// using namespace std;

// int main() {
// int size = 5;
// int marks[size];
// for (int i = 0;i<size;i++){
//     cin >> marks[i] ;
// }
// for (int i = 0;i<size;i++){
//     cout << marks[i] << endl;
// }
// return 0;
// }
    


/////FIND SMALLEST|LONGEST IN ARRAY

// #include<iostream>
// using namespace std ;
 
// int main()   {
//  int nums[] = {56,24,43,32,67,91,78};
// int  size = sizeof(nums)/sizeof(int);//
// int smallest = INT8_MAX;
// int largest = INT8_MIN;
// int sum = 0;
// for(int i=0;i<size;i++){
//     // if(nums[i] < smallest){
//     //     smallest = nums[i]; 
//     // }
//     smallest = min(nums[i],smallest);
// }
//     for(int i=0;i<size;i++){
//         if(nums[i] > largest ){
//             largest = nums[i]; 
//         }
//         }
//     for(int i = 0;i<size ; i++){
//         sum = sum + nums[i];
//     }
//         cout<<"smallest is " << smallest << endl;
//         cout<< "largest is " <<  largest << endl;
//          cout<< "sum is " << sum<< endl;
//  return 0;
 
// }




// /////LINEAR SEARCH THE ELEMENT IN THE ARRAY
 
// #include <iostream>
// using namespace std;

// int linearsearch(int element){
 
//    int nums[] = {34,22,45,68,95,67,42};
//    int size = sizeof(nums)/sizeof(int);
//     for(int i = 0;i<size;i++){
//        if(nums[i]==element){
//     return i;
//      }   
//     }
//     return -1;
// }
// int main(){
//  int index = linearsearch(222);
//  if (index != -1){
//  cout<<"element found at index" << index;
//  }
//  else{
//     cout << "element not found";
//  }
// }



//////////////////REVERSE AN ARRAY
// #include<iostream>
// using namespace std;
// void reversedarr(int arr[],int size){
// // int arr[] = {1,2,3,4,5};
// int start = 0;

// int end = size-1;
// while (start < end){
//    swap(arr[start],arr[end]);

//    start++;
//    end--;  
// }
// }
// int main (){
// int arr[] = {1,3,5,7,9};
// int size = sizeof(arr)/sizeof(int);
//  reversedarr(arr,size);
//  for(int i = 0;i<size;i++){
//    cout<< arr[i] << " ";
//  }


// return 0 ;

// }



/////////SUM/PRODUCT  OF ELEMENTS OF ARRAY
// #include <iostream>
// using namespace std;
// int sumofnumbers(int arr[],int size){

//   int sum = 0;
//   for(int i =0;i< size; i++){
//   sum = sum + arr[i];
//   }
// return sum;
// }
// int productofnumbers(int arr[],int size){

//   int product = 1;
//   for(int i =0;i< size; i++){
//   product = product * arr[i];
//   }
// return product;
// }
// int main(){
// int arr[] = {4,3,6};
// int size = sizeof(arr)/sizeof(int);
// cout << sumofnumbers(arr,size)<< endl;
// cout << productofnumbers(arr, size)<< endl;
// return 0 ;

// }



// ////////SWAP THE MAX AND MIN OF AN ARRAY 

// #include <iostream>
// #include <climits>

// using namespace std;

// int minnumber(int nums[],int size){
// int minimum = INT_MAX;
// for (int i = 0;i< size;i++){
//  minimum = min(minimum,nums[i]);
// }
// return minimum;
// }
// int maxnumber(int nums[],int size) {
// int maximum = INT_MIN;
// for (int i = 0;i< size;i++){
//  maximum = max(maximum,nums[i]);
// }
// return maximum ;
// }
   

// int main (){
// int nums[] = {4,45,2,1,11,7,9,8};
// int size = sizeof(nums)/sizeof(int);
//  int minimum = minnumber(nums,size);
// int maximum = maxnumber(nums,size);

// int minindex , maxindex;
// for(int i=0;i<size;i++){
//    if(nums[i]==minimum){
//     minindex= i;
//    }
//     if(nums[i]==maximum){
//     maxindex = i;
//    }
//   }
//    swap(nums[minindex],nums[maxindex]);
//    for(int i=0;i<size;i++){
//       cout<< nums[i] <<" ";
   
// }

// }


//////////UNIQUE ELEMENTS OF AN ARRAY 


// #include<iostream>
// using namespace std;

// int uniqueelement(int arr[],int size ){

// for (int i=0;i<size;i++){
//    for(int j=0;j<size;j++){
//      if(i==j){
//         int    result = arr[i] ;
//       }
//       else{
//        int result = arr[i];
//       }
//    }

// }
// int main(){
 



// }

// #include <iostream>
// using namespace std;

// int main() {
//     int nums[] = {4,1,3,2,1,2};
//     int size = sizeof(nums)/sizeof(int);

//     int ans = 0;
//     for(int i = 0; i < size; i++) {
//         ans ^= nums[i];
//     }

//     cout << ans;
// } 




////////UNIQUE ELEMENT IN AN ARRAY

// #include<iostream>
// using namespace std;
// int main(){
//   int nums[] = {1,4,6,6,5,7,6,8};
//   int size = sizeof(nums)/sizeof(int);
//   for(int i=0;i<size;i++){
//   int count = 0;
//    for(int j=0;j<size;j++){
//     if(nums[i]==nums[j]){
//       count++;
//     }}
//     if(count==1){
//       cout << nums[i] << " ";
//     }
//    }
//  }




//////// Vectors 


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){

//     // vector<int> vec = {1,2,3};
//     // vector<int> vec(5,0);
//    vector<char> vec = {'a','b','c','d','e','f'};


//    vec.push_back('k');
//    vec.pop_back();
//    cout<< vec.front()<< endl ;
// //    for (char val: vec){
// //         cout << val << endl; 
// //     }
// //     // cout<< vec[0];
// //     cout << "size" << vec.size() << endl ;
//     return 0 ;

// }



/////////////////TWO PAIR SUM 

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector <int> nums , int target){
//     vector<int> ans;
//     int n = nums.size();

//     for(int i=0;i<n;i++){
//       for(int j = i+1;j<n;j++){
//         if(nums[i]+nums[j]==target){
//          ans.push_back(i);
//          ans.push_back(j);
//         return ans;
        
//         }
//       }
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums = {2,7,11,15};
//     int target = 13;

//    vector <int>ans = pairSum(nums,target);
//     cout << ans[0] << " ," << ans[1] << endl ;
//     return 0;
// }


////////BUY AND SELL MY THINKING SOLUTION LONG NOT SUITABLE BUT WORK
// #include<iostream>
// #include<climits>
// using namespace std;

// int maxprofit(int nums[],int n){

// int minimum = INT_MAX;
// int minindex = 0;
// for(int i=0;i<n;i++){
//   if(nums[i]<minimum){
//    minimum = nums[i];
//    minindex = i; 
//   }

// }


// int maximum = INT_MIN;
// int maximum_profit = 0;
//  for (int i= minindex+1;i<n;i++){
//   maximum  = max(maximum,nums[i]);

//  }
//    maximum_profit = maximum-minimum;
//  return maximum_profit;
// }
// int main(){
// int nums[] = {7,11,5,1,3,4};  
// int n = sizeof(nums)/sizeof(int);

//  cout <<  maxprofit(nums,n);
//  return 0;
// }








