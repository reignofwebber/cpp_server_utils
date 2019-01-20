#include <boost/format.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/core.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/utility/setup/file.hpp>

#include <string>
#include <iostream>

void init()
{
    namespace logging = boost::log;

    // logging::add_file_log("sample.log");
    logging::core::get()->set_filter(
        logging::trivial::severity >= logging::trivial::info
    );
    
}

#include "util.hpp"

int main()
{
    using namespace zfutils;

    // auto s = zfutils::fromHexString("41424v");
    // BOOST_LOG_TRIVIAL(info) << s;

    // auto s = zfutils::toHexString("ABCasdflkja");
    // BOOST_LOG_TRIVIAL(info) << s;

    // auto a = zfutils::hex_cast<uint8_t>(fromHexString("ffffffff"));
    // BOOST_LOG_TRIVIAL(info) << (uint32_t)a;

    // BOOST_LOG_TRIVIAL(info) << toHexString(dump_hex<uint32_t>(0xfffffffffff));

    // HexStream hs;

    // hs << (char)(0x12) << (char)(0x34);
    // BOOST_LOG_TRIVIAL(info) << toHexString(hs.str());

    // BinaryStream bs(hs.str());
    // BOOST_LOG_TRIVIAL(info) << std::hex << bs.get<uint16_t>(0, 3, 12);

    std::string s;
    s.resize(5);
    HexStream hs(s);
    BOOST_LOG_TRIVIAL(info) << toHexString(s);

    return 0;
}