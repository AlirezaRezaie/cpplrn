#include <iostream>
#include <cstring>
extern "C" {
  #include "header.h" //a C header, so wrap it in extern "C".
}
#include <print.h> // it's a cpp function so we can directly include it.

int main(){
    //to clear console
    std::cout << "\x1B[2J\x1B[H";
    int x;
    print("starting");
    std::cin >> x;
    print(std::to_string(x+10));
    print(std::to_string(sum(2,9)));

}

