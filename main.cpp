#include <iostream>
#include "Entry.h"
#include <vector>


void showBook(vector<Entry> phonebook)
{
    for (auto i : phonebook)
    {
        cout << "-------" << i.name << "---------" << endl;
        cout << "Home number: " << i.homeNumber << endl;
        cout << "Work number: " << i.workNumber << endl;
        cout << "Mobile number: " << i.mobile << endl;
        cout << "Other info: " << i.otherInfo << endl;
    }
}

void Search(vector<Entry> phonebook)
{
    string temp;
    string totalname;
    bool flag = false;
    cout << "Please input name: "; cin >> temp;
    for (auto i : phonebook) {
        for (int j = 0; j < i.name.length(); ++j) {
            totalname += i.named[j];
            if (temp == totalname)
            {
                cout << "-------" << i.name << "---------" << endl;
                cout << "Home number: " << i.homeNumber << endl;
                cout << "Work number: " << i.workNumber << endl;
                cout << "Mobile number: " << i.mobile << endl;
                cout << "Other info: " << i.otherInfo << endl;
                flag = true;
            }
        }
    }
    if (!flag)
    {
        cout << "There is no " << temp << " in this phonebook!" << endl;
    }
}

int main() {
    vector<Entry> phonebook;
    Entry entry1("Alexis", "2201431", "228228", "+79304184181", "I wish you love");
    Entry entry2("Tanya", "2200000", "2288888", "+79304304300", "I wish you die");
    phonebook.push_back(entry1);
    phonebook.push_back(entry2);
    showBook(phonebook);
    Search(phonebook);
    return 0;
}
