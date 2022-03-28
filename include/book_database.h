#ifndef BOOK_DATABASE_H
#define BOOK_DATABASE_H

#include<stdio.h>
#include<string>
#include<vector>

#include"book.h"

using namespace std;

class book_database{
    public:
        vector<book> books;
        int num_books;

        book_database(string book_txt_file);
        ~book_database();

        void add_book(string title, string author);
        void delete_book(int book_id);

        // field = (0,1)=(title, author)
        void update_book(int book_id, int field_to_update, string new_value);

};

#endif