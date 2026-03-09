// Translation unit kept separate to satisfy your build target layout.
// All implementations are header-only in include/lob/price_levels.hpp.
#include "lob/price_levels.hpp"

namespace lob {
std::unique_ptr<IPriceLevels> make_bid_levels() {
    return std::make_unique<PriceLevels<Side::Bid>>();
}
std::unique_ptr<IPriceLevels> make_ask_levels() {
    return std::make_unique<PriceLevels<Side::Ask>>();
}
}  // namespace lob
