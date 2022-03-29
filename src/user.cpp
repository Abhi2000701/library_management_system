#include<stdio.h>
#include<string>
#include"../include/user.h"

using namespace std;

// default constructor
user::user(){
    user_details.user_id = -1;
    user_details.username = "";
    user_details.password = "";
    user_details.name = "";
    user_details.label = -1;
    all_books = book_database();
}


// user::user(int user_id, string username, string password, string name, int label, book_database &books){
//     this->user_details.user_id = user_id;
//     this->user_details.label = label;
//     this->user_details.username = username;
//     this->user_details.password = password;
//     this->user_details.name = name;
//     this->all_books = books;
// }


int user::_get_book_id(string title, string author){

    for(int i=0; i<all_books.books.size(); i++){
        if((all_books.books)[i].title == title && (all_books.books)[i].author == author){
            return (all_books.books)[i].book_id;
        }
    }
    return 0;
}

vector<book> user::search_book_by_title(string title){
    vector<book> searched_books;

    for(int i=0; i<all_books.books.size(); i++){
        if((all_books.books)[i].title == title){
            searched_books.push_back((all_books.books)[i]);
        }
    }

    return searched_books;
}

vector<book> user::search_book_by_author(string author){
    vector<book> searched_books;

    for(int i=0; i < all_books.books.size(); i++){
        if((all_books.books)[i].author == author){
            searched_books.push_back((all_books.books)[i]);
        }
    }

    return searched_books;
}

vector<book_detail> user::list_all_books(){
    vector<book_detail> book_ds;

    for(int i=0; i < all_books.books.size(); i++){
        book_detail book_dl;

        book_dl.book_id = (all_books.books)[i].book_id;
        book_dl.title = (all_books.books)[i].title;
        book_dl.author = (all_books.books)[i].author;
        
        book_ds.push_back(book_dl);
    }

    return book_ds;
} 

bool user::is_available(string title, string author){
    int book_id = _get_book_id(title, author);

    if(book_id == 0)
        return false;
    else
        return (all_books.books)[book_id-1].is_available();
}

int user::due_date(string title, string author){
    int id = _get_book_id(title, author);
    if (id==0)
        return 0;
    else
        return (all_books.books)[id-1].due_date(user_details.label);
}