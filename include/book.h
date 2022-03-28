#ifndef BOOK_H
#define BOOK_H

#include<stdio.h>
#include<string>
#include<vector>

using namespace std;


class book{
    protected:
        int book_id;
        string title;
        string author;
        // string publisher;
        int issued_to;
        int last_issue_date;
        

        book(const vector<struct BOOK>& books, int book_id);

    public:
        
        int due_date();
        // struct BOOK get_book_details();
        bool is_available();
};

#endif