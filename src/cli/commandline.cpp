#include "cmd/commandline.h"
#include <CLI11.hpp>
#include <iostream>
#include <cstdlib>

CommandLine::CommandLine() : config_file_("") {}

void CommandLine::parseArguments(int argc, char** argv) {
    CLI::App app{"NPS CLI Tool"};

    // Define the --conf option
    app.add_option("--conf", config_file_, "Specify the config file for the build process")
        ->required()
        ->check(CLI::ExistingFile);

    // Parse the command-line arguments
    try {
        app.parse(argc, argv);
        runBuild(config_file_);
    } catch (const CLI::ParseError &e) {
        app.exit(e);
    }
}

void CommandLine::runBuild(const std::string& config_file) {
    // Construct the build command using the provided config file
    std::string command = "NPS.exe build --conf " + config_file;
    std::cout << "Running command: " << command << std::endl;

    // Execute the command
    int result = std::system(command.c_str());

    if (result == 0) {
        std::cout << "Build completed successfully." << std::endl;
    } else {
        std::cout << "Build failed with error code: " << result << std::endl;
    }
}
