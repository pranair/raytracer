#pragma once

#include "vec3.h"

class ray {
    public:
        ray() {}
        rec(const point3& origin, const vec3& direction) 
            : orig {orig}, dir{direction} {}
    
        point3 origin() const { return orig; }
        vec3 direction() const { return dir; }

        point3 at(double t) const {
            return orig + t*dir;
        }

    private:
        point3 orig;
        vec3 dir;
            
}
