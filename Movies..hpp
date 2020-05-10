
#ifndef Movies__hpp
#define Movies__hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class MoviesInfo
{
public:
    
    void printKidesMovies( string theArray[][4], int sRows) ; // function to print KidesMovies array.
    void printPGMovies( string theArray[][4], int sRows); // function to print PGMovies array.
    void printAllMovies( string theArray[][4], int sRows) ; // function to print AllMovies array.
    
};
#endif /* Movies__hpp */
