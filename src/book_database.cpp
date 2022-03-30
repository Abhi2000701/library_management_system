#include<iostream>
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
    this->file_name = books.file_name;
}

// default constructor
book_database::book_database(){
    this->num_books = 0;
}

book_database::book_database(string book_txt_file){
    // read a txt file and store the data in books
    file_name = book_txt_file;
    ifstream book_file(book_txt_file);
    string line;
    num_books = 0;
    while(getline(book_file, line)){
        vector<string> book_info = split_str_custom(line, ',');
        book new_book(stoi(book_info[0]), book_info[1], book_info[2], stoi(book_info[3]), stoi(book_info[4]));
        books.push_back(new_book);
        
    }
    num_books = books.size();
}


void book_database::add_book(string title, string author){
    
    book new_book(books.back().book_id+1, title, author, 0, 0);
    books.push_back(new_book);
    num_books++;
}

void book_database::delete_book(int book_id){

    for(int i=0;i<num_books;i++){
        if(books[i].book_id == book_id){
            books.erase(books.begin()+i);
            num_books--;
            break;
        }
    }
}

void book_database::update_book(int book_id, int field_to_update, string new_value){

    for(int i=0;i<num_books;i++){
        if(books[i].book_id == book_id){
            if(field_to_update == 0){
                books[i].title = new_value;
            }
            else if(field_to_update == 1){
                books[i].author = new_value;
            }
            break;
        }
    }
}

void book_database::issue_book(int book_id, int student_id, int date){
    
    for(int i=0;i<num_books;i++){
        if(books[i].book_id == book_id){
            books[i].issued_to = student_id;
            books[i].last_issue_date = date;
            break;
        }
    }
}

vector<book> book_database::search_book_by_title(string title){
    vector<book> result;
    for(int i=0;i<num_books;i++){
        if(books[i].title == title){
            result.push_back(books[i]);
        }
    }
    return result;
}

vector<book> book_database::search_book_by_author(string author){
    vector<book> result;
    // cout<<"here"<<num_books<<endl;
    for(int i=0;i<num_books;i++){
        // cout<<books[i].author<<endl;
        if(books[i].author == author){
            result.push_back(books[i]);
        }
    }
    return result;
}

book book_database::search_book(string title, string author){
    for(int i=0;i<num_books;i++){
        if(books[i].title == title && books[i].author == author){
            return books[i];
        }
    }
    book dummy_book;
    return dummy_book;
}

book book_database::search_book_by_id(int book_id){
    for(int i=0;i<num_books;i++){
        if(books[i].book_id == book_id){
            return books[i];
        }
    }
    book dummy_book;
    return dummy_book;
}

void book_database::save_data(){
    ofstream book_file(file_name);
    for(int i=0;i<num_books;i++){
        book_file << books[i].book_id << "," << books[i].title << "," << books[i].author << "," << books[i].issued_to << "," << books[i].last_issue_date << endl;
    }
    book_file.close();
}