//
// Created by Ivan Galakhov on 2019-03-23.
//

#include "vector_utils.h"

// all of these assume vectors of size 3

float_mat * normalize(float_mat * vec){
    auto ret = new float_mat[3];
    double len = sqrt(vec[0]*vec[0] + vec[1]*vec[1] + vec[2]*vec[2]);

    ret[0] = (float)(vec[0] / len);
    ret[1] = (float)(vec[1] / len);
    ret[2] = (float)(vec[2] / len);

    return ret;

}

float dot_product(float_mat * vec1, float_mat * vec2){
    return vec1[0]*vec2[0] + vec1[1]*vec2[1] + vec1[2]*vec2[2];
}

float_mat * cross_product(float_mat * vec1, float_mat * vec2){
    auto normal = new float_mat[3];

    normal[0] = vec1[1]*vec2[2] - vec1[2]*vec2[1];
    normal[1] = vec1[2]*vec2[0] - vec1[0]*vec2[2];
    normal[2] = vec1[0]*vec2[1] - vec1[1]*vec2[0];

    return normal;
}