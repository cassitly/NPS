#include <iostream>
#include "cli.h"

void startCLI() {
    std::cout << "CLI Developer Tool\n";
    std::cout << "Available commands:\n";
    std::cout << "1. build --config: Generate build.conf template\n";
    std::cout << "2. build --init: Initialize the build process\n";
    std::cout << "3. build --debug: Debug the plugin\n";
    std::cout << "4. package --build: Package the plugin\n";
    std::cout << "Use arguments in the format: NPS.exe <command> <option>\n";
}
