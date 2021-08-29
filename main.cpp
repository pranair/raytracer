#include <iostream>
#include "vec3.h"

int main() {
    const int height = 256;
    const int width = 256;

    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    for (int j = 0; j < width; j++) {
        std::cerr << "\rScanlines remaining: " << j << " " << std::flush;
        for (int i = 0; i < height; i++) {
            auto r = double(i) / (width - 1);
            auto g = double(j) / (width - 1);
            auto b = 0.25;

            auto ir = static_cast<int>(256.999 * r); 
            auto ig = static_cast<int>(256.999 * g); 
            auto ib = static_cast<int>(256.999 * b); 

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    std::cerr << "\nDone!\n";

    return 0;
}
