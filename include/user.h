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

typedef struct Book_Detail{
    int book_id;
    string title;
    string author;
}book_detail;

class user{
    protected:
        int _get_book_id(string title, string author);

        struct USER user_details;
        book_database all_books;
        // user(int user_id, string username, string password, string name,int label, book_database &books);

    public:
        // default constructor
        user();

        vector<book> search_book_by_title(string title);
        vector<book> search_book_by_author(string author);
        
        // list book
        vector<book_detail> list_all_books();
        bool is_available(string title, string author);
        int due_date(string title, string author);
    
};

#endif