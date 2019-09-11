//C++ program to demo data member access

#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <istream>
#include <utility>

using namespace std;

class Matrix
{
    /*
    Private Members
    */
    vector<vector<double> > _matrix; //matrix
    int _rows; //row dims
    int _cols; //column dims
    //iterator _begin;
    //iterator _end;

    public:
    /*
    Constructors
    */
    Matrix();               //Default constructor (2x2 matrix with id 1)
    Matrix(int, int);       //Parameterized constructor for dims
    ~Matrix();

    /*
    Standard Operations
    */
    void dims();

};
