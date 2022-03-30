#include<iostream>

using namespace std;

int main(){
    int i;
    string command;
    while(true){
        cout<<"Enter command: ";
        cin>>command;

        if(command=="exit"){
            break;
        }
        else if(command=="try"){
            cin>>i;
            cout<<"i="<<i<<endl;
        }
        else{
            cout<<"Invalid command"<<endl;
        }
    }
}