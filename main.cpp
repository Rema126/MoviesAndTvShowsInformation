// Movies/TV shows Website Project .
// made by : Rema Alsmail[362207218] , Ghadir Aljafen[362207717] , Asma Alrashed[352207737]

#include <iostream>
#include <string>
#include "Tv Shows..hpp"
#include "Information..hpp"
#include "Movies..hpp"

using namespace std ;


int main () {
    
    char sign;
    cout << "------------------------------------- \n" ;
    cout << "     Welcome to our  website.     \n" ;
    cout << "------------------------------------- \n" <<endl;
    
    cout <<"To sign in press 1 , To sign up press 2 , As a visitor press any key : " << endl;
    cin>> sign;
    switch (sign) {
        case '1':
            Information OJlogin ; //Object for Information class to login.
            OJlogin.Login();
            break;
        case '2':{
            string userName;
            string pass;
            cout<< "UserName: "<<endl;
            cin>> userName;
            
            cout<< "Password:"<<endl;
            cin>> pass;
            
            
            //check the email.
            string input;
            cout << "Enter your email address\n";
            getline(cin, input);
            Information check; //Object for Inoformation to check the email.
            check.Check();
            break;}
        default:
        cout<< "Have a nice time ^_^ . "<< endl;}
    // Initialize 2D array TV shows.
    
    string KidsTVshow[][4] = {
        {"Category :","Series :","Rate :", "Year :" },
        {"Animation","Best Ed","6.3" ," 2008"}
        , {"Animation","Get Ace","7.0"," 2014"}
        , {"Animation","Birdz ","6.6"," 1998"}
        ,{"Animation","Pearlie", "4.6"," 2008"}
        ,{"Animation","Sidekick, ", "4.5"," 2010"}};
    
    string PG_TVshow[][4] = {
        {"Category :","Series :","Rate :", "Year :" },
        {"Comedy","Mr.Bean","8.5" ,"1990"}
        , {"Action","’Mad dog","7.6"," 2017"}
        , {"Drama","School","7.5","2013"}
        ,{"Action","Lookout", "6.6"," 2017"}
        ,{"Drama","Memory", "5.9"," 2014"}};
    
    string Adult_TVshow[][4] = {
        {"Category :","Movies :","Rate :", "Year :" },
        {"Crime","Sherlock","9.1" ,"2010"}
        ,{"Comedy","Friends ","8.9","1994"}
        ,{"Crime","Oz ", "8.8"," 1997"}
        ,{"Drama","Suits", "8.6"," 2011"}
        ,{"Action","Banshee", "8.4"," 2013"}};
    
    // Initialize 2D array Movies.
    
    string KidsMovies[][4] = {
        {"Category :","Movies :","Rate :", "Year :" },
        {"Adventure","Coco","8.9" ," 2017"}
        , {"Animation","Sing","7.3"," 2016"}
        , {"Animation","Trolls","6.7"," 2016"}
        ,{"Animation","Inside out", "9.1"," 2015"}
        ,{"Animation","Ozzy", "5.6"," 2016"}};
    
    string PG_Movies[][4] = {
        {"Category :","Movies :","Rate :", "Year :" },
        {"Drama","Room","8.2" ,"2015 2"}
        , {"Action","Sicario","7.6"," 2015"}
        , {"Comedy","Home Alone","7.5","1990"}
        ,{"Thriller","Split", "7.6"," 2017"}
        ,{"Horror","Get Out", "8.3"," 2017"}};
    
    string Adult_Movies[][4] = {
        {"Category :","Movies :","Rate :", "Year :" },
        {"Horror","Orphan","7.0" ,"2009"}
        , {"Horror","Annabelle","5.7","2014"}
        ,{"Horror","Dead Story", "4.4"," 2017"}
        ,{"Horror","Dead Awake", "4.7"," 2017"}
        ,{"Horror","It Follows", "6.9"," 2014"}};
    
    // check the age.
    int age;
    cout<<"Please Enter your age: "<<endl;
    cin>> age;
    
    if (age<=8){
        TVShowInfo TVKids; // Object TVKids
        cout<< "     ** KIDS TV SHOWS **"<<endl;
        TVKids.printKidesTV(KidsTVshow , 6); // call function kids
        MoviesInfo Kids; // Object kids
        cout<< "     ** KIDS MOVIES **"<<endl;
        Kids.printKidesMovies(KidsMovies , 6); // call function kids
        
    }
    else if (age<=15){
        TVShowInfo TVPG ;// Object PG
        cout<< "     ** PG TV SHOWS **"<<endl;
        TVPG.printPGTV(PG_TVshow , 6);// call function PG
        
        MoviesInfo PG ;// Object PG
        cout<< "     ** PG MOVIES **"<<endl;
        PG.printPGMovies(PG_Movies , 6);// call function PG
        
    }
    else if (age >17){
        cout << "    YOU CAN WATCH ALL THE TV SHOWS AND MOVIES"<<endl<<endl;
        cout<< "                MOVIES   "<<endl<<endl;
        MoviesInfo Kids; // Object kids
        cout<< "         ** KIDS MOVIES **"<<endl;
        Kids.printKidesMovies(KidsMovies , 6); // call function kids
        MoviesInfo PG ;// Object PG
        cout<< "         ** PG MOVIES **"<<endl;
        PG.printPGMovies(PG_Movies , 6);// call function PG
        MoviesInfo Adult; // Object Adult
        cout<< "         ** ADULTS MOVIES **"<<endl;
        Adult.printAllMovies(Adult_Movies,6);// call function Adult
        
        cout << "              TV SHOWS   "<<endl<<endl;
        TVShowInfo TVKids; // Object kids
        cout<< "         ** KIDS TV SHOWS **"<<endl;
        TVKids.printKidesTV(KidsTVshow , 6); // call function kids
        TVShowInfo TVPG ;// Object PG
        cout<< "         ** PG TV SHOWS **"<<endl;
        TVPG.printPGTV(PG_TVshow , 6);// call function PG
        TVShowInfo TVAdult; // Object Adult
        cout<< "         ** ADULTS TV SHOWS **"<<endl;
        TVAdult.printAdultTV(Adult_TVshow ,6);// call function Adult
        
    }
    return 0 ;
}
