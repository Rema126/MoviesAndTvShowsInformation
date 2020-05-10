
#include "Tv Shows..hpp"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

// Function to print Kids TV shows
void TVShowInfo::printKidesTV ( string theArray[][4], int sRows){
    for ( int i =0 ; i<sRows ; i++){
        cout<<setw(0);
        for (int j = 0 ; j<4 ; j++ ){
            cout<<setw(10);
            cout<<  theArray[i][j] << "    ";
        }
        cout<<endl;
    }
    cout<<endl;
}

// Function to print PG TV shows
void TVShowInfo::printPGTV ( string theArray[][4], int sRows){
    for ( int i =0 ; i<sRows ; i++){
        cout<<setw(0);
        for (int j = 0 ; j<4 ; j++ ){
            cout<<setw(10);
            cout<<  theArray[i][j] << "    ";
        }
        cout<<endl;
    }
    cout<<endl;
}

// Function to print +18 TV shows
void TVShowInfo::printAdultTV ( string theArray[][4], int sRows){
    for ( int i =0 ; i<sRows ; i++){
        cout<<setw(0);
        for (int j = 0 ; j<4 ; j++ ){
            cout<<setw(10);
            cout<<  theArray[i][j] << "    ";
        }
        cout<<endl;
    }
    cout<<endl;
}
