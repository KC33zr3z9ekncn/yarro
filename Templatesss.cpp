#ifndef ARRAY_H_
#define ARRAY_H_
#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;

template< typename T > 
class array 
{
    private:
	    int size;
	    T *myarray;
    public:
	array (int s) 
    {
        size = s;
        myarray = new T [size];
	}

    void setArray ( int size, T val) 
    {
        myarray[size] = val;
    }

    void getArray () 
    {
        for ( int j = 0; j < size; j++ ) 
        {
            cout << setw( 7 ) << j << setw( 13 ) << myarray[ j ]<< endl;
        }
        cout << "-----------------------------" << endl;
    }

    void resize(int asize)
    {
        T*vitalisarray = new T[asize];
        for (int i = 0; i < asize; i++)
        {
            vitalisarray[i] = myarray[i];
        }
        delete[]myarray;
        size= asize;
        myarray = vitalisarray;
    }    
    
    void getSize() 
    { 
        cout<<"Die größe des Arrays ist:"<<size<<endl; 
    }

   
};

#endif

#include "Array.h"
int main() 
{
    array< int > int_array(10);
    int_array.setArray(0,3);
    int_array.setArray(1,2);
    int_array.getArray();
    int_array.getSize();
    int_array.resize(8);
    int_array.setArray(8,6);
    int_array.getSize();
    int_array.getArray();


    array< float > float_array(3);
    float_array.setArray(0,3.0);
    float_array.setArray(1,2.);
    float_array.getArray();
    float_array.getSize();
    float_array.resize(11);
    float_array.setArray(11,9);
    float_array.getSize();
    float_array.getArray();

    array< char > char_array(5);
    char_array.setArray(0,'H');
    char_array.setArray(1,'E');
    char_array.setArray(2,'L');
    char_array.setArray(3,'L');
    char_array.setArray(4,'O');
    char_array.getArray();
    char_array.getSize();
    char_array.resize(7);
    char_array.setArray(9,7);
    char_array.getSize();
    char_array.getArray();
return 0;
}