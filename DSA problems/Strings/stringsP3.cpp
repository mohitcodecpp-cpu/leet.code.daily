// # reverse words in strings
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main (){
    string s ="the pen";
    int n =s.length();
    reverse(s.begin() , s.end());
    string ans ="";
    //picking up all the words
    for(int i=0 ; i<n ; i++){
       string word="";
       while(i<n && s[i] != ' '){
        word+=s[i];
        i++;
       }

       // reversing that individual word
       reverse(word.begin() , word.end());
       if(word.length() >0){
        ans+=' ' +word ;
       }
    }
    cout<<ans.substr(1);
    return 0;
}
