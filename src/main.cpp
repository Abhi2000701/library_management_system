#include<bits/stdc++.h>
#include<book_database.h>
#include<book.h>
#include<user.h>
#include<user_database.h>
#include<librarian.h>
#include<prof_student.h>
#include<student.h>
#include"display_functions.hpp"


#define MAX_PROF_DAYS 60
#define MAX_STUD_DAYS 30
#define PROF_FINE_PER_DAY 5
#define STUD_FINE_PER_DAY 2

using namespace std;

struct USER{
    string name;
    string password;
    string username;
    int label;
};
void print_help(){

}



int login_state(user_database &all_users){
    string command=".";
    string username, password;
    string roles[3]={"librarian", "student","professor"};
    while(true){
        // cout<<command<<endl;
        if(command=="exit")
            break;
        else if(command=="."){
            cout<<"login/ >";
            cout<<"Enter username: ";
            cout.flush();
            cin>>username;
            cout<<"login/ >";
            cout<<"Enter password: ";
            cout.flush();
            cin>>password;
            user logged_in = all_users.login_user(username,password);
            if(logged_in.user_id==-1){
                cout<<"login/ >";
                cout<<"Invalid username or password!."<<endl;

            }
            else{
                cout<<"login/ >";
                cout<<"Welcome "<<logged_in.name<<endl;
                cout<<"You are logged in as "<<roles[logged_in.label]<<endl;
                return logged_in.user_id;
            }
        }
        else if(command=="help"){
            cout<<"login/ >"<<endl;
            cout<<"help - print this help message"<<endl;
            cout<<"exit - exit the login portal"<<endl;
            cout<<". - login to the system"<<endl;
        }
        else{
            cout<<"login/ >";
            cout<<"Invalid command. use help command to see the list of commands"<<endl;
        }
        cout<<"login/ >";
        cout.flush();
        cin>>command;
    }
    return -1;

}


librarian log_in_lib(user_database &all_users, book_database &all_books, vector<prof_student> &new_users,string user_name,int libr_id){
    string command;
    librarian libr(all_users,all_books,libr_id);

    if(new_users.size()>0)
        cout<<user_name<<"/ >"<<"The following students requested registration: (enter 'y' to accept, 'n' to reject)\n";
    int n=new_users.size();
    for(int i=0;i<n;i++){
        if(new_users[i].label==2)
            continue;
        cout<<user_name<<"/ >";
        cout<<new_users[i].name<<" >";
        cin>>command;

        if(command=="y"){
            libr.add_user(new_users[i].name,new_users[i].password,new_users[i].username,1);
        }
        new_users.erase(new_users.begin()+i);
        i--;
        n--;
    }
    if(new_users.size()>0)
        cout<<user_name<<"/ >"<<"The following professors requested registration: (enter 'y' to accept, 'n' to reject)\n";
    n=new_users.size();
    for(int i=0;i<n;i++){
        if(new_users[i].label==1)
            continue;
        cout<<user_name<<"/ >";
        cout<<new_users[i].name<<" >";
        cin>>command;
        if(command=="y"){
            libr.add_user(new_users[i].name,new_users[i].password,new_users[i].username,2);
        }
        new_users.erase(new_users.begin()+i);
        i--;
        n--;
    }

    while(true){
        cout<<user_name<<"/ >";
        cin>>command;
        if(command=="logout"){
            break;
        }
        else if(command=="help"){
            // cout<<user_name<<"/ >";
            cout<<"help - print this help message"<<endl;
            cout<<"logout - exit the librarian portal"<<endl;
            cout<<"add_book - add a new book to the library"<<endl;
            cout<<"delete_book - delete a book from the library"<<endl;
            cout<<"update_book - update a book in the library"<<endl;
            cout<<"search_book_author - search for a book by author name in the library"<<endl;
            cout<<"search_book_title - search for a book by title in the library"<<endl;
            cout<<"list_books - list all the books in the library"<<endl;
            cout<<"add_user - add a new user to the library"<<endl;
            cout<<"delete_user - delete a user from the library"<<endl;
            cout<<"update_user - update a user in the library"<<endl;
            cout<<"search_user - search for a user in the library"<<endl;
            cout<<"list_users - list all users registered in the library"<<endl;
        }
        else if(command=="add_book"){
            string title, author;
            cout<<user_name<<"/ >";
            cout<<"Enter the title of the book: ";
            cin.ignore();
            getline(cin,title);
            
            cout<<user_name<<"/ >";
            cout<<"Enter the author of the book: ";
            cin.ignore(0);
            getline(cin,author);
            libr.add_book(title,author);
        }
        else if(command=="delete_book"){
            cout<<user_name<<"/ >";
            int boook_id_del;
            cout<<"BOOK ID: ";
            cin>>boook_id_del;

            libr.delete_book(boook_id_del);
        }
        else if(command=="update_book"){
            cout<<user_name<<"/ >";
            cout<<"Book id: ";
            int book_id;
            cin>>book_id;
            if(cin.fail()){
                invalid_dtype();
                continue;
            }
            cout<<user_name<<"/ >";
            cout<<"Field to update(title/author): ";
            string field;
            cin>>field;
            cout<<user_name<<"/ >";
            cout<<"New value: ";
            string new_value;
            cin.ignore();
            getline(cin,new_value);
            // cout<<new_value<<endl;
            if(field=="title"){
                libr.update_book(book_id,0,new_value);
            }
            else if(field=="author"){
                libr.update_book(book_id,1,new_value);
            }
            else{
                cout<<user_name<<"/ >";
                cout<<"Invalid field.\n";
            }
        }
        else if(command=="search_book_author"){
            book_by_author(user_name,libr.all_books);

        }
        else if(command=="search_book_title"){
            book_by_title(user_name,libr.all_books);
        }
        else if(command=="list_books"){
            display_books(libr.all_books.books);
        }
        else if(command=="add_user"){
            string name, password, username;
            cout<<user_name<<"/ >";
            cout<<"Enter the name of the user: ";
            cin.ignore();
            getline(cin,name);
            cout<<user_name<<"/ >";
            cout<<"Enter the password for the user: ";
            cin>>password;
            cout<<user_name<<"/ >";
            cout<<"Enter the username for the user: ";
            cin>>username;
            cout<<"Enter the type of the user(1 for student, 2 for professor, 0 for librarian): ";
            int type;
            cin>>type;
            libr.add_user(name,password,username,type);
        }
        else if(command=="delete_user"){
            cout<<user_name<<"/ >";
            cout<<"USER ID of the user: ";
            int user_id;
            cin>>user_id;
            if(cin.fail()){
                invalid_dtype();
                continue;
            }
            libr.delete_user(user_id);
        }
        else if(command=="update_user"){
            cout<<user_name<<"/ >";
            cout<<"USER ID of the user: ";
            int user_id;
            cin>>user_id;
            if(cin.fail()){
                invalid_dtype();
                continue;
            }
            cout<<user_name<<"/ >";
            cout<<"Field to update(name/password/username): ";
            string field;
            cin>>field;
            cout<<user_name<<"/ >";
            cout<<"New value: ";
            string new_value;
            cin.ignore();
            getline(cin,new_value);
            if(field=="name"){
                libr.update_user(user_id,0,new_value);
            }
            else if(field=="password"){
                libr.update_user(user_id,1,new_value);
            }
            else if(field=="username"){
                libr.update_user(user_id,2,new_value);
            }
            else{
                cout<<user_name<<"/ >";
                cout<<"Invalid field.\n";
            }
        }
        else if(command=="search_user"){
            cout<<user_name<<"/ >";
            cout<<"USER  Name: ";
            string name;
            cin.ignore();
            getline(cin,name);
            vector<user> user = libr.all_users.search_user_by_name(name);
            display_users(user);
        }
        else if(command=="list_users"){
            display_users(libr.all_users.users);
        }
        else{
            cout<<user_name<<"/ >";
            cout<<"Invalid command.\n";
        }

    }
    return libr;
}

void user_ps_login_state(int user_id, string username, string password, string name, book_database &all_books,user_database &all_users,int curr_date,int max_days,int fine_per_day,int label){
    prof_student user_ps(user_id,username,password,name,all_books,max_days,fine_per_day,label);
    string command;
    while(true){
        cout<<username<<"/ >";
        cin>>command;
        if(command=="logout"){
            break;
        }
        else if(command=="help"){
            print_help_non_lib();

        }

        else if(command=="list_issued_books"){
            display_books(user_ps.issued_books);
        }
        else if(command=="list_books"){
            display_books(all_books.books);
        }
        else if(command=="search_book_title"){
            book_by_title(username,all_books);
        }
        else if(command=="search_book_author"){
            book_by_author(username,all_books);
        }
        else if(command=="show_total_fine"){
            user_ps.calculate_fine(curr_date);
            cout<<username<<"/ >";
            cout<<"Total fine: "<<user_ps.fine_amount<<endl;
        }
        else if(command=="check_book_avail"){
            book_availiabilty(username,all_books,all_users);
        }
        else if(command=="issue_book"){
            issue_book(username,user_id, all_books,all_users,curr_date);
        }

        else{
            cout<<username<<"/ >";
            cout<<"Invalid command.\n";
        }

    }
}


struct USER register_new(){
    string command=".";
    string name, password, username,role;
    struct USER new_user;
    bool register_success=false;
    while(true){
        if(command=="exit")
            break;
        else if(command=="."){
            cout<<"register/ >";
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin,name);
            cout<<"register/ >";
            cout<<"Enter password: ";
            cin>>password;
            cout<<"register/ >";
            cout<<"Enter username: ";
            cin>>username;
            cout<<"register/ >";
            cout<<"Enter role: ";
            cin>>role;
            if(role=="librarian"){
                cout<<"Ask librarian to add you to the database.\n";
            }
            else if(role=="student"){
                new_user.label=1;
                register_success=true;
            }
            else if(role=="professor"){
                new_user.label=2;
                register_success=true;
            }
            else{
                cout<<"register/ >";
                cout<<"Invalid role.\n";
            }
            if(register_success){
                cout<<"register/ >";
                cout<<"User added. Ask librarian to register you\n";
                new_user.name=name;
                new_user.password=password;
                new_user.username=username;
                return new_user;
            }
        }
        else if(command=="help"){
            cout<<"register/ >"<<endl;
            cout<<"help - print this help message"<<endl;
            cout<<"exit - exit the register portal"<<endl;
            cout<<". - register a new user"<<endl;
        }
        else{
            cout<<"register/ >";
            cout<<"Invalid command. use help command to see the list of commands.\n";
        }
        cout<<"register/ >";
        cin>>command;
    }

    new_user.label = -1;
    return new_user;
}

int main(){

    string inp_username="libr", inp_password="library_p", command;
    bool logged_in=false;
    vector<prof_student> new_users;

    cout<<"Welcome to PK Kelkar Library."<<endl;
    cout<<"Initialising database...";

    user_database all_users("../database/users.txt");
    book_database all_books("../database/books.txt");

    cout<<" Done."<<endl;
    
    cout<<"You can use the \"help\" command to get a list of general commands.\n";


    while(true){
        cout<<">";
        cin>>command;
        if(command=="exit")
            break;
        else if(command=="help"){
            print_help();
            continue;
        }
        else if(command=="login"){
            int user_id = login_state(all_users);
            if(user_id==-1)
                continue;
            logged_in=true;
            user logged_user = all_users.search_user_by_id(user_id);
            if(logged_user.label==0){
                librarian lib = log_in_lib(all_users,all_books,new_users,logged_user.username,user_id);
                all_users = lib.all_users;
                all_books = lib.all_books;
            }
            else if(logged_user.label==1){
                // cout<<"here"<<endl;
                user_ps_login_state(user_id,logged_user.username,logged_user.password,logged_user.name,all_books,all_users,31032022,MAX_PROF_DAYS,PROF_FINE_PER_DAY,1);
            }
            else if(logged_user.label==2){
                user_ps_login_state(user_id,logged_user.username,logged_user.password,logged_user.name,all_books,all_users,31032022,MAX_STUD_DAYS,STUD_FINE_PER_DAY,2);
            }
            all_users.save_data();
            all_books.save_data();
        }
        else if(command=="register"){
            struct USER new_user = register_new();
            if(new_user.label==-1)
                continue;
            if(new_user.label==2){
                prof_student new_user_cls(all_users.users.back().user_id+1+new_users.size(),new_user.username,new_user.password,new_user.name,all_books,MAX_PROF_DAYS,PROF_FINE_PER_DAY,new_user.label);
                new_users.push_back(new_user_cls);
            }
            else if(new_user.label==1){
                prof_student new_user_cls(all_users.users.back().user_id+1+new_users.size(),new_user.username,new_user.password,new_user.name,all_books,MAX_STUD_DAYS,STUD_FINE_PER_DAY,new_user.label);
                new_users.push_back(new_user_cls);
            }
            
        }
    }
}