#pragma once

#include <node/i-node.hpp>

#include <vector>
#include <string>


namespace node
{

const char body_div   = ':';
const char body_start = '{';
const char body_end   = '}';
const char node_div   = ',';
const char node_empty[] = { body_start, body_end };

enum class type { integer, real, string };

}; // node

template <typename T>
class Node: public INode
{
    public:
        explicit Node(T value);
        ~Node() = default;

        Node(const Node&) = delete;            // DOES
        Node(Node&&) = delete;                 // NOT
        Node& operator=(const Node&) = delete; // ALLOW
        Node& operator=(Node&&) = delete;      // ANY KIND OF COPY

        void add_child(u_inode_ptr&& node) override;
        void serialize(std::ofstream& out) noexcept override;

        void debug() noexcept override;
        void print() noexcept override;

    private:
        T value_;
        std::vector<u_inode_ptr> childs_;
};
