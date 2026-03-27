//string compression problem 
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main (){
    vector <char> s ={'s' ,'s','s' ,'s' ,'x','x' ,'y'};
      int idx=0;
      for(int i=0; i<s.size() ; i++){ char ch=s[i];
        int freq=0;
        while(i<s.size() && s[i] ==ch){
            freq ++; i++;
        }
        if(freq==1){
            s[idx++]=ch;
        }else{
            s[idx++]=ch;
            string str = to_string(freq);
            for(char m : str){
                s[idx++]=m;
            }
        }
        i--;
      }
      s.resize(idx);
      cout<<idx;
      return 0;
  }