#include <iostream>
using namespace std;
int main(){
 int arr_2d[3][3]={{1 ,2, 3},{4,5,6},{7,8,9}}; 
 int row_number , column_number =-1;
 int target=1;
 for(int i=0 ; i<3 ;i++){
    for(int j=0 ; j<3 ; j++){
        if(arr_2d[i][j]==target){
            row_number=i ; column_number=j;
        }
    }
 }
 cout<<"the row is = "<<row_number<<"  the column is = "<<column_number<<endl;
 return 0;
}