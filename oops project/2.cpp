#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream output_file("output.txt");
    std::ifstream file("input.txt", std::ios::binary);
    if (file)
    {
        std::ostringstream ss;
        ss << file.rdbuf();
        std::string binary_string = std::bitset<8>(ss.str()[0]).to_string();
        for (size_t i = 1; i < ss.str().size(); i++)
        {
            binary_string += std::bitset<8>(ss.str()[i]).to_string();
        }
        output_file << binary_string << std::endl;
        std::cout << binary_string << std::endl;
    }
    else
    {
        std::cerr << "Error: could not open file" << std::endl;
    }
    return 0;
}
