// permutation in string 
#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isEqual(vector<int> nums1 , vector<int> nums2){
    for(int i=0; i<nums1.size() ; i++){
   if(nums1[i] != nums2[i]){
    return false;
    }
    }
    return true;
}

int main (){
    string s1="ab";
    string s2 ="mnbasgh";
    // making a frequency array for s1
    vector<int> freq(26 , 0);
    for(int i=0 ; i<s1.length() ;i++){
        int index= s1[i]-'a';
        freq [index]++;
    }
    //making a window for searching 
    int windowSize =s1.length();
    //searching s2
     for(int i=0 ; i<s2.length() ; i++){
        int windowIdx=0 ; int idx=i;
        vector<int> windowFreq(26 , 0);
        while(windowIdx < windowSize && idx< s2.length()){
             int index=s2[idx]-'a';
             windowFreq[index] ++;
             idx++;windowIdx++;
        }
        if(isEqual(freq , windowFreq) == true){
            cout<<"permutation exxists"; break;
        }
        
     }
     return 0;
}

