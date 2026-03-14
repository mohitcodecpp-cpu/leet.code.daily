//valid palindrome 
#include <iostream>
#include <vector>
#include <string>
using  namespace std;



int  main (){
    string str = "raceCarzgdgz";
    int st=0 , end = str.length()-1;
    while(st<=end){
        if(!isalnum(str[st])){
            st ++ ;continue;
        }
        if(!isalnum(str[end])){
            end--; continue;
        }
        if(tolower(str[st]) != tolower(str[end])) {
            cout<<"not palindrome";
            break;
        }
        st++; end--;
        
    }

    return 0;
}




