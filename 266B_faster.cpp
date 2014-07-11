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
    int pplCnt = 0;
    int time = 0;

    std::cin >> pplCnt >> time;
    int pos = 0;
    char gender = ' ';
    std::vector<int> bPos;

    while(pos < pplCnt ){
       std::cin >> gender;
       if(gender == 'B'){
           bPos.push_back(pos);
       }
       pos++;
    }
    std::vector<int>::iterator begin = bPos.begin();
    std::vector<int>::iterator end = bPos.end();

    std::priority_queue<int> boyPos (begin, end); 
    //check if B is followed by G in a loop by checking if the top 2 numbers are
    //equal. increment and re-push onto the queue. 

    //TODO: ......
    std::priority_queue<int> afterQueue (begin, end); 
    for(int i = 0; i < time; i++){
        for(int j= 0; j < boyPos.size(); j++){
            int frontBoy = boyPos.top();
            boyPos.pop();
            int nextBoy = boyPos.top();
            boyPos.pop();
            if(frontBoy+1 != nextBoy){ //first boy is not consec with second
                frontBoy+=1;
                afterQueue.push(frontBoy);
                frontBoy = nextBoy;
                nextBoy = boyPos.top();
                boyPos.pop();
            }
        }
    }

}
