#include<iostream>
#include"Vector3.h"

using namespace std;

Vector3 Vector3::cross(Vector3 v)
{
    float v1,v2,v3;
    Vector3 vec;
    v1=(getComponent(1)*v.getComponent(2))-(getComponent(2)*v.getComponent(1));
    v2=(getComponent(2)*v.getComponent(0))-(getComponent(0)*v.getComponent(2));
    v3=(getComponent(0)*v.getComponent(1))-(getComponent(1)*v.getComponent(0));
    vec.setComponent(0,v1);
    vec.setComponent(1,v2);
    vec.setComponent(2,v3);
    return vec;
}

