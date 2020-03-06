#ifndef ALGORITHMIC_LANGUAGES_2_LAB_2_FAMILY_H
#define ALGORITHMIC_LANGUAGES_2_LAB_2_FAMILY_H


#include <ostream>
#include <string>

namespace lab {

    class Family {
    protected:

        const std::string surname_;
        size_t member_count_;
        unsigned long long monthly_salary_;

    public:

        std::string surname() const;

        size_t member_count() const;

        unsigned long long monthly_salary() const;

        long double average_salary() const {
            return static_cast<long double>(monthly_salary_) / member_count_;
        }
    };
}

std::ostream &operator<<(std::ostream &output, const lab::Family &family);

#endif //ALGORITHMIC_LANGUAGES_2_LAB_2_FAMILY_H
