// set matrix zero problem 
#include <iostream>
#include <vector>
using namespace std;
void set_zero(vector<vector<int>>& matrix){ 
    int a ,b ;
    /* for rows */ for(int i=0 ; i<matrix.size() ; i++){
        /* for columns*/ for(int j =0 ; j<matrix[0].size() ;j++){
                        if(matrix[i][j]==0){
                       a=i ; b=j;
                       }
        }
    }
    // now lets make zeros

}
int main(){
    vector<vector<int>> mine ={ {1 ,2,0} ,{1,2,3} ,{1,2,3}};
    set_zero(mine);
      for(int i=0 ; i<mine.size() ;i++){
        for(int j=0 ; j<mine[0].size() ; j++){
            cout<<mine[i][j];
        }
        cout<<endl;
      }
      return 0;
    
}
