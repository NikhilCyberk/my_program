/*#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <fstream>
#include <Windows.h>

// function to create an image from binary string
void createImageFromBinary(const std::string &binary_string, const std::string &filename, const int &width, const int &height)
{
    // create image data from binary string
    std::vector<unsigned char> image_data;
    for (size_t i = 0; i < binary_string.length(); i++)
    {
        if (binary_string[i] == '0')
        {
            image_data.push_back(255); // white pixel
            image_data.push_back(255);
            image_data.push_back(255);
        }
        else if (binary_string[i] == '1')
        {
            image_data.push_back(0); // black pixel
            image_data.push_back(0);
            image_data.push_back(0);
        }
    }

    // create the BITMAPINFOHEADER structure
    BITMAPINFOHEADER bmp_info_header;
    bmp_info_header.biSize = sizeof(BITMAPINFOHEADER);
    bmp_info_header.biWidth = width;
    bmp_info_header.biHeight = -height; // negative height to indicate a top-down DIB
    bmp_info_header.biPlanes = 1;
    bmp_info_header.biBitCount = 24; // 24 bits per pixel
    bmp_info_header.biCompression = BI_RGB;
    bmp_info_header.biSizeImage = 0;
    bmp_info_header.biXPelsPerMeter = 0;
    bmp_info_header.biYPelsPerMeter = 0;
    bmp_info_header.biClrUsed = 0;
    bmp_info_header.biClrImportant = 0;

    // create the BITMAPINFO structure
    BITMAPINFO bmp_info;
    bmp_info.bmiHeader = bmp_info_header;
    bmp_info.bmiColors[0] = {0, 0, 0, 0}; // unused color

    // create the DIB section
    void *bits = nullptr;
    HDC dc = ::GetDC(nullptr);
    HBITMAP dib = CreateDIBSection(dc, &bmp_info, DIB_RGB_COLORS, &bits, nullptr, 0);
    ::ReleaseDC(nullptr, dc);

    // set the pixels of the DIB
    int row_padding = (4 - ((width * 3) % 4)) % 4;
    unsigned char *p = static_cast<unsigned char *>(bits);
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            p[0] = image_data[(y * width + x) * 3 + 2]; // blue
            p[1] = image_data[(y * width + x) * 3 + 1]; // green
            p[2] = image_data[(y * width + x) * 3];     // red
            p += 3;
        }
        p += row_padding;
    }

    // save the DIB to a BMP file
    std::ofstream bmp_file(filename, std::ios::out | std::ios::binary);
    bmp_file.write(reinterpret_cast<const char *>(&bmp_info_header), sizeof(bmp_info_header));
    bmp_file.write(reinterpret_cast<const char *>(image_data.data()), image_data.size());
    bmp_file.close();

    // release the DIB
    DeleteObject(dib);
}

/*#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <fstream>
#include "CImg.h"

using namespace cimg_library;

// function to create an image from binary string
void createImageFromBinary(const std::string &binary_string, const std::string &filename, const int &width, const int &height)
{
    // create image data from binary string
    std::vector<unsigned char> image_data;
    for (size_t i = 0; i < binary_string.length(); i++)
    {
        if (binary_string[i] == '0')
        {
            image_data.push_back(255); // white pixel
        }
        else if (binary_string[i] == '1')
        {
            image_data.push_back(0); // black pixel
        }
    }

    // create the image using CImg
    CImg<unsigned char> image(&image_data[0], width, height);

    // save the image to file
    image.save_png(filename.c_str());
}
*/
/*int main()
{
    std::string binary_string = "0101101001010111";
    std::string filename = "binary_image.png";
    int width = 4;
    int height = binary_string.length() / width;

    createImageFromBinary(binary_string, filename, width, height);

    return 0;
}
*/

#include <iostream>
#include <Windows.h>

int main() {
    int width = 4;
    int height = 4;
    int bytes_per_pixel = 3;
    int stride = width * bytes_per_pixel;
    BYTE* pixels = new BYTE[height * stride];
    
    // set pixel values
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            int index = row * stride + col * bytes_per_pixel;
            pixels[index + 0] = 255; // red
            pixels[index + 1] = 0; // green
            pixels[index + 2] = 0; // blue
        }
    }

    // create bitmap info header
    BITMAPINFOHEADER bmp_info_header = { 0 };
    bmp_info_header.biSize = sizeof(BITMAPINFOHEADER);
    bmp_info_header.biWidth = width;
    bmp_info_header.biHeight = height;
    bmp_info_header.biPlanes = 1;
    bmp_info_header.biBitCount = bytes_per_pixel * 8;
    bmp_info_header.biCompression = BI_RGB;

    // create bitmap info
    BITMAPINFO bmp_info = { 0 };
    bmp_info.bmiHeader = bmp_info_header;

    // create device context
    HDC hdc = GetDC(NULL);
    
    // create bitmap from pixel data
    HBITMAP hbitmap = CreateDIBitmap(hdc, &bmp_info_header, CBM_INIT, pixels, &bmp_info, DIB_RGB_COLORS);

    // release device context
    ReleaseDC(NULL, hdc);
    
    // save bitmap to file
    int result = SaveBitmapToFile(hbitmap, "test.bmp");
    if (result != 0) {
        std::cout << "Failed to save bitmap to file." << std::endl;
    }

    // free memory
    delete[] pixels;

    return 0;
}
