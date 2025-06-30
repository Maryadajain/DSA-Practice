#include<iostream>
#include<climits>
using namespace std;

bool linearSearch(int mat[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int getMaxRowSum(int mat[][3], int rows, int cols){
    int maxRowSum = INT_MIN;
    for(int i=0; i<rows; i++){
        int rowSumI = 0;
        for(int j=0; j<cols; j++){
            rowSumI += mat[i][j];
        }

        maxRowSum = max(maxRowSum, rowSumI);
    }
    return maxRowSum;

}
int diagonalSum(int mat[][4], int n){ //O(n*n) pd: j=i, sd = j=n-i-1
    int sum = 0;
    for(int i=0; i<n; i++){              //for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){             //sum+= mat[i][i];
            if(i == j){                       //if( i != n-i-1){
                sum += mat[i][j];                  //sum += mat[i][n-i-1];
            } else if (j == n-i-1){             //}
                sum += mat[i][j];         //}
            }
        }
    }
    return sum;
}

int main(){
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = 4;
    //int rows = 3;
    //int cols =3;

    //cout<< linearSearch(matrix, rows, cols, 9)<< endl;
    //cout<< getMaxRowSum(matrix,rows,cols)<< endl;
    cout << diagonalSum(matrix, n)<< endl;
    return 0;
}
