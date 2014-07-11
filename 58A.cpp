/*
 * Author: Howard Fung
 * Description: See if a string contains 'h' 'e' 'l' 'l' 'o' in order.
 * Link: http://codeforces.com/problemset/problem/58/A
 */

#include <stdio.h>
#include <iostream>
#include <string>

int main(void){
   std::string inputStr;  
   std::string hello ("hello");
   int j = 0;
   bool flag = false;

   std::cin >> inputStr;
   int i = 0;
   while(i < inputStr.length()){
        if(inputStr[i] == hello[j]){
            flag = true;
            if(hello[j] == 'o')
                break;
            j++;
        }
        else
            flag = false;
        i++;
   }
   if(flag == true)
       std::cout<<"YES"<<std::endl;
   else
       std::cout<<"NO"<<std::endl;
   return 0;
}
