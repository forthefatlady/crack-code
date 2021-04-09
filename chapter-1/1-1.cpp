#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set <char> uSet;
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if (uSet.find(str[i]) != uSet.end()) {
            cout << "Duplicate found";
            return 0;
        }
        uSet.insert(str[i]);
    } 
    cout << str;
    return 0;
}
