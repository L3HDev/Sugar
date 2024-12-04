#include "cli-output-manager.h"

#include <iostream>

namespace util::output
{
    void CliOutputManager::append_msg(const OutputMessage& msg)
    {
        if (msg.verbosity <= verbosity)
        {
            std::cout << msg.msg << std::endl;
        }
    }
}