#pragma once

#include <functional>
#include <string>
#include <vector>

namespace util::output
{
    enum class Verbosity_Level
    {
        Always,
        High,
        Mid,
        Low,
        UltraLow
    };

    struct OutputMessage
    {
    public:
        const std::string msg;
        Verbosity_Level verbosity;

        OutputMessage(Verbosity_Level level, const std::string &message)
            : msg(message), verbosity(level) {}

        template <typename... Args>
        OutputMessage(Verbosity_Level level, const std::string &format, Args... args)
            : verbosity(level)
        {
            size_t size = snprintf(nullptr, 0, format.c_str(), args...) + 1; // Extra space for '\0'
            std::vector<char> buf(size);
            snprintf(buf.data(), size, format.c_str(), args...);
            msg = std::string(buf.data(), buf.size() - 1);
        }

        template <typename... Args>
        static OutputMessage create(Verbosity_Level level, const std::string &format, Args... args)
        {
            size_t size = snprintf(nullptr, 0, format.c_str(), args...) + 1; // Extra space for '\0'
            std::vector<char> buf(size);
            snprintf(buf.data(), size, format.c_str(), args...);
            return OutputMessage(level, std::string(buf.data(), buf.size() - 1));
        }
    };


    class IOutputManager
    {
    public:
        virtual void append_msg(const OutputMessage &msg) = 0;

        virtual ~IOutputManager() = default;
    };
}