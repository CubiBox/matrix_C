#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "base/base.c"

void hello(void) {
    printf("run\n");
}

unsigned int index_vector = 0;
const unsigned int MAX_VECTOR = 100;
Vector3D **vectors;

void addVector(Vector3D *vec){
    if (index_vector < MAX_VECTOR) {
        vectors[index_vector] = vec;
        index_vector++;
    }
}

int main(){
    hello();

    vectors = (Vector3D **) malloc(MAX_VECTOR * sizeof (Vector3D *));

    //Base base;
    Matrix3D mat;
    Vector3D vec1;
    Vector3D vec2;
    Vector3D vec3;

    vec1 = newVector3D(1, 0, 0);
    vec2 = newVector3D(0, 1, 0);
    vec3 = newVector3D(0, 0, 1);

    mat = newMatrix3D(&vec1, &vec2, &vec3);
    printMatrix3D(&mat);

    //base = newBase(&mat, 10, 10);
    //printGrid(&base);

    Vector3D v;
    v = newVector3D(1, 2, 3);
    printVector(&v);

    matrix_mul_to_vector(&mat, &v);
    printVector(&v);
}
