#include <iostream>
#include <string>
using namespace std;
int main() {
    string RealAlpha ="abcdefghijklmnopqrstuvwxyzz ";
    string RevAlpha = "zyxwvutsrqponmlkjihgfedcbaa ";
    string word;
    cout << "Enter word: ";getline(cin,word);
    for(int i = 0;i < word.length(); ++i){
        for(int j = 0;j <= 13;j++){
            if(word[i] == RealAlpha[j]){
                word[i] = RevAlpha[j];
            }
        }
    }
    cout << word << endl;
    return 0;
}