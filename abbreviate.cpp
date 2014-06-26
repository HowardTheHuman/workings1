/*
 * Author: Howard Fung
 * Description: Abbreviate words longer than 10 letters with notation
 *              [first letter][number of letters removed][last letter]
 *              Example: "localization" becomes "l10n"
 *
 *              http://codeforces.com/problemset/problem/71/A
 */

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main(void){
    int lines = 0;
    string strings[100];

    cin>>lines;
    for(int i = 0; i < lines; i++){
        cin >> strings[i];
    }
    cout << endl;
    for(int i = 0; i < lines; i++ ){
        if(strings[i].length() > 10){
            cout<< strings[i].at(0) << strings[i].length()-2 << 
                   strings[i].at(strings[i].length()-1)<< endl;
        }
        else
            cout << strings[i] << endl;;
    }
    return 1;
}
