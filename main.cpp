#include <iostream>
#include "regional_family.h"

int main() {
    lab::Region region("MSK", 100, 0.5);
    lab::RegionalFamily family_1(
            "Greens", 4u, 100000, std::make_shared<lab::Region>(region)
    );
    lab::RegionalFamily family_2(
            "Other", 4u, 100000, std::make_shared<lab::Region>(region)
    );

    std::cout << "Family 1: " << family_1 << std::endl;
    std::cout << "Family 2: " << family_2 << std::endl;

    return 0;
}