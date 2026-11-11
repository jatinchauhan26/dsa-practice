//  Revision 

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



#include <iostream>
using namespace std ;
int arr[] = {4,7,1,8,0,5};
int n = sizeof(arr)/sizeof(int);
int main() {
int smaller = INT8_MAX ;
for(int i = 0 ; i < n ; i++ ){
if(arr[i] < smaller){
smaller = arr[i];
}
}
cout << smaller ;
}
