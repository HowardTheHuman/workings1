/*
 * Author: Howard Fung
 * Description: Scores, and passing to the next round
 * Input: [number of scores] [ith place to check score for min passing]\n
 *        [list of scores equal to [number of scores]]
 * http://codeforces.com/problemset/problem/158/A
 */

#include <iostream>
#include <string>
#include <stdio.h>

int main(int argc, char* argv[]){
    int numScores = 0;
    int place;
    int advCount = 0;
    int minScore;
    int scores[50] = {};
    
    std::cin >> numScores >> place;
    //put scores into array
    for(int i = 0; i < numScores; i++)
      std::cin >> scores[i];

    minScore = scores[place]; 
    place = place-1;
    //go right until we reach a smaller score
    while(scores[place] >=minScore && place < 50)
        place++;
    place--;
    //record number of scores greater than or equal to
    while(place >= 0){
        if(scores[place] != 0)
            advCount++; 
        place--;
    }
    printf("%i\n", advCount);
    return 0;
}
