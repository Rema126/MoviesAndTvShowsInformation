
#include "Movies..hpp"
#include <iostream>
#include <iomanip>
using namespace std;

//MoviesInfo::MoviesInfo()

void MoviesInfo::printAllMovies ( string theArray[][4], int sRows){
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
void MoviesInfo::printKidesMovies ( string theArray[][4], int sRows){
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
void MoviesInfo::printPGMovies ( string theArray[][4], int sRows){
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
