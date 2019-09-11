//C++ program to demo data member access

#include<bits/stdc++.h>
#include "matrixLib.h"
using namespace std;

int main() {
    //Declare object of class Matrix
    Matrix A;
    Matrix B(4,3);

    //accessing data member
    A.dims();
    B.dims();

    return 0;
}
