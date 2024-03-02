#include <iostream>
#include <cmath>
#include"Vector.h"

using namespace std;


template <std::size_t N>
Vector<N>::Vector()
{
    for(int i=0;i<N;i++)
    {
        components[i]=0.0f;
    }
}
template <std::size_t N>
Vector<N>::Vector(const Vector<N>& other)
{
    for(int i=0;i<N;i++)
    {
        components[i]=other.components[i];
    }
}
template <std::size_t N>
float Vector<N>::getComponent(int i) const
{
    return components[i];
}
template <std::size_t N>
bool Vector<N>:: setComponent(int i, float value)
{
    components[i]=value;
    return true;
}
template <std::size_t N>
float Vector<N>::magnitude()
{
    float mag=0;
    for(int i=0;i<N;i++)
    {
        mag+=pow(components[i],2);
    }
    return pow(mag,0.5);
}
template <std::size_t N>

float Vector<N>::dot(Vector<N> v)
{
    float dotproduct;
    for(int i=0;i<N;i++)
    {
        dotproduct+=components[i]*v.getComponent(i);
    }
    return dotproduct;

}
template <std::size_t N>
Vector<N> operator+(const Vector<N> &v1, const Vector<N> &v2)
{
    Vector<N> result;
    for(int i=0;i<N;i++)
    {
        result.setComponent(i,v1.getComponent(i)+v2.getComponent(i));
    }
    return result;

}
template <std::size_t N>
Vector<N> operator-(const Vector<N> &v1, const Vector<N> &v2)
{
    Vector<N> result;
    for(int i=0;i<N;i++)
    {
        result.setComponent(i,v1.getComponent(i)-v2.getComponent(i));
    }
    return result;

}


