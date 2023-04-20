#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string source_file_path = "source.txt";
    std::string destination_file_path = "destination.txt";

    try
    {
        // Open the source file for reading
        std::ifstream source_file(source_file_path);
        if (!source_file.is_open())
        {
            throw std::runtime_error("Source file not found.");
        }

        // Open the destination file for writing
        std::ofstream destination_file(destination_file_path);

        // Copy the contents of the source file to the destination file
        std::string line;
        while (std::getline(source_file, line))
        {
            destination_file << line << '\n';
        }

        // Close the files
        source_file.close();
        destination_file.close();

        std::cout << "File copied successfully.\n";
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
