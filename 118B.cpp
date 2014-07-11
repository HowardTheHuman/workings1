/*
 * Author: Howard Fung
 * Description: Create a diamond shape with n at the center
 * and numbers decreasing outwards.
 *
 * Link: http://codeforces.com/problemset/problem/118/B
 */

#include <stdio.h>
#include <iostream>

int main(void){
    int n = 0;

    std::cin>>n;
    

    for(int j = n; j >= 0; j--){
        for(int i = 0; i < j; i++ )
            std::cout << "  ";

        for(int i = 0; i<= n-j; i++)
            std::cout<< " " << i;
        for(int i = n-j-1; i>= 0; i--)
            std::cout<< " "<< i; 


        for(int i = 0; i < j; i++ )
            std::cout << "  ";

        std::cout<< std::endl;
    }
    for(int j = 1; j <= n; j++){
        for(int i = 0; i < j; i++ )
            std::cout << "  ";

        for(int i = 0; i<= n-j; i++)
            std::cout<< " " << i;
        for(int i = n-j-1; i>= 0; i--)
            std::cout<< " "<< i; 

        for(int i = 0; i < j; i++ )
            std::cout << "  ";
        std::cout<<std::endl;
    }
    return 0;
}
