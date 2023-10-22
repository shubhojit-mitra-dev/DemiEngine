#pragma once

#include <SDL2/SDL.h>
#include <iostream>
#include <string>

class Demi{

    private:
        int window_h;
        int window_w;
        std::string window_title;

        void engineError(std::string error);

    public:
        bool isActive = false;

        Demi(int window_h,int window_w,std::string window_title);
        void Log(std::string log);

        int Init();
};