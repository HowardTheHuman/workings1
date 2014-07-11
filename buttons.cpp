
#include <stdio.h>
#include <iostream>

int main(void){
    int n;
    int presses = 0;
    std::cin >> n;

    int i = 0;
    while(i != n ){
        presses += (n - i) * i;
        i++;
    }
    presses += n;
    std::cout << presses <<std::endl;

return 0;
}
