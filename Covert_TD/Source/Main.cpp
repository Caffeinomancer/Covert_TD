#include <iostream>
#include <SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main(int argc, char* args[])
{
  SDL_Window* window = NULL;
  SDL_Surface* screenSurface = NULL;

  window = SDL_CreateWindow(
    "Covert_TD",
    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
    SCREEN_WIDTH, SCREEN_HEIGHT,
    SDL_WINDOW_RESIZABLE
  );

  if (window == NULL)
  {
    std::cout << "Could not create window\n";
  }

  screenSurface = SDL_GetWindowSurface(window);
  SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

  bool _continue = true;
  while (_continue)
  {
    SDL_Event event;
    while (SDL_PollEvent(&event) > 0)
    {
      switch (event.type)
      {
      case SDL_QUIT:
        _continue = false;
        break;
      }

      SDL_UpdateWindowSurface(window);
    }
  }
  
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}