#include <iostream>
#include <vector>
#include <string>
using  namespace std;
int  main (){
    string s ="daabcbaabcbc";
    string part ="abc";
while(s.find(part) != string::npos){
    int st=s.find(part);
   string out= s.erase(st , part.length());}
cout<<s;
return 0;
   
}




