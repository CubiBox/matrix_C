#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "base/base.c"
#include "base/mesh/polygon.c"

void hello(void) {
    printf("run\n");
}

/*
unsigned int index_vector = 0;
#define MAX_VECTOR 100;
Vector3D **vectors;

void addVector(Vector3D *vec){
    if (index_vector < MAX_VECTOR) {
        vectors[index_vector] = vec;
        index_vector++;
    }
}

void addAllVector(Vector3D *vec, ...){
    if (index_vector < MAX_VECTOR) {
        vectors[index_vector] = vec;
        index_vector++;
    }
}
 */

Vector2D toScreen(Vector3D *vec){
    Vector2D vec2d;
    vec2d.x = vec->x;
    vec2d.y = vec->y + vec->z;
    return vec2d;
}

int main(){
    hello();

    //vectors = (Vector3D **) malloc(MAX_VECTOR * sizeof (Vector3D *));

    //Base base;
    Matrix3D mat;
    Vector3D vec1 = newVector3D(1, 0, 0);;
    Vector3D vec2 = newVector3D(0, 1, 0);;
    Vector3D vec3 = newVector3D(0, 0, 1);;

    mat = newMatrix3D(&vec1, &vec2, &vec3);
    printMatrix3D(&mat);

    //base = newBase(&mat, 10, 10);
    //printGrid(&base);

    Vector3D v;
    v = newVector3D(1, 2, 3);
    printVector(&v);

    matrix_mul_to_vector(&mat, &v);
    printVector(&v);

    Vector2D vec2d1 = toScreen(&vec1);
    Vector2D vec2d2 = toScreen(&vec2);
    Vector2D vec2d3 = toScreen(&vec3);


    GsPoly3 pol3;
    pol3 = newPolygon3(100, 120, 120, &vec2d1, &vec2d2, &vec2d3);

    printPol3(&pol3);
}
