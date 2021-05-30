#include <iostream>

int main() {
    // Image Dimensions
    const int image_width = 256;
    const int image_height = 256;

    // Render
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    // Pixels written out in rows left to right
    for (int j = image_height-1; j >= 0; j--) {

    // Rows written out top to bottom
        for (int k = 0; k < image_width; k++) {

            //RGB values range from 0.0 to 1.0
            auto r = double(k) / (image_width-1);
            auto g = double(j) / (image_height-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}