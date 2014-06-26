/*
 * Author: Howard Fung
 * Description: Prints YES if number can be split into
 * two even numbers, no otherwise
 * http://codeforces.com/problemset/problem/4/A
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int after;
    int input = atoi(argv[1]);
    after = (input / 2)*2;

    if(input <= 3 || input > 100)
    {
        printf("NO\n");
        return 0;
    }
    else if(after == input)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

