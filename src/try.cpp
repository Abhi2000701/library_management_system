// #include<yaml-cpp/yaml.h>
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"../include/helper_functions.h"

using namespace std;
// using namespace YAML;

int main(){
    ifstream config("../config.yaml");
    string line;
    int max_days_stud=0;
    int max_days_prof=0, fine_per_day_stud=0, fine_per_day_prof=0;
    while(getline(config, line)){
        vector<string> book_info = split_str_custom(line, ':');
        if(book_info[0]=="max_days_stud")
            max_days_stud = stoi(book_info[1]);
        if(book_info[0]=="max_days_prof")
            max_days_prof = stoi(book_info[1]);
        if(book_info[0]=="fine_per_day_stud")
            fine_per_day_stud = stoi(book_info[1]);
        if(book_info[0]=="fine_per_day_prof")
            fine_per_day_prof = stoi(book_info[1]);
    }
}