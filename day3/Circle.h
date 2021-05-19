//
// Created by Admin on 2021/5/19.
//

#ifndef CPPDEMO_CIRCLE_H
#define CPPDEMO_CIRCLE_H


class Circle{
private:
    float radius;
public:
    explicit Circle(float r);
    ~Circle();
    float area() const;
    float sideLen() const;
};


#endif //CPPDEMO_CIRCLE_H
