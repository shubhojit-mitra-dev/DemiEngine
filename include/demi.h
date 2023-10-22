#pragma once

#include <SDL2/SDL.h>
#include <iostream>
#include <string>

class Demi{

    private:
        int window_h;
        int window_w;
        char* window_title;

    public:
        Demi(int window_h,int window_w,std::string window_title);

        void Log(std::string log);
};