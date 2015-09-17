/*****************************************************************************
* Filename: miniVector.cpp
* 
* Description: 
*	
* This program will stor in miniVector v a list of 15 random integers from
* 0 to 99, then it will output the vector, sort the vector, then output it
* again sorted.
*
*
* Author: Aaron P. Clark
* Email: aaron.clark@park.edu
* Date: 6/20/2014
* Last Change: 6/22/2014 
******************************************************************************/

#include <iostream>
#include "d_random.h"
#include "d_vector.h"

// Output miniVector v
template <typename T>
void writeMiniVector(const miniVector<T>& v)
{
    for (int i=0; i < v.size(); i++ )
	{
        cout << v[i] << " " ;
    }     
};
         
// Use insertion sort to place miniVector v in descending order
template <typename T>
void sortMiniVector(miniVector<T>& v)
{
        //Insertion sort on P.204
		int i, j, key, numLength = v.size( );
        for(j = 1; j < numLength; j++)  
        {
            key = v[j];
            for(i = j - 1; (i >= 0) && (v[i] < key); i--)  
            {
                v[i+1] = v[i];
            }
            v[i+1] = key;    
        }
        return;  
};

int main(int argc, const char * argv[])
{
    int i;
    miniVector<int> v;
    randomNumber rnd;
    /*
    for (i=0; i <15; i++)
    {
		v.push_back(rnd.random(100));
    } */
	v.push_back(5);

	for (i = 1; i<=4; i++)
    {
		v.push_back(2*v[i-1]);
    }
    
	int x = 20, y =5, *px = &x, *py;
	int a[] = {2, 4, 8, 1, 5, 3}, *pa = a;
	pa++;
	cout << *++pa;

	cout << "Original: ";
	writeMiniVector(v);
    sortMiniVector(v);
    
	cout << "\nSorted  : ";
	writeMiniVector(v);
    
	cout << "\n";
	system("PAUSE");
     
    return 0;
}