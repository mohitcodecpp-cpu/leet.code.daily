#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible (vector<int> nums , int threshold ,int n , int divisor){
    int sum=0;
 for(int i=0 ; i<n ;i++){
    int add= (nums[i]+divisor -1)/divisor;
    sum+=add;
 }
 if(sum<=threshold) return true;
 else return false;
}
int main(){
    vector<int> nums ={44,22,33,11,1};
    int threshold =5; int  n =nums.size();
    int ans=-1;
   
    //binary search for divisor
    int st=1;
int end =*max_element(nums.begin() , nums.end());
while(st<=end){
    int mid=st+ (end-st)/2;
    //if we want to move to the right
    if(isPossible(nums , threshold , n , mid)==false){
        st=mid+1;}else{ans=mid;
        end=mid-1; 
    }
}
cout<<ans;
return 0;
}

