#include <iostream>
#include "gui.h"

void generateCLITool() {
    std::cout << "Generating CLI developer tool in the current directory...\n";
    // Simulation of CLI generation
    std::cout << "CLI tool generated successfully!\n";
}

void startGUI() {
    int guiChoice;
    std::cout << "GUI for Plugin Creation\n";
    std::cout << "1. Use GUI to create a plugin\n";
    std::cout << "2. Generate CLI developer tool\n";
    std::cout << "Enter your choice: ";
    std::cin >> guiChoice;

    if (guiChoice == 1) {
        std::cout << "Opening GUI for plugin creation...\n";
    } else if (guiChoice == 2) {
        generateCLITool();
    } else {
        std::cout << "Invalid choice. Returning to main menu.\n";
    }
}
