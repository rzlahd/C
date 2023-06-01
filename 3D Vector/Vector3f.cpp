#include <stdio.h>

struct Vector3f {
    float x; float y; float z;

    Vector3f() {}

    Vector3f(float _x, float _y, float _z) {
        x = _x; y = _y; z = _z;
    }

    Vector3f(const float* pFloat) {
        x = pFloat[0]; y = pFloat[0]; z = pFloat[0];
    }

    Vector3f(float f) {
        x = y = z = f;
    }

    Vector3f& operator+=(const Vector3f& r) {
        x += r.x; y += r.y; z += r.z;

        return *this;
    }

    Vector3f& operator-=(const Vector3f& r) {
        x -= r.x; y -= r.y; z -= r.z;

        return *this;
    }

    Vector3f& operator*=(float f) {
        x *= f; y *= f; z *= f;

        return *this;
    }

    operator const float*() const {
        return &(x);
    }


    Vector3f Cross(const Vector3f& v) const;

    Vector3f& Normalize();

    void Rotate(float Angle, const Vector3f& Axis);

    void Print() const {
        printf("(%.02f, %.02f, %.02f)", x, y, z);
    }
};
