#include "include/surgery.h"
#include <iostream>

int main()
{
    std::cout <<"Enter command (scalpel/hemostat/suture)";
    std::string sur;
    double x, y, x1, y1;
    do {
        if (sur == "scalpel") {
            std::cout << sur_incision(x, x1, y, y1);
        }
        else if (sur == "hemostat") {

        }
    }while(sur != "suture");
    return 0;
}
