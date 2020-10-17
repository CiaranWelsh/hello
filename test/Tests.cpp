//
// Created by Ciaran on 17/10/2020.
//

#include "DoMath.h"
#include "stdexcept"

int main (){
    DoMath m(4, 6);
    if (10 != m.add()){
        throw std::logic_error("nope");
    }

}














