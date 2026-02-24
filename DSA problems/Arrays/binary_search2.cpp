// problem mumber 162 on leetcode
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int arr [] ={30,40,50,5,10,20};
    int n =6;
    int st=0; int end =n-1;int ans =0;
    while(st<end){ int mid =st +(end-st )/2;
        /* if the min number is on the right side*/
        if(arr[mid] > arr[end]){
            st=mid+1;
        }else {
            end=mid;
        }
       
} 
cout<< arr[st];
return 0;
}
