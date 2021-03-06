// WindowBasedApp.cpp : Defines the entry point for the console application.
//

#include "SDL.h"
#include "InputManager.h"
#include "Window.h"
#include "Rect.h"

int main(int argc, char* argv[])
{
	InputManager * p3 = InputManager::instance->getInstance(); 
	Window window("TEST vindu", 600, 800); 
	
	Rect rect(window, 0, 0);
	rect.init();
	
	while (!window.getClosed())
	{
		rect.draw();

		if (p3->KeyDown(SDL_SCANCODE_LEFT))
		{
			std::cout << "PRESSED LEFT" << std::endl;
			int newPos_x = rect.getPositionX() - 10; 
			rect.setPositionX(newPos_x); 

		}
		if (p3->KeyDown(SDL_SCANCODE_RIGHT))
		{
			std::cout << "PRESSED RIGHT" << std::endl; 
			int newPos_x = rect.getPositionX() + 10; 
			rect.setPositionX(newPos_x); 
		}
		if (p3->KeyDown(SDL_SCANCODE_UP))
		{
			std::cout << "PRESSED UP" << std::endl;
			int newPos_y = rect.getPositionY() - 10;
			rect.setPositionY(newPos_y); 
		}
		if (p3->KeyDown(SDL_SCANCODE_DOWN))
		{
			std::cout << "PRESSED DOWN " << std::endl; 
			int newPos_y = rect.getPositionY() + 10;
			rect.setPositionY(newPos_y);
		}
		if (p3->KeyDown(SDL_SCANCODE_ESCAPE))
		{
			std::cout << "PRESSED ESC\n ENDING THE APPLICATION" << std::endl;
			window.setClose(true); 
		}
		p3->update();
		window.clear(); 
	}
	
    return 0;
}
