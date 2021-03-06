#ifndef PASSWORD_FILE_UTIL_OPENSSLRANDOMDEVICE_H
#define PASSWORD_FILE_UTIL_OPENSSLRANDOMDEVICE_H

#include "../global.h"

#include <cstdint>
#include <limits>

namespace Util {

class PASSWORD_FILE_EXPORT OpenSslRandomDevice {
public:
    using result_type = std::uint32_t;

    OpenSslRandomDevice();
    result_type operator()() const;
    bool status() const;
    static constexpr result_type min();
    static constexpr result_type max();
};

constexpr OpenSslRandomDevice::result_type OpenSslRandomDevice::min()
{
    return std::numeric_limits<result_type>::min();
}

constexpr OpenSslRandomDevice::result_type OpenSslRandomDevice::max()
{
    return std::numeric_limits<result_type>::max();
}

} // namespace Util

#endif // PASSWORD_FILE_UTIL_OPENSSLRANDOMDEVICE_H
