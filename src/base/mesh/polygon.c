//
// Created by cubib on 10/1/2023.
//

#include "face.c"
#include "../maths/vector2D.c"

/**
 * Face contains list of vector
 */
typedef struct {
    unsigned int r;
    unsigned int g;
    unsigned int b;
    Vector2D *vec1;
    Vector2D *vec2;
    Vector2D *vec3;
    Vector2D *vec4;
}GsGPoly4;

/**
 * Face contains list of vector
 */
typedef struct {
    unsigned int r;
    unsigned int g;
    unsigned int b;
    Vector2D *vec1;
    Vector2D *vec2;
    Vector2D *vec3;
}GsGPoly3;

GsGPoly4 newPolygon4(int r, int g, int b, Vector2D *vec1, Vector2D *vec2, Vector2D *vec3, Vector2D *vec4){
    GsGPoly4 pol;
    pol.r = r, pol.g = g, pol.b = b;
    pol.vec1 = vec1;
    pol.vec2 = vec2;
    pol.vec3 = vec3;
    pol.vec4 = vec4;
}

GsGPoly3 newPolygon3(int r, int g, int b, Vector2D *vec1, Vector2D *vec2, Vector2D *vec3){
    GsGPoly4 pol;
    pol.r = r, pol.g = g, pol.b = b;
    pol.vec1 = vec1;
    pol.vec2 = vec2;
    pol.vec3 = vec3;
}

void printPol4(GsGPoly4 *pol){
    printf("GsGPol4 : [\n\tr: %d, g: %d, b: %d\n\t", pol->r, pol->g, pol->b);
    printVector2D(pol->vec1);
    printf("\t");
    printVector2D(pol->vec2);
    printf("\t");
    printVector2D(pol->vec3);
    printf("\t");
    printVector2D(pol->vec4);
    printf("]");
}

void printPol3(GsGPoly3 *pol){
    printf("GsGPol3 : [\n\tr: %d, g: %d, b: %d\n\t", pol->r, pol->g, pol->b);
    printVector2D(pol->vec1);
    printf("\t");
    printVector2D(pol->vec2);
    printf("\t");
    printVector2D(pol->vec3);
    printf("]");
}