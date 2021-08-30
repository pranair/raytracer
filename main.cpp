#include "vec3.h"
#include "color.h"
#include "ray.h"

#include <iostream>

int main(int argc, char *argv[]) {
    const int height = 256;
    const int width = 256;

    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    for (int j = 0; j < height; j++) {
        std::cerr << "\rScanlines remaining: " << j << " " << std::flush;
        for (int i = 0; i < width; i++) {
            color pixel_color(double(i)/(width-1), double(j)/(height-1), 0.25);
            write_color(std::cout, pixel_color);
        }
    }

    std::cerr << "\nDone!\n";

    return 0;
}

