#pragma once

#include <node/i-node.hpp>


namespace parser
{
    std::pair<std::string, std::string> cmd_line(int argc, char const* argv[]);
    u_inode_ptr deserialize(const std::string& str);
    bool check_deserialize(const std::string& str) noexcept;
};
