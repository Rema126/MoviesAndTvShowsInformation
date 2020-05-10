
#ifndef Tv_Shows__hpp
#define Tv_Shows__hpp

#include <stdio.h>
#include <string>
using namespace std ;

class TVShowInfo
{
public:
    
    void printKidesTV ( string theArray[][4], int sRows); // function to print KidesTV array.
    void printPGTV ( string theArray[][4], int sRows); // function to print PGTV array.
    void printAdultTV ( string theArray[][4], int sRows); // function to print AdultTV array.
};
#endif /* Tv_Shows__hpp */
