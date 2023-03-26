#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("1.txt", ios::binary | ios::ate);
    // open the input file in binary mode and set the stream position to the end of the file

    int inputFileSize = input.tellg(); // get the current stream position, which is the size of the file

    input.close(); // close the input file

    cout << "Input file size is " << inputFileSize << " bytes." << endl;
    return 0;
}
