#include "cMatrix3.h"

/*cMatrix3::cMatrix3()
{
    for(int i=0;i<9;++i) a[i]=1;
}
cMatrix3::cMatrix3(double arga[9])
{
    for(int i=0; i<9;++i) a[i] = arga[i];
}
*/

cMatrix3::~cMatrix3()
{
    //dtor
}

cMatrix3 cMatrix3::add(cMatrix3 arga)
{
    cMatrix3 m;

     // Add the elements of the two matrices and store the result in the new matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
               m.a[i][j] = a[i][j] + arga.a[i][j];
            }
        }
    return m;
}
cMatrix3 cMatrix3::sub(cMatrix3 argb)
{
    cMatrix3 n;

     // Add the elements of the two matrices and store the result in the new matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
               n.a[i][j] = a[i][j] - argb.a[i][j];
            }
        }
    return n;
}

cMatrix3 cMatrix3::scalarmul(double argc)
{
    cMatrix3 p;

     // Add the elements of the two matrices and store the result in the new matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
               p.a[i][j] = a[i][j] + argc;
            }
        }
    return p;
}

void cMatrix3::show()   // Function to print the matrix
{
    cout<<endl;
    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                std::cout << a[i][j] << " ";
            std::cout << std::endl;
        }

}

cMatrix3 cMatrix3::transpose()
{

// Create a new matrix to store the transpose
cMatrix3 t;

// Transpose the matrix
for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
        t.a[i][j] = a[j][i];

    // Return the transpose
    return t;
}


void cMatrix3::setElement(int index, double value)
    {
        // Calculate the row and column indicates from the linear index
        int row = index / 3;
        int col = index % 3;

        // Set the element at the specified row and column
        a[row][col] = value;
    }

 // Function to get an element of the matrix using its linear index
double cMatrix3:: getElement(int index)
    {
        // Calculate the row and column indices from the linear index
        int row = index / 3;
        int col = index % 3;

        // Return the element at the specified row and column
        return a[row][col];
    }

cMatrix3 cMatrix3::prod(cMatrix3 argc);
{// Create a new matrix to store the result
        cMatrix3 pro;

        // Multiply the elements of the two matrices and store the result in the result matrix
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                pro.a[i][j] = a[i][0] * argc.a[0][j] + a[i][1] * argc.a[1][j] + a[i][2] * argc.a[2][j];

        // Return the result matrix
        return pro;
}
