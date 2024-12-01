#pragma once

#include <functional>
#include <string>

namespace util::output
{
    enum class Verbosity_Level
    {
        Always,
        High,
        Mid,
        Low,
    };

    struct OutputMessage
    {
    public:
        const std::string& msg;
        Verbosity_Level verbosity;
    };

    class IOutputManager
    {
    public:
        virtual void append_msg(const OutputMessage& msg) = 0;

        virtual ~IOutputManager() = default;
    };
}