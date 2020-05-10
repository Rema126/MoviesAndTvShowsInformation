
#include "Information..hpp"
#include <iostream>
#include "stdlib.h"
#include <string>
using namespace std ;

void Information::Login() {
    
    string UserName = "" , Password ="" ;
    bool Loginsuccess = false ;
    do {
        cout << "Please , enter UserName  : " ;
        cin >> UserName ;
        cout << "Please , enter Password : " ;
        cin >>  Password ;
        
        if (UserName == "Hind" && Password == "Hi1234" ){
            cout << "\n Successful Signin.."<<endl<<endl;
            Loginsuccess = true ;
        }
        else if (UserName == "Noora" && Password == "N2017" ){
            cout << "\n Successful Signin.."<<endl<<endl;
            Loginsuccess = true ;
        }
       else if (UserName == "Alanod" && Password == "a112" ){
            cout << "\n Successful Signin.."<<endl<<endl;
            Loginsuccess = true ;
       }else{
           cout << "Incorrect UserName & Password , Please try again .. !!  " <<endl;
       }
    }
    while (!Loginsuccess) ;
    
}

int Information :: Check() {
    string input;
    getline(cin, input);
    
    size_t at = input.find('@'); // point to.
    if (at == string::npos)
    {
        cout << "Missing @ symbol\n";
        cout<<"Sorry , the email not accepted  , Please try again later .. "<<endl;
        exit(0); 
        return 1; // if the condition false it will skip if steatment.
    }
        
    size_t gmail = input.find("gmail");
    size_t hotmail = input.find("hotmail");
    size_t outlook = input.find("outlook");
    size_t yahoo = input.find("yahoo");
    size_t windowslive = input.find("windowslive");
    
    if (hotmail == string::npos && gmail== string::npos && outlook==string::npos && yahoo==string::npos && windowslive == string::npos)
    {
        cout<<"The email address is not accepted"<<endl;
        cout<<"Sorry , the email not accepted  , Please try again later .. "<<endl;
        exit(0);
        return 1;
    }
    size_t dot = input.find('.', at + 1);
    if (dot == string::npos)
    {
        cout << "Missing . symbol after @\n";
        cout<<"Sorry , the email not accepted , Please try again later .. "<<endl;
        exit(0);
        return 2;
    }
    
        cout << "Successful SignUp."<<endl <<endl;
    
    return 0;
}


