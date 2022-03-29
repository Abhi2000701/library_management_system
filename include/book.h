#ifndef BOOK_H
#define BOOK_H

#include<stdio.h>
#include<string>
#include<vector>

using namespace std;


class book{
    public:
        int book_id;
        string title;
        string author;
        // string publisher;
        int issued_to;
        int last_issue_date;
        
        // default constructor
        book();

        book(int book_id, string title, string author, int issued_to, int last_issue_date);
        
        int due_date(int label_issuer);
        
        bool is_available();
};

#endif