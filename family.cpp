#include "family.h"

#include <utility>

namespace lab {
    std::string Family::surname() const {
        return surname_;
    }

    size_t Family::member_count() const {
        return member_count_;
    }

    void Family::member_count(const size_t member_count) {
        member_count_ = member_count;
    }

    unsigned long long Family::monthly_salary() const {
        return monthly_salary_;
    }

    void Family::monthly_salary(const unsigned long long monthly_salary) {
        monthly_salary_ = monthly_salary;
    }

    Family::Family(std::string surname, const size_t member_count, const long long monthly_salary)
            : surname_(std::move(surname)), member_count_(member_count), monthly_salary_(monthly_salary) {}
}

std::ostream &operator<<(std::ostream &output, const lab::Family &family) {
    return output << "Family {surname=" << family.surname()
                  << ", member_count=" << family.member_count()
                  << ", monthly_salary=" << family.monthly_salary()
                  << "}";
}
