#ifndef ALGORITHMIC_LANGUAGES_2_LAB_2_REGION_H
#define ALGORITHMIC_LANGUAGES_2_LAB_2_REGION_H


#include <ostream>
#include <string>

namespace lab {
    class Region {
    protected:
        const std::string name_;
        unsigned long long per_family_payout_;
        unsigned long long payout_threshold_;
    public:

        Region(std::string name, unsigned long long per_family_payout, unsigned long long payout_threshold);

        [[nodiscard]] std::string name() const;

        [[nodiscard]] unsigned long long per_family_payout() const;

        void per_family_payout(unsigned long long per_family_payout);

        [[nodiscard]] unsigned long long payout_threshold() const;

        void payout_threshold(unsigned long long payout_threshold);
    };
}

std::ostream &operator<<(std::ostream &output, const lab::Region &region);


#endif //ALGORITHMIC_LANGUAGES_2_LAB_2_REGION_H
