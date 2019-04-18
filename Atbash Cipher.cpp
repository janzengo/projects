#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
string encrypt(string str);
int main(){
    string text = "", result = "";
    cout << "Enter text to encrypt: ";getline(cin, text);
    result = encrypt(text);
    cout << "Encrypted text: " << result;
}
string encrypt(string str) {
    string RealAlpha = "abcdefghijklmnopqrstuvwxyz", RevAlpha = "zyxwvutsrqponmlkjihgfedcba";
    string CapRealAlpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", CapRevAlpha = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    for(int i = 0;i < str.length();i++){
        for(int j = 0;j < 26;j++){
            if(str[i] == RealAlpha[j]){
                str[i] = RevAlpha[j];
                break;
            }
            else if(str[i] == CapRealAlpha[j]){
                str[i] = CapRevAlpha[j];
                break;
            }
        }
    }
    return str;
}

