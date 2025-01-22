#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<char, int> counter(string s) {
    unordered_map<char, int> frequencyMap;
    
    for (char c : s) {
        frequencyMap[c]++;
    }
    
    return frequencyMap;
}

int main() {
    string input = "example";
    unordered_map<char, int> result = counter(input);
    
    for (const auto &pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    return 0;
}
