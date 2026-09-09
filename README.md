# C++ Image-to-ASCII Converter

A C++ command-line application that converts images (`.png`, `.jpg`) into custom ASCII art printed directly to your terminal.

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)
![Dependencies](https://img.shields.io/badge/Dependencies-stb__image-green.svg)

## Features

* **Perceptual Luminance Mapping:** Uses the standard ITU-R BT.709 luminance formula (`0.2126R + 0.7152G + 0.0722B`) to convert RGB pixels into realistic grayscale ASCII characters.
* **Alpha Channel Support:** Automatically handles transparent `.png` files by rendering transparent pixels as whitespace (`" "`).
* Built using `stb_image.h`

## 📦 How to Build & Run

1. **Clone the repository:**
   ```bash
   git clone https://github.com/ondra-honc/Ascii-Converter.git
   cd AsciiConverter
   ```
2. **Add your image:**
   Place your target image inside the root directory alongside your source code.
3. **Run:** Run the project inside your IDE
