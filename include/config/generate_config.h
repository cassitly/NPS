#ifndef GENERATE_BUILD_CONF_H
#define GENERATE_BUILD_CONF_H

#include <string>

// Function to generate build.conf from the template
// - templateFile: Path to the template file (e.g., "resources/config/build.conf")
// - outputFile: Path to the output file where the generated build.conf will be saved
void generateBuildConf(const std::string &templateFile, const std::string &outputFile);

#endif // GENERATE_BUILD_CONF_H
