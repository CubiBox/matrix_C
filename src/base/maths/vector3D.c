//
// Created by cubib on 10/1/2023.
//

#include <stdio.h>

typedef struct {
    double x;
    double y;
    double z;
} Vector3D;

Vector3D newVector3D(double x, double y, double z){
    Vector3D vec;
    vec.x = x;
    vec.y = y;
    vec.z = z;
    return vec;
}

/**
 * @param vec the vector to modify
 * @param val the value to add to each values of the vector
 */
void vector_add_val(Vector3D *vec, double val){
    vec->x += val;
    vec->y += val;
    vec->z += val;
}

/**
 * @param vec1 the vector to modify
 * @param vec2 the vector to add to each values of the vector
 */
void vector_add_vec(Vector3D *vec1, Vector3D *vec2){
    vec1->x += vec2->x;
    vec1->y += vec2->y;
    vec1->z += vec2->z;
}


/**
 * @param vec the vector to modify
 * @param val the value to sub to each values of the vector
 */
void vector_sub_val(Vector3D *vec, double val){
    vec->x -= val;
    vec->y -= val;
    vec->z -= val;
}

/**
 * @param vec1 the vector to modify
 * @param vec2 the vector to sub to each values of the vector
 */
void vector_sub_vec(Vector3D *vec1, Vector3D *vec2){
    vec1->x -= vec2->x;
    vec1->y -= vec2->y;
    vec1->z -= vec2->z;
}


/**
 * @param vec the vector to modify
 * @param val the value to mul to each values of the vector
 */
void vector_mul_val(Vector3D *vec, double val){
    vec->x *= val;
    vec->y *= val;
    vec->z *= val;
}

/**
 * @param vec1 the vector to modify
 * @param vec2 the vector to mul to each values of the vector
 */
void vector_mul_vec(Vector3D *vec1, Vector3D *vec2){
    vec1->x *= vec2->x;
    vec1->y *= vec2->y;
    vec1->z *= vec2->z;
}


/**
 * @param vec the vector to modify
 * @param val the value to div to each values of the vector
 */
void vector_div_val(Vector3D *vec, double val){
    vec->x /= val;
    vec->y /= val;
    vec->z /= val;
}

/**
 * @param vec1 the vector to modify
 * @param vec2 the vector to div to each values of the vector
 */
void vector_div_vec(Vector3D *vec1, Vector3D *vec2){
    vec1->x /= vec2->x;
    vec1->y /= vec2->y;
    vec1->z /= vec2->z;
}

/**
 * print vector values
 * @param vec
 */
void printVector(Vector3D *vec){
    printf("Vector3D : { x: %f, y: %f, z: %f}\n", vec->x, vec->y, vec->z);
}