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

    void setArray ( int elem, T val) 
    {
        myarray[elem] = val;
    }

    void getArray () 
    {
        for ( int j = 0; j < size; j++ ) 
        {
            cout << setw( 7 ) << j << setw( 13 ) << myarray[ j ]<< endl;
        }
        cout << "-----------------------------" << endl;
    }
};

#endif