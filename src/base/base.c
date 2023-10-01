//
// Created by cubib on 10/1/2023.
//
#include "maths/matrix3D.c"

/**
 * Base contains dimension and a Matrix3D
 */
typedef struct {
    Matrix3D *mat;
    unsigned int width;
    unsigned int height;
}Base;

/**
 * Init new Base
 * @param mat
 * @param width
 * @param height
 * @return new Base
 */
Base newBase(Matrix3D *mat, int width, int height){
    Base base;
    base.mat = mat;
    base.width = width;
    base.height = height;
    return base;
}
/**
 * print base values
 * @param base the base
 */
void printGrid(Base *base){
    printf("w: %d, h: %d\n", base->width,base->height);
    printMatrix3D(base->mat);
}