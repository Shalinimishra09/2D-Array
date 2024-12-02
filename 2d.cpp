#include<iostream>
#include<vector>
using namespace std;
// linear search
 bool linearSearch(int matrix[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==key){
                return true;
            }
        }
       
    }
     return false;

 }
//  row sum
 int getMaxSum(int matrix[][3],int rows,int cols){
    int maxRowSum=INT32_MIN;
    for(int i=0;i<cols;i++){
        int rowSumI=0;
        for(int j=0;j<rows;j++){
            rowSumI+=matrix[j][i];
        }
        maxRowSum=max(maxRowSum,rowSumI);
    }
    return  maxRowSum;

 }
//  column sum
 int getMaxSum(int matrix[][3],int rows,int cols){
    int maxColSum=INT32_MIN;
    for(int i=0;i<cols;i++){
        int colSumI=0;
        for(int j=0;j<rows;j++){
            colSumI+=matrix[j][i];
        }
        maxColSum=max(maxColSum,colSumI);
    }
    return  maxColSum;

 }

//  diagonal sum
 int diagonalSum(int matrix[][3],int n)
 {
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=matrix[i][i];
        if(i!=n-i-1)
        sum+=matrix[i][n-i-1];
    }
    return sum;
 }

 int main(){
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // cout<<diagonalSum(arr,3)<<endl;


//  2D vector

    vector<vector<int>>matrix={{1,2,3},{4,5,6,10,11},{7,8,9}};
    //rows=matrix.size();
    // cols=matrix[i].size();
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;



 }
 
