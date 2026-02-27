#include <iostream>
#include <vector>

using namespace std;
int peakElement (vector<int> nums ){
 int n =nums.size();
 // binary search 
 int st=0; int end =n-1;
   while(st<end){ int mid =st + (end-st)/2;

        //if the element lies in the right side
        if(nums[mid]<nums[mid+1]){st=mid+1;}else{
            end=mid;
        }   
   }
   return st;
}
int main(){
    vector<int> nums ={1,2,4,3,2,1};
    cout<<peakElement(nums);
    return 0;
}

