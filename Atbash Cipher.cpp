/***************************************************/
/* Go, Janneil Janzen R.                           */
/* Grade 9- Galileo                                */
/* Final Project in Computer Science 9- ENCRYPTION */
/***************************************************/
#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<string>
using namespace std;
int function(int x);
string encrypt(string str);
int main(){
    char choice;
    cout << "GALILEO-JANNEIL JANZEN ENCRYPTION\nMENU\n[1] ENCRYPT \n[2] SHOW ENCRYPT FILE\n";
    cout << "Specification: ";cin >> choice;
    function(choice);
    return 0;
}
int function(int x){
    FILE *input;
    char c;
    switch(x){
        //Encryption
        case '1': {
            string text = "", result = "";
            cout << "[1] ENCRYPT\nENTER TEXT TO ENCRYPT: ";cin.ignore();getline(cin, text);
            encrypt(text);
            system("clear");
            return main();
            break;
    }
        //File Opening
        case '2': {
            char choice;
            cout << "[2] SHOW ENCRYPT FILE" << endl;
            input =  fopen("encryptfile.txt", "r");
            while((c = fgetc(input)) != EOF){
                cout << c;
            }
            fclose(input);
            cout << "\nTry Again(Y/N): ";cin >> choice;
            if(choice == 'Y' || choice == 'y'){
                system("clear");
                main();
            }
            else if(choice == 'N' || choice == 'n'){
                return 0;
            }
            else {
                return 0;
            }
            return main();
            break;
        }
    }
}

    
//Encryption Code
string encrypt(string str) {
    FILE *input, *input2;
    char c, handler[81][2];
    input = fopen("key.txt", "r");
    for(int i = 0;i < 2;i++) {
     for(int j = 0;j < 81;j++) {
         c = fgetc(input);
         handler[j][i] = c;
     }
 }
    fclose(input);
    input2 = fopen("encryptfile.txt", "w");
    for(int k = 0;k < str.length();k++) {
        for(int l = 0;l < 81;l++) {
         if(str[k] == handler[l][0]) {
            str[k] = handler[l][1];
            break;
         }
     }
 }
    fprintf(input2, "%s", str.c_str());
    fclose(input2);
    
    return str;
}



