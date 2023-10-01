//
// Created by cubib on 10/1/2023.
//
#include <stdio.h>

typedef struct {
    double x;
    double y;
} Vector2D;

/**
 * Init Vector2D
 * @param x
 * @param y
 * @return
 */
Vector2D newVector2D(double x, double y){
    Vector2D vec;
    vec.x = x;
    vec.y = y;
    return vec;
}

/**
 * @param vec the vector to modify
 * @param val the value to add to each values of the vector
 */
void vector2_add_val(Vector2D *vec, double val){
    vec->x += val;
    vec->y += val;
}

/**
 * @param vec1 the vector to modify
 * @param vec2 the vector to add to each values of the vector
 */
void vector2_add_vec(Vector2D *vec1, Vector2D *vec2){
    vec1->x += vec2->x;
    vec1->y += vec2->y;
}


/**
 * @param vec the vector to modify
 * @param val the value to sub to each values of the vector
 */
void vector2_sub_val(Vector2D *vec, double val){
    vec->x -= val;
    vec->y -= val;
}

/**
 * @param vec1 the vector to modify
 * @param vec2 the vector to sub to each values of the vector
 */
void vector2_sub_vec(Vector2D *vec1, Vector2D *vec2){
    vec1->x -= vec2->x;
    vec1->y -= vec2->y;
}


/**
 * @param vec the vector to modify
 * @param val the value to mul to each values of the vector
 */
void vector2_mul_val(Vector2D *vec, double val){
    vec->x *= val;
    vec->y *= val;
}

/**
 * @param vec1 the vector to modify
 * @param vec2 the vector to mul to each values of the vector
 */
void vector2_mul_vec(Vector2D *vec1, Vector2D *vec2){
    vec1->x *= vec2->x;
    vec1->y *= vec2->y;
}


/**
 * @param vec the vector to modify
 * @param val the value to div to each values of the vector
 */
void vector2_div_val(Vector2D *vec, double val){
    vec->x /= val;
    vec->y /= val;
}

/**
 * @param vec1 the vector to modify
 * @param vec2 the vector to div to each values of the vector
 */
void vector2_div_vec(Vector2D *vec1, Vector2D *vec2){
    vec1->x /= vec2->x;
    vec1->y /= vec2->y;
}

/**
 * print vector values
 * @param vec
 */
void printVector2D(Vector2D *vec){
    printf("Vector2D : { x: %f, y: %f}\n", vec->x, vec->y);
}