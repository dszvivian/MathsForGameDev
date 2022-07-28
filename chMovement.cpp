#include <iostream>

class Vector{

    public : 
        float x,y;

};

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



int main(){

    std::cout<<"kjhrnkfh"<<std::endl;

    Point p;
    p.x = 1;
    p.y = 0;

    Vector v;
    v.x = 2;
    v.y = 3;

    Point p2 = p.Addvector(v);

    std::cout<<"Results : "<< p2.x << " , "<<p2.y<<std::endl;

}

