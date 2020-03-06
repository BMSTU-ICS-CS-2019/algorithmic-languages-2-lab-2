#include "region.h"

namespace lab {
    Region::Region(std::string name, long long per_family_payout, long double payout_threshold)
            : name_(std::move(name)), per_family_payout_(per_family_payout), payout_threshold_(payout_threshold) {}

    std::string Region::name() const {
        return name_;
    }

    long long Region::per_family_payout() const {
        return per_family_payout_;
    }

    void Region::per_family_payout(long long per_family_payout) {
        per_family_payout_ = per_family_payout;
    }

    long double Region::payout_threshold() const {
        return payout_threshold_;
    }

    void Region::payout_threshold(long double payout_threshold) {
        payout_threshold_ = payout_threshold;
    }
}

std::ostream &operator<<(std::ostream &output, const lab::Region &region) {
    return output << "Region{name=" << region.name()
                  << ", per_family_payout=" << region.per_family_payout()
                  << ", payout_threshold=" << region.payout_threshold()
                  << '}';
}
