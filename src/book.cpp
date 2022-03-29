#include <stdio.h>
#include <string>
#include <vector>
#include "../include/book.h"

#define PROF_MAX_DAYS 60
#define STUD_MAX_DAYS 30

using namespace std;

// default constructor
book::book(){
    book_id = 0;
    title = "";
    author = "";
    issued_to = 0;
    last_issue_date = 0;
}


int add_days_to_date(int date, int days){
    int day = date/1000000;
    int month = (date/10000)%100;
    int year = date%10000;

    int new_day = day + days;
    if (month == 1 || month==3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        if (new_day > 31){
            new_day = new_day - 31;
            month++;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        if (new_day > 30){
            new_day = new_day - 30;
            month++;
        }
    }
    else if (month == 2){
        if ((year%4 == 0 && year%100 != 0) || year%400 == 0){
            if (new_day > 29){
                new_day = new_day - 29;
                month++;
            }
        }
        else{
            if (new_day > 28){
                new_day = new_day - 28;
                month++;
            }
        }
    }

    if (month > 12){
        month = month - 12;
        year++;
    }
    int new_date = year*1000000 + month*10000 + new_day;
    return new_date;
}

book::book(int book_id, string title, string author, int issued_to, int last_issue_date) {
    this->book_id = book_id;
    this->title = title;
    this->author = author;
    this->issued_to = issued_to;
    this->last_issue_date = last_issue_date;
}

int book::due_date(int label_issuer){
    int due_date;
    if(label_issuer == 2){
        due_date = add_days_to_date(last_issue_date, PROF_MAX_DAYS);
    }
    else if(label_issuer == 1){
        due_date = add_days_to_date(last_issue_date, STUD_MAX_DAYS);
    }
    else
        due_date = 0;
    
    return due_date;
}

bool book::is_available(){
    if(this->issued_to == 0)
        return true;
    else
        return false;
}