#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0}; 
    for (char ch : str) {
        freq[ch]++;
    }

    int maxCount = 0;
    char maxChar;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }
    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Number of occurrences: " << maxCount << endl;

    return 0;
}