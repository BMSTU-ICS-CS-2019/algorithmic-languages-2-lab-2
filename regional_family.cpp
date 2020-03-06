#include "regional_family.h"

#include <utility>

namespace lab {
    unsigned long long int RegionalFamily::monthly_salary() const {
        const auto monthly_salary = Family::monthly_salary();
        return monthly_salary >= region_->payout_threshold() ? monthly_salary + region_->per_family_payout()
                                                             : monthly_salary;
    }

    std::shared_ptr<Region> RegionalFamily::region() const {
        return region_;
    }

    RegionalFamily::RegionalFamily(const std::string &surname, size_t member_count,
                                   long long int monthly_salary,
                                   std::shared_ptr<Region> region)
            : Family(surname, member_count, monthly_salary), region_(std::move(region)) {}
}

std::ostream &operator<<(std::ostream &output, const lab::RegionalFamily &regional_family) {
    return output << "Family{surname=" << regional_family.surname()
                  << ", member_count=" << regional_family.member_count()
                  << ", monthly_salary=" << regional_family.monthly_salary()
                  << ", region=" << *regional_family.region()
                  << '}';
}
