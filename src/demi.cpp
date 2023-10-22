#include "../include/demi.h"

Demi::Demi(int window_h,int window_w,std::string window_title)
{
    this->window_h = window_h;
    this->window_w = window_w;
    this->window_title = window_title;

}

void Demi::Log(std::string log)
{
    std::cout<<"Log :"<<log<<std::endl;
}

void Demi::engineError(std::string error)
{
    std::cout<<"error :"<<error<<std::endl;
}

int Demi::Init()
{
    SDL_Window *window = NULL;

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    engineError("Failed to initialize Window!");
    return 1;
    }
    else{
        window = SDL_CreateWindow(window_title.c_str(), //title
                    SDL_WINDOWPOS_UNDEFINED,  //    int x: initial x position
                    SDL_WINDOWPOS_UNDEFINED,  //    int y: initial y position
                    window_h,                 //    int w: width, in pixels
                    window_w,                 //    int h: height, in pixels
                    SDL_WINDOW_SHOWN          //    Uint32 flags: window options, see docs
                    );
    }

    if(window==NULL){   
    // In the event that the window could not be made...
    engineError("Failed to Create Window!");
    SDL_Quit(); 
    return 1;
  } 
    
  // The window is open: enter program loop (see SDL_PollEvent)
  SDL_Delay(3000);  // Wait for 3000 milliseconds, for example
  
  // Close and destroy the window
  SDL_DestroyWindow(window); 
  
  // Clean up SDL2 and exit the program
  SDL_Quit(); 
  return 0;
}