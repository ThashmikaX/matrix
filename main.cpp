#include <iostream>
#include "cMatrix3.h"

using namespace std;
int a,b,c =0;
double a1[9];
double a2[9];

void menu1()
{
    cout<< "1- One matrix" <<endl;
    cout<< "2- Two Matrices" <<endl;
    cout<< "3- Quit" <<endl;

    cin >> a;
}

void menu2()
{
    cout<< "4- Addition" <<endl;
    cout<< "5- Subtraction" <<endl;
    cout<< "6- Scalar multiplication" <<endl;
    cout<< "7- Multiplication" <<endl;
    cout<< "8- Quit " <<endl;
    cin >> c;
}

void menu3()
{
    cout<< "9-  Transpose" <<endl;
    cout<< "10- Rank" <<endl;
    cout<< "11- Adjoint" <<endl;
    cout<< "12- Inverse" <<endl;
    cout<< "13- quit " <<endl;
    cin >> b;
}

/*
int main()
{
    cout<<"PROGRAM FOR 3X3 MATRIX OPERATIONS"<<endl;
    cout<<"_________________________________"<<endl;
    cout<<"How many matrices do you want to declare?"<<endl;
    bool quit = false;


    cMatrix3 m1, m2;
    cMatrix3 m3, m4, m5, m6;

    double  q =4.5;
    do
    {
        menu1();
        switch(a)
        {
        case 1:
            cout<<"Declare one matrix selected"<<endl;
            cout<<"..........................."<<endl;
            cout<<"Please input 9 elements of your matrix in order"<<endl;
            cMatrix3 mat;
            for (int i = 0; i < 9; i++)
                {
                    double value;
                    std::cin >> value;
                    mat.setElement(i, value);
                }
            menu3();
            do{
                switch(b)
                {
                    case 9:
                        cout<< "You choosed transpose option"<<endl;
                        m6 = mat.transpose();
                        m6.show();
                        break;
                    case 10:
                        cout<< "You choosed rank option"<<endl;
                        break;
                    case 11:
                        cout<< "You choosed adjoint option"<<endl;
                        break;
                    case 12:
                        cout<< "You choosed inverse option"<<endl;
                        break;
                    case 13:
                        cout<< "Program is closing..."<<endl;
                        quit = true;
                        break;

                    default:
                        cout<<"Wrong Selection"<<endl;
                        break;
                }
            }while(!quit);

            break;

        case 2:
            cout<<"Declare two matrices selected"<<endl;
            cout<<"..........................."<<endl;
            cout<<"Please input 9 elements of your first matrix in order"<<endl;
            for(int i=0; i<9; i++)
            {
                cout<<"Enter element "<< i+1<<"- "; cin>> m1.a1[i];
            }
            cout<<"Please input 9 elements of your second matrix in order"<<endl;
            for(int j=0; j<9; j++)
            {
                cout<<"Enter element "<< j+1<<"- "; cin>> m2.a2[j];
            }
            cout<< "Select the below matrix operation you want"<<endl;
                do
                {
                menu2();
                switch(c)
                {
                    case 4:
                        cout<<"Addition Selected"<<endl;
                        m3 = m1.add(m2);
                        m3.show();
                        break;

                    case 5:
                        cout<<"Substraction Selected"<<endl;
                        m5 = m1.sub(m2);
                        m5.show();
                        break;

                    case 6:
                        cout<<"Scalar multiplication Selected"<<endl;
                        m4 = m3.scalarmul(q);
                        m4.show();
                        break;

                    case 7:
                        cout<<"Multiplication Selected"<<endl;
                        m4 = m3.scalarmul(q);
                        m4.show();
                        break;

                    case 8:
                        cout<< "Program is closing..."<<endl;
                        quit = true;
                        break;

                    default:
                        cout<<"Wrong Selection"<<endl;
                        break;
                }

                }
                while(!quit);
                break;

        case 3:
            cout<< "Program is closing..."<<endl;
            quit = true;
            break;

        default:
            cout<<"Wrong Selection"<<endl;
            break;
        }
    }
    while(!quit);
    return 0;
}

*/

int main()
{
    cout<<"PROGRAM FOR 3X3 MATRIX OPERATIONS"<<endl;
    cout<<"_________________________________"<<endl;
    cout<<"How many matrices do you want to declare?"<<endl;
    bool quit = false;

    cMatrix3 m1, m2;
    cMatrix3 m3, m4, m5, m6;

    double  q =4.5;
    do
    {
        menu1();
        switch(a)
        {
        case 1:
            {
                cout<<"Declare one matrix selected"<<endl;
            cout<<"..........................."<<endl;
            cout<<"Please input 9 elements of your matrix in order"<<endl;
            cMatrix3 mat;
            for (int i = 0; i < 9; i++)
            {
                double value;
                std::cin >> value;
                mat.setElement(i, value);
            }
            menu3();
            do{
                switch(b)
                {
                    case 9:
                        cout<< "You choosed transpose option"<<endl;
                        m6 = mat.transpose();
                        m6.show();
                        break;
                    case 10:
                        cout<< "You choosed rank option"<<endl;
                        break;
                    case 11:
                        cout<< "You choosed adjoint option"<<endl;
                        break;
                    case 12:
                        cout<< "You choosed inverse option"<<endl;
                        break;
                    case 13:
                        cout<< "Program is closing..."<<endl;
                        quit = true;
                        break;

                    default:
                        cout<<"Wrong Selection"<<endl;
                        break;
                }
            }while(!quit);

            break;
            }


        case 2:
            {
            cout<<"Declare two matrices selected"<<endl;
            cout<<"..........................."<<endl;
            cout<<"Please input 9 elements of your first matrix in order"<<endl;
            for(int i=0; i<9; i++)
            {
                cout<<"Enter element "<< i+1<<"- "; cin>> m1.a1[i];
            }
            cout<<"Please input 9 elements of your second matrix in order"<<endl;
            for(int j=0; j<9; j++)
            {
                cout<<"Enter element "<< j+1<<"- "; cin>> m2.a2[j];

            cout<< "Select the below matrix operation you want"<<endl;
            do
            {
                menu2();
                switch(c)
                {
                    case 4:
                        cout<<"Addition Selected"<<endl;
                        m3 = m1.add(m2);
                        m3.show();
                        break;

                    case 5:
                        cout<<"Substraction Selected"<<endl;
                        m5 = m1.sub(m2);
                        m5.show();
                        break;

                    case 6:
                        cout<<"Scalar multiplication Selected"<<endl;
                        m4 = m1.scalarmul(q);
                        m4.show();
                        break;

                    case 7:
                        cout<<"Multiplication Selected"<<endl;
                        m5 = m1.mul(m2);
                        m5.show();
                        break;

                    case 8:
                        cout<<"Program is closing..."<<endl;
                        quit = true;
                        break;

                    default:
                        cout<<"Wrong Selection"<<endl;
                        break;
                }
            }while(!quit);

            break;
            }

        case 3:{
            cout<<"Program is closing..."<<endl;
            quit = true;
            break;
        }

        default:
            cout<<"Wrong Selection"<<endl;
            break;
        }
    }while(!quit);
    return 0;
}















