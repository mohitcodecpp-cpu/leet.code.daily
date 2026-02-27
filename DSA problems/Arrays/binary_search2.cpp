// problem mumber 162 on leetcode
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int peakElement(vector<int> nums){
    int n=nums.size();
    //binary search
    int st=0; int end=n-1;
    while(st<end){ int mid =st + (end -st)/2;

        //if the element is on the right side
        if(nums[mid]<nums[mid+1]){st=mid+1;
        } /*means on the left side */else{end=mid;}
    }
    return st;
}
int main (){
    vector<int> nums ={1,2,3,78,8,2};
   cout<< "peak element is on the index   " << peakElement(nums)<<" ";
   return 0;
}