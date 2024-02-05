#include "my_mat.h"
#include <stdio.h>

void initializeMatrix(int matrix[10][10]) {
    

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
}



void floydWarshall(int matrix[10][10]) {

    for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if(matrix[i][j]==0) matrix[i][j]=INT_MAX;                
            }
        }
    for (int k = 0; k < 10; ++k) {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if(i==j){matrix[i][j]=INT_MAX;}
                else{
                if (matrix[i][k] != INT_MAX && matrix[k][j] != INT_MAX &&
                    matrix[i][k] + matrix[k][j] < matrix[i][j]) {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
                }

            }
        }
    }
}

/*int isRoute(int matrix[10][10], int i, int j) {
    if(matrix[i][j] != INT_MAX){
        return matrix[i][j];
    }
    else 
        return -1;
}
*/

int shortestRoute(int matrix[10][10], int i, int j) {
    return matrix[i][j];
}