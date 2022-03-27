#ifndef USER_H
#define USER_H

#include<stdio.h>
#include<string>
using namespace std;

class user{
    protected:
        string name;
        string password;
        string username;
        int id;
        user(string name, string password, string username, int id);
    
};

#endif