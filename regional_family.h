#ifndef ALGORITHMIC_LANGUAGES_2_LAB_2_REGIONAL_FAMILY_H
#define ALGORITHMIC_LANGUAGES_2_LAB_2_REGIONAL_FAMILY_H


#include <memory>
#include "family.h"
#include "region.h"

namespace lab {

    class RegionalFamily : public Family {

        const std::shared_ptr<Region> region_;
    public:
        RegionalFamily(const std::string &surname, size_t member_count,
                       long long int monthly_salary,
                       std::shared_ptr<Region> region);

        unsigned long long int monthly_salary() const override;

        std::shared_ptr<Region> region() const;
    };
}

std::ostream &operator<<(std::ostream &output, const lab::RegionalFamily &regional_family);


#endif //ALGORITHMIC_LANGUAGES_2_LAB_2_REGIONAL_FAMILY_H
