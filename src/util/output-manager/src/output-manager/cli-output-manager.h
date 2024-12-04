#pragma once

#include "ioutput-manager.h"

namespace util::output
{
    class CliOutputManager : public IOutputManager
    {
    public:
        CliOutputManager(const Verbosity_Level verbosity) : verbosity(verbosity){}

        void append_msg(const OutputMessage& msg) override;

        ~CliOutputManager() = default;

    private:
        Verbosity_Level verbosity;
    };
}