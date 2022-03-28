#ifndef USER_H
#define USER_H

#include<stdio.h>
#include<string>

#include"book_database.h"

using namespace std;

struct USER{
    int user_id;
    string name;
    string password;
    string username;
    int label;
    // label = 0 for librarian, label = 1 for student, label = 2 for professor
};

class user{
    private:
        int _get_book_id(string title, string author);
    protected:
        struct USER user_details;
        book_database all_books;
        // user(int user_id, string username, string password, string name);

    public:
        vector<book> search_book_by_title(string title);
        vector<book> search_book_by_author(string author);
        // list book
        vector<book> list_books();
        bool is_available(string title, string author);
        int due_date(string title, string author);
    
};

#endif