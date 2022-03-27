#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include<stdio.h>
#include<string>
#include"user.h"

using namespace std;

class librarian:public user{
    public:
        user add_user(string name, string password, string username);
        void delete_user(int id);
        // field = (0,1,2)=(name,password,username)
        void update_user(int id, int field_to_update, string new_value);
        
        user* list_users();

};


#endif