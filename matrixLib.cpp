//C++ program to demo data member access

#include<bits/stdc++.h>
#include "matrixLib.h"
using namespace std;

//Default constructor
Matrix::Matrix() { 
    _rows = 0;
    _cols = 0;
}

//Parameterized constructor for dims
Matrix::Matrix(int m, int n) {
    //store row and column dims
    _rows = m;
    _cols = n;

    //size matrix itself
    _matrix.resize(_rows); 
    for (int i = 0; i < _rows; i++)
    {
        _matrix[i].resize(_cols, 0.0);
    }
}

//Destructor
Matrix::~Matrix() {
    
}

//Member functions
void Matrix::dims() {
    cout << "This matrix has " << _rows << " rows and " << _cols << " columns.\n";
}
