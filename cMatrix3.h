#ifndef CMATRIX3_H
#define CMATRIX3_H

#include <iostream>
using namespace std;
// number of raws
#define nR 3
//number of columns
#define nC 3

class cMatrix3
{
    public:
        /** Default constructor */
        cMatrix3(){
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    a[i][j] = 0;
        }
        cMatrix3(double a[nC*nR]);

        /** Default destructor */
        virtual ~cMatrix3();
        cMatrix3 add(cMatrix3 arga);// =this + argc
        cMatrix3 sub(cMatrix3 arga);// =this - argc
        cMatrix3 prod(cMatrix3 arga);// = this . argc

        cMatrix3 scalarmul(double c); // = c x this (c -constant)
        cMatrix3 inverse();
        cMatrix3 transpose(); //  inverse of this

        void show();// display this
        void setElement(int index, double value);   // Function to set an element of the matrix using its linear index
        double getElement(int index);   // Function to get an element of the matrix using its linear index

    private:
        double a[3][3]; // matrix data

};

#endif // CMATRIX3_H
