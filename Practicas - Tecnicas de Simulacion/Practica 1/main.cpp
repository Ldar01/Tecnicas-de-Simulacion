#include <iostream>
#include "math_tools.h"
#include "display_tools.h"


int main(void){

    /*Vector zeroes_vector;
    zeroes(zeroes_vector, 5);
    showVector(zeroes_vector);*/

    /*Matrix zeroes_matrix;
    zeroes(zeroes_matrix, 5);
    showMatrix(zeroes_matrix);*/

    //Probando Tarea
    Matrix matrixA, matrixInvA;

    zeroes(matrixA, 3);
    //zeroes(matrixInvA, 3);

    matrixA.at(0).at(0) = 2; matrixA.at(0).at(1) = 2; matrixA.at(0).at(2) = 3;
    matrixA.at(1).at(0) = 4; matrixA.at(1).at(1) = 5; matrixA.at(1).at(2) = 6;
    matrixA.at(2).at(0) = 7; matrixA.at(2).at(1) = 8; matrixA.at(2).at(2) = 9;

    cout<<"========= Matrix A ============\n";
    showMatrix(matrixA);

    cout<<"========= Matrix Inv A ============\n";
    inverseMatrix(matrixA, matrixInvA);
    showMatrix(matrixInvA);

    return 0;
}