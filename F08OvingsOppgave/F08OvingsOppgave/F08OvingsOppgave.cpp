// F08OvingsOppgave.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Window.h"
#include "SDL.h"
int main(int argz, char * argv[])
{
	Window window(600, 800, "Test"); 

	

	while (!window.getClosed())
	{
		SDL_Event event;
		if (SDL_PollEvent(&event))
		{
			if (event.type == SDL_KEYUP)
			{
				switch (event.key.keysym.sym) {

				case SDLK_UP:
					std::cout << "KEY PRESSED: UP" << std::endl;
					window.setPicture("up.bmp"); 
					break;

				case SDLK_ESCAPE:
					std::cout << "KEY PRESSED ESC" << std::endl;
					window.setClosed(true);
					break;

				case SDLK_DOWN: 
					std::cout << "KEY PRESSED DOWN" << std::endl; 
					window.setPicture("down.bmp"); 
					break;

				case SDLK_LEFT: 
					std::cout << "KEY PRESSED: LEFT" << std::endl;
					window.setPicture("left.bmp");
					break;

				case SDLK_RIGHT: 
					std::cout << "KEY PRESSED: UP" << std::endl;
					window.setPicture("right.bmp");
					break;	
				}

			}
		
		}


	}




	
    return 0;
}

