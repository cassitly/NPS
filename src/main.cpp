#include <iostream>
#include "parser.h"
#include "gui.h"
#include "cli.h"
#include "build_manager.h"
#include "debug_manager.h"
#include "executor_manager.h"

int main() {
    int choice;
    std::cout << "Welcome to NPS (New Plugin System)\n";
    std::cout << "1. Create a new plugin\n";
    std::cout << "2. Install a plugin\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1) {
        // Example usage of parser
        const std::string configPath = "resources/config/build.conf";
        parseConfig(configPath);

        // Example usage of GUI
        launchGUI("path/to/project");

        // Example usage of CLI
        startCLI("init");

        // Example usage of build manager
        initBuild("path/to/build");
        packagePlugin("path/to/plugin");

        // Example usage of debug manager
        startDebug("path/to/plugin");

        // Example usage of executor manager
        executeCustom("path/to/executor");

    } else if (choice == 2) {
        std::cout << "Plugin installation feature coming soon!\n";
    } else {
        std::cout << "Invalid choice. Exiting.\n";
    }

    return 0;
}