#include"../include/librarian.h"

using namespace std;

librarian::librarian(){
    user_details.user_id = 0;
    user_details.username = "";
    user_details.password = "";
    user_details.name = "";
    user_details.label = -1;
    all_books = book_database();
}

librarian::librarian(user_database &users, book_database &books, int user_id){
    this->all_users = users;
    this->all_books = books;

    this->user_details.user_id = user_id;
    this->user_details.label = 0;
    this->user_details.username = (users.users)[user_id-1].username;
    this->user_details.password = (users.users)[user_id-1].password;
    this->user_details.name = (users.users)[user_id-1].name;

}

void librarian::add_user(string name, string password, string username){
    this->all_users.add_user(name, password, username);
}

void librarian::delete_user(int user_id){
    this->all_users.delete_user(user_id);
}

void librarian::update_user(int user_id, int field_to_update, string new_value){
    this->all_users.update_user(user_id, field_to_update, new_value);
}

void librarian::add_book(string title, string author){
    this->all_books.add_book(title, author);
}

void librarian::delete_book(int book_id){
    this->all_books.delete_book(book_id);
}

void librarian::update_book(int book_id, int field_to_update, string new_value){
    this->all_books.update_book(book_id, field_to_update, new_value);
}

void librarian::issue_book(vector<int> book_ids, vector<int> student_ids, vector<int> dates){
    for (int i = 0; i < book_ids.size(); i++){
        this->all_books.issue_book(book_ids[i], student_ids[i], dates[i]);
    }
}

vector<struct USER> librarian::list_users(){
    return this->all_users.users;
}