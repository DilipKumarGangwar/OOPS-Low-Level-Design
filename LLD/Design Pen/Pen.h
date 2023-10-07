#ifndef PEN_H
#define PEN_H
#include "Body.h"
#include "Refill.h"
#include "Cap.h"

class Pen
{
    Body *body;   //Composition , 
    Refill *refill;  //aggregation
    Cap *cap;        //aggregation
    public:
        Pen(string body_color,Refill *,Cap*);
        ~Pen();
        void write();
};

#endif