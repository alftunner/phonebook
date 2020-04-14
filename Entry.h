//
// Created by alftunner on 14.04.2020.
//
#include <string>
#include <vector>
using namespace std;

class Entry {
public:
    string name;
    basic_string<char> named;
    string homeNumber;
    string workNumber;
    string mobile;
    string otherInfo;
    Entry(string name, string homeNumber, string workNumber, string mobile, string otherInfo)
    {
        this->name = name;
        named = name;
        this->homeNumber = homeNumber;
        this->workNumber = workNumber;
        this->mobile = mobile;
        this->otherInfo = otherInfo;
    }

};



