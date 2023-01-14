#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string input_file;
    std::string output_file;
    std::string line;

    std::cout << "Enter the name of the input file: ";
    std::cin >> input_file;

    std::cout << "Enter the name of the output file: ";
    std::cin >> output_file;

    std::ifstream in_file(input_file);
    std::ofstream out_file(output_file);

    if (!in_file.is_open()) {
        std::cout << "Could not open input file" << std::endl;
        return 1;
    }

    if (!out_file.is_open()) {
        std::cout << "Could not open output file" << std::endl;
        return 1;
    }

    while (std::getline(in_file, line)) {
        out_file << line << std::endl;
    }

    in_file.close();
    out_file.close();

    std::cout << "File conversion complete!" << std::endl;

    return 0;
}
