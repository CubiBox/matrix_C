//
// Created by cubib on 10/1/2023.
//
#include "vector3D.c"

typedef struct {
    Vector3D *vec1;
    Vector3D *vec2;
    Vector3D *vec3;
}Matrix3D;

/**
 * Init new Matrix3D
 * @param vec1
 * @param vec2
 * @param vec3
 * @return
 */
Matrix3D newMatrix3D(Vector3D *vec1, Vector3D *vec2, Vector3D *vec3){
    Matrix3D mat;
    mat.vec1 = vec1;
    mat.vec2 = vec2;
    mat.vec3 = vec3;
    return mat;
}

/**
 * @param mat the matrix to apply to the vector
 * @param vec the vector to modify
 */
void matrix_mul_to_vector(Matrix3D *mat, Vector3D *vec){
    double x = mat->vec1->x * vec->x + mat->vec2->x * vec->y + mat->vec3->x * vec->z;
    double y = mat->vec1->y * vec->x + mat->vec2->y * vec->y + mat->vec3->y * vec->z;
    double z = mat->vec1->z * vec->x + mat->vec2->z * vec->y + mat->vec3->z * vec->z;
    vec->x = x;
    vec->y = y;
    vec->z = z;
}