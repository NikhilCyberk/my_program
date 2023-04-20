#include <fstream>
#include <algorithm>

void mergeFiles(const std::string &file1, const std::string &file2, const std::string &outputFile)
{
    // Open input files
    std::ifstream input1(file1);
    std::ifstream input2(file2);

    // Open output file
    std::ofstream output(outputFile);

    // Read initial elements from input files
    int element1, element2;
    if (input1 >> element1 && input2 >> element2)
    {
        while (true)
        {
            // Write smaller element to output file
            if (element1 < element2)
            {
                output << element1 << std::endl;
                if (input1 >> element1)
                    continue;
            }
            else
            {
                output << element2 << std::endl;
                if (input2 >> element2)
                    continue;
            }

            // If we reach this point, we've exhausted one of the input files
            break;
        }
    }

    // Write remaining elements from input files to output file
    while (input1 >> element1)
    {
        output << element1 << std::endl;
    }
    while (input2 >> element2)
    {
        output << element2 << std::endl;
    }
}
int main()
{
    std::string file1 = "file1.txt";
    std::string file2 = "file2.txt";
    std::string outputFile = "output.txt";

    mergeFiles(file1, file2, outputFile);

    // Print sorted output
    std::ifstream output(outputFile);
    int element;
    while (output >> element)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
