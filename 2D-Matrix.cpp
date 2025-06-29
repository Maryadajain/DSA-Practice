#include<iostream>
#include<vector>

using namespace std;

/*int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4;
    int cols=3;
    matrix[2][1] = 13;
    //cout<<matrix[2][1]<< endl;

    //loops
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<< matrix[i][j]<< " ";
        }
        cout<<endl; //new row
    }

    return 0;
}*/

int main(){
    int matrix[4][3];
    int rows = 4;
    int cols = 3;

    //input
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>> matrix[i][j];
        }
    }

    //output
    for(int i=0; i< rows; i++){
        for(int j =0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<< endl;
    }

    return 0;
}