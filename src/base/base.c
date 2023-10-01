//
// Created by cubib on 10/1/2023.
//
#include "maths/matrix3D.c"

typedef struct {
    Matrix3D *mat;
    unsigned int width;
    unsigned int height;
}Base;

Base newBase(Matrix3D *mat, int width, int height){
    Base base;
    base.mat = mat;
    base.width = width;
    base.height = height;
    return base;
}

void printGrid(Base *base){
    printf("w: %d, h: %d\n\t%f\t%f\t%f\n\t%f\t%f\t%f\n\t%f\t%f\t%f\n",
            base->width,base->height,
            base->mat->vec1->x,
            base->mat->vec1->y,
            base->mat->vec1->z,
            base->mat->vec2->x,
            base->mat->vec2->y,
            base->mat->vec2->z,
            base->mat->vec3->x,
            base->mat->vec3->y,
            base->mat->vec3->z);
}