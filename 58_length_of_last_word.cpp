    #include <iostream>
    #include <string>
    using namespace std;
    int lengthOfLastWord(string s) {
     int n = s.length();
     string previous_str = "";
     int i = n-1;
    while(i>=0 && s[i] == ' '){
    i--;
    }
    while(i>=0  && s[i] != ' '){
        previous_str += s[i]; 
        i--;
    }
    return previous_str.length() ;
    }
    int main (){

   string s = "Hello world";
   cout << lengthOfLastWord(s);

    }

