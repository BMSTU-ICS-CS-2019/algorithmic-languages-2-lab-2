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

        Family(std::string surname, size_t member_count, long long monthly_salary);

        [[nodiscard]] std::string surname() const;

        [[nodiscard]] size_t member_count() const;

        void member_count(size_t member_count);

        [[nodiscard]] unsigned long long monthly_salary() const;

        void monthly_salary(unsigned long long monthly_salary);

        [[nodiscard]] long double average_salary() const;
    };
}

std::ostream &operator<<(std::ostream &output, const lab::Family &family);

#endif //ALGORITHMIC_LANGUAGES_2_LAB_2_FAMILY_H
