#include <iostream>
#include <fstream>
#include <string>
#include "config/generate_config.h"
#include <sstream>

void generateBuildConf(const std::string &templateFile, const std::string &outputFile) {
    // Open the template file
    std::ifstream templateStream(templateFile);
    if (!templateStream.is_open()) {
        std::cerr << "Error opening template file!" << std::endl;
        return;
    }

    // Read the template contents into a string
    std::stringstream templateBuffer;
    templateBuffer << templateStream.rdbuf();
    std::string templateContent = templateBuffer.str();

    // Here, you can replace placeholders or modify the template content as needed
    // Example: Replace a placeholder with actual data
    std::string author = "set your author";  // This can be input dynamically
    std::string version = "1.0.0";   // This can be input dynamically

    // Replace placeholders with actual values
    size_t pos;
    while ((pos = templateContent.find("{{author}}")) != std::string::npos) {
        templateContent.replace(pos, 9, author);
    }
    while ((pos = templateContent.find("{{version}}")) != std::string::npos) {
        templateContent.replace(pos, 10, version);
    }

    // Open the output file to write the generated config
    std::ofstream outputStream(outputFile);
    if (!outputStream.is_open()) {
        std::cerr << "Error opening output file!" << std::endl;
        return;
    }

    // Write the modified template content to the output file
    outputStream << templateContent;

    // Close the streams
    templateStream.close();
    outputStream.close();

    std::cout << "build.conf generated successfully!" << std::endl;
}
