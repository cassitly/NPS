#ifndef NPS_COMMANDLINE_H
#define NPS_COMMANDLINE_H

#include <string>

class CommandLine {
public:
    // Constructor
    CommandLine();

    // Function to parse command-line arguments
    void parseArguments(int argc, char** argv);

    // Function to run the build command with the specified config file
    void runBuild(const std::string& config_file);

private:
    // Path to the config file (provided through command-line argument)
    std::string config_file_;
};

#endif // NPS_COMMANDLINE_H
