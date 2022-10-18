#include <iostream>
using namespace std;
#include <math.h> 

class Vector{

    public : 
        float x,y;

    float length() const ;
    float lengthsqr() const;


    Vector(){}

    Vector(float X, float Y){
        x = X;
        y = Y;
    }


    Vector operator*(float s) const;
    Vector operator/(float s) const;

};

Vector Vector::operator*(float s) const{

    Vector scaled ;

    scaled.x = x * s;
    scaled.y = y * s;

    return scaled;

}

Vector Vector::operator/(float s) const{

    Vector scaled ;

    scaled.x = x / s;
    scaled.y = y / s;

    return scaled;

}

float Vector::length() const {
    float length ;
    length = sqrt(x*x + y*y);
    return length;
}

float Vector::lengthsqr() const {
    float length ;
    length = (x*x + y*y);
    return length;
}

class Point{

    public:
       Point Addvector(Vector v){
            Point p2; 

            p2.x = x + v.x;
            p2.y = y + v.y;

            return p2;

        }

    float x,y;
};

Vector  operator - (Point a,Point b){
    Vector v;

    v.x = a.x - b.x;
    v.y = a.y - b.y;


    return v;
}



int main(){

    Point a;  // pacman
    a.x = 1;
    a.y = 0;


    Point b;  //Inky
    b.x = 2;
    b.y = 3;

    Point c; //cayle
    c.x=7;
    c.y=5;


    Vector ab;  // pacman to inky
    ab = a-b;

    Vector ac;
    ac = a-c;

    float lengthAB = ab.length();
    float lengthAC = ac.length();
    

    std::cout<<"Results AB : "<< lengthAB<<std::endl;
    std::cout<<"Results AC: "<< lengthAC <<std::endl;



    // code for increasing or decreasing the speed

    Vector v(3,0);

    cout<<"Initial Vector :"<<v.length()<<endl;

    Vector doubled = v *2 ;

    cout<<"Doubled Vector :"<<doubled.length()<<endl;

    Vector halfed = v/2;

    cout<<"Halfed Vector :"<<halfed.length()<<endl;

}

