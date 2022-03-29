#include<stdio.h>
#include<string>
#include<vector>
#include<fstream>
#include<cassert>

#include"../include/user_database.h"
#include"../include/helper_functions.h"

using namespace std;

// default constructor
user_database::user_database(){
    this->num_users = 0;
}

user_database::user_database(string user_txt_file){
    ifstream user_file(user_txt_file);
    string line;
    int user_id;
    string name;
    string password;
    string username;
    int label;

    while(getline(user_file, line)){
        vector<string> user_info = split_str_custom(line, ',');
        user_id = stoi(user_info[0]);
        username = user_info[1];
        password = user_info[2];
        name = user_info[3];
        label = stoi(user_info[4]);

        struct USER new_user;
        
        new_user.user_id = user_id;
        new_user.name = name;
        new_user.password = password;
        new_user.username = username;
        new_user.label = label;

        users.push_back(new_user);

    }
    user_file.close();
}

void user_database::add_user(string name, string password, string username){
    int user_id = users.size()+1;
    struct USER new_user;
    new_user.user_id = user_id;
    new_user.name = name;
    new_user.password = password;
    new_user.username = username;
    new_user.label = 0;
    users.push_back(new_user);
}

void user_database::delete_user(int user_id){
    int i = user_id-1;
    assert (users[i].user_id==user_id);
    users.erase(users.begin()+i);
}

void user_database::update_user(int user_id, int field_to_update, string new_value){
    int i = user_id-1;
    assert (users[i].user_id==user_id);
    if(field_to_update==0){
        users[i].username = new_value;
    }
    else if(field_to_update==1){
        users[i].password = new_value;
    }
    else if(field_to_update==2){
        users[i].name = new_value;
    }
}

vector<struct USER> user_database::search_user(string name){
    vector<struct USER> found_users;
    for(int i=0; i<users.size(); i++){
        if(users[i].name==name){
            found_users.push_back(users[i]);
        }
    }
    return found_users;
}

