#include "parser.h"
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

std::string parseConfig(const std::string& configFilePath) {
    try {
        // Open the config file
        std::ifstream configFile(configFilePath);
        if (!configFile.is_open()) {
            throw std::runtime_error("Unable to open config file: " + configFilePath);
        }

        // Parse the JSON content
        json config;
        configFile >> config;

        // Access keys and handle missing keys
        std::string server = config.contains("SERVER") ? config["SERVER"].get<std::string>() : "default_server";
        bool enabled = config.contains("enabled") ? config["enabled"].get<bool>() : false;

        // Print parsed values (for debugging)
        std::cout << "SERVER: " << server << std::endl;
        std::cout << "Enabled: " << (enabled ? "true" : "false") << std::endl;

        return "Config parsed successfully.";
    } catch (const std::exception& e) {
        std::cerr << "Error parsing config: " << e.what() << std::endl;
        return "Error parsing config.";
    }
}
