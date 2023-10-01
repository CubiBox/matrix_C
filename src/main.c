#include "main.h"
#include <stdio.h>
#include "base/base.c"

void hello(void) {
    printf("run\n");
}

int main(){
    hello();

    Base base;
    Matrix3D mat;
    Vector3D vec1;
    Vector3D vec2;
    Vector3D vec3;

    vec1 = newVector3D(0, 1, 0);
    vec2 = newVector3D(1, 0, 0);
    vec3 = newVector3D(0, 0, 1);

    mat = newMatrix3D(&vec1, &vec2, &vec3);

    base = newBase(&mat, 10, 10);
    printGrid(&base);

    Vector3D v;
    v = newVector3D(1, 2, 3);

    printVector(&v);
    matrix_mul_to_vector(base.mat, &v);
    printVector(&v);
}
