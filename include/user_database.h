#ifndef USER_DATABASE_H
#define USER_DATABASE_H

#include<stdio.h>
#include<string>
#include<vector>
#include"user.h"

using namespace std;


class user_database{
    public:
        vector<struct USER>  users;
        int num_users;

        // default constructor
        user_database();

        
        user_database(string user_txt_file);
        // ~user_database();
        
        void add_user(string name, string password, string username);
        
        void delete_user(int user_id);

        // field = (0,1,2)=(username,password,name)
        void update_user(int user_id, int field_to_update, string new_value);
        
        // search user by name.
        vector<struct USER> search_user(string name);
        
};

#endif