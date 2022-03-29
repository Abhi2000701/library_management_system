#include"../include/helper_functions.h"

#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

vector<string> split_str_custom(string str, char delimiter){
    // split a string at delimiter into a vector of strings
    vector<string> splitted_str;
    string temp_str = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] != delimiter){
            temp_str += str[i];
        }
        else{
            splitted_str.push_back(temp_str);
            temp_str = "";
        }
    }
    splitted_str.push_back(temp_str);
    return splitted_str;
}

int num_days(int date1, int date2){
    int day1 = date1/1000000;
    int month1 = (date1/10000)%100;
    int year1 = date1%10000;

    int day2 = date2/1000000;
    int month2 = (date2/10000)%100;
    int year2 = date2%10000;

    int days = 0;

    if (year1 == year2){
        if (month1 == month2){
            days = day2 - day1;
        }
        else{
            days = (month2 - month1)*30 + day2 - day1;
        }
    }
    else{
        days = (year2 - year1)*365 + (month2 - month1)*30 + day2 - day1;
    }
}