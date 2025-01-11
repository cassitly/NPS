#ifndef CLI_HANDLER_H
#define CLI_HANDLER_H

#include <string>

// Function to start the CLI tool and process commands
void startCLI();

// Function to execute the NPS command to generate build.conf
// - command: The specific command to run (e.g., "build --config")
void runCommand();

#endif // CLI_HANDLER_H
