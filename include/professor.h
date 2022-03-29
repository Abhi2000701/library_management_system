#ifndef PROFESSOR_H
#define PROFESSOR_H

#include<stdio.h>
#include<string>
#include<vector>

#include"user.h"
#include"book.h"

using namespace std;

class professor: public user{
    private:
        vector<book> issued_books;
        // int num_books_issued;
        int fine_amount;

    public:
        professor(int user_id, string username, string password, string name, book_database &books);
        int calculate_fine(int curr_date);
        // bool issue_book(string title, string author);
        bool return_book(string title, string author,int curr_date);
        bool setlle_fine(); 
        

};

#endif