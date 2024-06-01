#include <iostream>
#include "logger.h"

// Color codes
const std::string red = "\033[1;31m";    // Red
const std::string yellow = "\033[1;33m"; // Yellow
const std::string green = "\033[1;32m";  // Green
const std::string white = "\033[1;37m";  // White
const std::string reset = "\033[0m";     // Reset color

void Logger::error(const std::string& message) {
    std::cout << red << "[!] " << message << reset << std::endl;
}

void Logger::warning(const std::string& message) {
    std::cout << yellow << "[?] " << message << reset << std::endl;
}

void Logger::success(const std::string& message) {
    std::cout << green << "[+] " << message << reset << std::endl;
}

void Logger::log(const std::string& message) {
    std::cout << white << "[~] " << message << reset << std::endl;
}

int main() {
    Logger::error(":(");
    Logger::warning("Boutta break this whole mf project");
    Logger::success("Successsssffuuuullll");
    Logger::log("Log");
    return 0;
}
