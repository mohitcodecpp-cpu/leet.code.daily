#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isValid(vector<int> piles , int n , int h , int minSpeed){
   int hoursTaken = 0;
   for(int i=0; i<n ; i++){ int sH=0;
    sH = (piles[i] + minSpeed -1)/minSpeed;
    hoursTaken+=sH;
   }
   if(hoursTaken <= h) return true;
   return false;
    
}
int main (){
vector<int> piles ={30,11,23,4,20};
/* numbers of piles =>*/ int n = piles.size();
/*maximum hours for eating banana =>*/ int h =5;

 sort(piles.begin() , piles.end());
/* binary seach */
int st=1;
int end =piles[n-1];
int ans=-1;
while(st<=end){
    int mid = st +(end-st)/2;
    if(isValid(piles , n , h , mid) == true){
        ans =mid; end =mid-1;
    }else{
        st=mid+1;
    }
}
cout<<ans;
return 0;
}

