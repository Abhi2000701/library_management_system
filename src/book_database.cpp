#include<stdio.h>
#include<string>
#include<vector>
#include<fstream>
#include<cassert>


#include"../include/helper_functions.h"
#include"../include/book_database.h"

using namespace std;

book_database::book_database(book_database &books){
    this->books = books.books;
    this->num_books = books.num_books;
}

// default constructor
book_database::book_database(){
    this->num_books = 0;
}

book_database::book_database(string book_txt_file){
    // read a txt file and store the data in books
    
    ifstream book_file(book_txt_file);
    string line;
    while(getline(book_file, line)){
        vector<string> book_info = split_str_custom(line, ',');
        book new_book(stoi(book_info[0]), book_info[1], book_info[2], stoi(book_info[3]), stoi(book_info[4]));
        books.push_back(new_book);
    }
}


void book_database::add_book(string title, string author){
    
    book new_book(num_books+1, title, author, 0, 0);
    books.push_back(new_book);
    num_books++;
}

void book_database::delete_book(int book_id){
    int i = book_id-1;
    assert (books[i].book_id==book_id);
    books.erase(books.begin()+i);
    num_books--;
}

void book_database::update_book(int book_id, int field_to_update, string new_value){
    int i = book_id-1;
    assert (books[i].book_id==book_id);
    if(field_to_update==0){
        books[i].title = new_value;
    }
    else if(field_to_update==1){
        books[i].author = new_value;
    }
}

void book_database::issue_book(int book_id, int student_id, int date){
    int i = book_id-1;
    
    assert (books[i].book_id==book_id);
    assert (books[i].issued_to==0);

    books[i].issued_to = student_id;
    books[i].last_issue_date = date;
}