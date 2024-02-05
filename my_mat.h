

#ifndef MY_MAT_H
#define MY_MAT_H

#include <limits.h>

void initializeMatrix(int matrix[10][10]);
void printMatrix(int matrix[10][10]);
void floydWarshall(int matrix[10][10]);
int isRoute(int matrix[10][10], int i, int j);
int shortestRoute(int matrix[10][10], int i, int j);

#endif // MY_MAT_H

