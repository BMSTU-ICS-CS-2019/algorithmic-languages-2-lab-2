#include "family.h"

namespace lab {
    std::string Family::surname() const {
        return surname_;
    }

    size_t Family::member_count() const {
        return member_count_;
    }

    unsigned long long Family::monthly_salary() const {
        return monthly_salary_;
    }
}

std::ostream &operator<<(std::ostream &output, const lab::Family &family) {
    return output << "Family {surname=" << family.surname()
                  << ", member_count=" << family.member_count()
                  << ", monthly_salary=" << family.monthly_salary()
                  << "}";
}
