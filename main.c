#include <stdio.h>
#include <SDL3/SDL.h>
#include "LCT_decode.h"

int main() {
    SDL_Window* win = NULL;
    SDL_Renderer* ren = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) return 1;

    win = SDL_CreateWindow("Example", 520, 360, 0);
    if(win == NULL){
        SDL_Quit();
        return 1;
    }

    ren = SDL_CreateRenderer(win, NULL);
    if(ren == NULL){
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }

    int quit = 0;
    SDL_Event event;
    SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
    while(quit == 0){
        while(SDL_PollEvent(&event)){
            switch(event.type){
                case SDL_EVENT_QUIT:
                    quit++;
                    break;
            }
        }
        SDL_RenderClear(ren);

        //Write the graphic project in this line

        SDL_RenderPresent(ren);
        SDL_Delay(33);
    }
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();

    return 0;
}