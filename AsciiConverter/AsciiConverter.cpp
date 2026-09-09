#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#include <iostream>

char getAsciiChar(unsigned char r, unsigned char g, unsigned char b)
{
	double luminance = (0.2126 * r) + (0.7152 * g) + (0.0722 * b);

	std::string ramp = ".:-=+*#%@";

	int index = static_cast<int>((luminance / 255.0) * (ramp.length() - 1));

	return ramp[index];
}

int main()
{
	int width, height, channels;

	unsigned char* img = stbi_load("super-mario.png", &width, &height, &channels, 4);

  for (int y = 0; y < height; y++)
  {
    for (int x = 0; x < width; x++)
    {
      int index = (y * width + x) * 4;

      unsigned char r = img[index];
      unsigned char g = img[index + 1];
      unsigned char b = img[index + 2];
      unsigned char alpha = img[index + 3];

      if (alpha < 128)
      {
        std::cout << " ";
      }
      else
      {
        std::cout << getAsciiChar(r, g, b);
      }
    }
    std::cout << "\n";
  }

	stbi_image_free(img);

	return 0;
}