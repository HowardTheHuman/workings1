/*
 * Author: Howard Fung
 * Description: Simple codeforce challenge to calculate 
 * the ceiling of an area being covered by tiles
 * http://codeforces.com/problemset/problem/1/A
 */

#include <stdio.h>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    
    int tiles;

   //error checking
   if(argc != 4){
       printf("Wrong number of inputs");
       return 0;
   }
    
   int n = atoi(argv[1]);
   int m = atoi(argv[2]);
   int a = atoi(argv[3]);
   tiles = ((n+a - 1) / a)*((m+a - 1) / a);
   printf("%i\n", tiles);
   return 1;
}
