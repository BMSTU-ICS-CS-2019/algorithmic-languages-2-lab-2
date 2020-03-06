#ifndef ALGORITHMIC_LANGUAGES_2_LAB_2_REGION_H
#define ALGORITHMIC_LANGUAGES_2_LAB_2_REGION_H


#include <ostream>
#include <string>

namespace lab {
    class Region {
    protected:
        const std::string name_;
        long long per_family_payout_;
        long double payout_threshold_;
    public:

        Region(std::string name, long long per_family_payout, long double payout_threshold);

        [[nodiscard]] std::string name() const;

        [[nodiscard]] long long per_family_payout() const;

        void per_family_payout(long long per_family_payout);

        [[nodiscard]] long double payout_threshold() const;

        void payout_threshold(long double payout_threshold);
    };
}

std::ostream &operator<<(std::ostream &output, const lab::Region &region);


#endif //ALGORITHMIC_LANGUAGES_2_LAB_2_REGION_H
