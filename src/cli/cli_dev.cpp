#include "config/generate_config.h"
#include <iostream>
#include "cli.h"
#include "cmd/commandline.h"
#include <cstdlib>  // For std::system

void startCLI() {
    runCommand();
}

void runCommand() {
    std::string config_file = "resources/config/build.conf";
    CommandLine commandLine;
    commandLine.runBuild(config_file);
}