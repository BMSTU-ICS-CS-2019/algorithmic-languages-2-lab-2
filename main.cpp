#include <iostream>
#include "regional_family.h"

int main() {
    lab::Region region("MSK", 10000, 20000);
    lab::RegionalFamily family_1(
            "Greens", 4, 100000, std::make_shared<lab::Region>(region)
    );
    lab::RegionalFamily family_2(
            "Blacks", 7, 93000, std::make_shared<lab::Region>(region)
    );

    std::cout << "Family 1: " << family_1 << std::endl;
    std::cout << "Family 2: " << family_2 << std::endl;

    return 0;
}