
/////////FUNCTION CALL
// #include <iostream>
// using namespace std;
// int calling()
// {
//     cout<< "hi";
//     // int a = 6;
//     // int b = 4;
//     // cout<< a+b;
//     return 9;
// }
// int main()
// {

//   cout << calling();
// cout <<" \n i";

//  return 0;
// } 




///////////////MULTIPLICATION OF NUMBERS
// #include <iostream>
// using namespace std;
// int multiply(int a , int b){
//     int answer = a*b;
//     return answer;
// }

// int main(){
//     cout<< multiply(5,6);
//     cout << multiply(7,8)+10  ;
    
// }

//////////MINIMUM NUMBER
// #include <iostream>
// using namespace std;
// string min (int a , int b )
//  {
//     if (a<b){
//         return " a is minimum";
//     }
//     else if(a>b) {
//         return "b is minimum ";
//     }
//     else{
//         return "a and b is equal" ;
//     }
//  }

//  int main (){
//   cout <<   min(7,9.7);
//   cout << min(4,33);
//   cout << min (9,9);
//   return 0;
//  }

///////SUM UPTO N NUMBERS 
// #include <iostream>
// using namespace std ;
// int sum(int n ){
//    int  result  = 0;
//     for ( int i = 0;i<=n;i++){
//    result  = result + i;      
//     }
//  return result;
// }
// int main(){
//     cout << sum(4);
//      cout << "\n" << sum(20);
//      int value = sum (4);
//      cout << value +4;
// }


///////FACT OF NUMBERS
// #include <iostream>
// using namespace std ;
// int fact(int n ){
//    int  result  = 1;
//     for ( int i = 1;i<=n;i++){
//    result  *= i;      
//     }
//  return result;
// }
// int main(){
//     cout << fact(4);
//      cout << "\n" << fact(20);
//      int value = fact(4);
//      cout << value +4;
// }


/////////////////SUM OF DIGITS OF A NUMBER
// #include<iostream>
// using namespace std;
//  int Sumofdig(int num){
//     int digSum = 0; 
//    while(num>0){   
//     int last_dig = num % 10;
//     num /= 10;
//       digSum += last_dig;
// }
//   return digSum;
//  } 
//  int main(){
//  cout<< Sumofdig(7985)<<endl;
//  }


/////////////////// Combination formula
// #include <iostream>
// using namespace std ;
// int factorial(int n){
//   int fact = 1;
//   for (int i=1;i<=n;i++){
//    fact = fact*i;
// }
//    return fact;
// }
// int nCr(int n,int r){
//   int fact_n = factorial(n);
//   int fact_r = factorial(r);
//   int fact_nmr = factorial(n-r);
//     return fact_n / (fact_r*fact_nmr);
// }

// int main() {
// int n = 8 , r =2;
// cout << nCr(n,r); 

// }


/////SHORT WAY 
// #include <iostream>
// using namespace std;

// int factorial(int n){
//     int f = 1;
//     for(int i = 1; i <= n; i++)
//         f *= i;
//     return f;
// }

// int main(){
//     int n = 8, r = 2;

//     cout << factorial(n) / (factorial(r) * factorial(n - r));

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int fact(int n){
//   int   factorial = 1;
//     for(int i = 1;i<=n;i++)
// {
// factorial = factorial * i;
// }
// return factoria l;
// }

// int main(){
//     cout << fact(5); 
// }



//////////////CONVERSION OF DECIMAL NO. TO BINARY 
// #include <iostream>
// using namespace std;

// int convertdectobin(int decnum){
//   int ans = 0 ;
//   int pow = 1;
//   while(decnum>0){
//   int rem = decnum% 2;
//   decnum = decnum/2;
//   ans = ans + (rem*pow);
//    pow = pow*10; 
//   }
//   return ans;
// }
// int main (){
//   int decnum = 10;
// for (int i=1;i<=decnum;i++){
// int  value = convertdectobin(i);
//  cout<< value << endl;
// }
// }



//////////////CONVERSION OF BINARY TO DECIMAL NO.

// #include <iostream>
// using namespace std ;

// int binarytodec(int binarynum){
//   int ans = 0,pow = 1;
//   while(binarynum>0){   
//   int rem = binarynum %10;
//   binarynum = binarynum/10;
//   ans += (rem*pow);
//   pow *= 2; 
//   }
//   return ans;
// }
// int main() {
//   // int binarynum = 101;
//   cout << binarytodec(101010);
//   // return 0;
// }


/////////////DATA TYPE MODIFIERS

#include <iostream>
using namespace std;
int main(){

cout<< sizeof(int) <<endl;
cout<< sizeof(short)<<endl;
cout<< sizeof(short int)<<endl;
cout<< sizeof(long)<<endl;
cout<< sizeof(long int)<<endl;
cout<< sizeof(long long int)<<endl;
cout<< sizeof(signed)<<endl;
cout<< sizeof(unsigned)<<endl;
return 0;
}