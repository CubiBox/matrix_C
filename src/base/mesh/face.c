//
// Created by cubib on 10/1/2023.
//
#include <stdio.h>
#include "../maths/vector3D.c"

/**
 * Face contains list of vector
 */
typedef struct {
    Vector3D **vectors;
}Face;

Face newFace(Vector3D **vectors){
    Face face;
    face.vectors = vectors;
    return face;
}