/*
 * Author: Howard Fung
 * Description: Input a number of people, a time, and a list of B's or G's 
 *              in sequence. Each tick of the time will move B's behind a G
 *              if there is a following G. 
 *
 * Link: http://codeforces.com/problemset/problem/266/B
 */

#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

int main (void) {
    int pplCnt= 0;
    int time = 0;
    char gender = ' ';
    std::vector<char> bPos;

    std::cin>> pplCnt >> time;
    int k = 0;
    while(k < pplCnt){
        std::cin>>gender;
        bPos.push_back(gender);
        k++;
    }
    
    for(int i = 0; i < time; i++){
        for(int j = 0; j < bPos.size(); j++){
            if(bPos[j] == 'B' && bPos[j+1] == 'G'){
                bPos[j] = 'G';
                bPos[j+1] = 'B';
                j++;
                }
            //iterate through the vector and check values of G / B
        }
    }

    int i = 0;
    while(i < bPos.size()){
        std::cout << bPos[i];
        i++;
    }
    std::cout<<std::endl;
    

}
