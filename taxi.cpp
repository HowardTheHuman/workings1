/*
 * Author: Howard Fung
 * Description: Calculate min amount of taxi's needed to shuttle 
 *              groups of children. Each taxi holds 4 people. 
 *              Each group must stay together.
 *              First input: number of groups
 *              Second input: groups delimited by spaces
 *
 * link: http://codeforces.com/problemset/problem/158/B
 */

#include <stdio.h>
#include <iostream>

int main(void){

    int numOfGroups = 0;
    int groupSize = 0;
    int groups[5] = {};
    int taxiCount = 0;

    std::cin >> numOfGroups;
    for(int i = 0; i < numOfGroups; i++){
        std::cin >> groupSize;
        groups[groupSize]++;
    }

    //groups of 1
    while(groups[1] != 0 ){
        //group of 1 and 3
        if(groups[3] != 0){
            groups[1]--;
            groups[3]--;
            taxiCount++;
        }
        //group of 1 and 2
        else if(groups[2] != 0){
            groups[2]--;
            groups[1]--;
            if(groups[1] != 0 )
                groups[1]--;
            taxiCount++;
        }
        //groups of 1 only
        else{
            int i =0;
            while(i < 4 && groups[1] != 0){
                groups[1]--;
                i++;
            }
            taxiCount++;
        }
    }
    //groups of two
    while(groups[2] != 0){
        if(groups[2] >= 2)
            groups[2]-=2;
        else
            groups[2]--;
        taxiCount++;
        
    }
    //groups of 3
    while(groups[3] != 0 ) {
        groups[3]--;
        taxiCount++;
    }
    //groups of 4
    while(groups[4] != 0 ){
        groups[4]--;
        taxiCount++;
    }
    std::cout << taxiCount << std::endl; 
    return 1;
}

