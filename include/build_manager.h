#ifndef BUILD_MANAGER_H
#define BUILD_MANAGER_H

#include <string>

// Function to initialize the build process
void initBuild(const std::string& buildPath);

// Function to package the plugin
void packagePlugin(const std::string& pluginPath);

#endif // BUILD_MANAGER_H
