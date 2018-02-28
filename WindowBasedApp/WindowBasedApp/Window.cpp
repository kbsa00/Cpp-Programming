#include "Window.h"
#include <iostream>


Window::Window(std::string title,int height, int width ) : _title(title),_heigth(height), _width(width)
{
	_close = !init(); 
}


Window::~Window()
{
	SDL_DestroyRenderer(_rendrer);
	SDL_DestroyWindow(_window);
	SDL_Quit();
}

bool Window::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cerr << "Failed to initlize" << std::endl; 
		return 0; 
	}	

	_window = nullptr; 

	_window = SDL_CreateWindow(_title.c_str(), 
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, _width,
		_heigth,
		0);

	if (_window == nullptr){
		std::cerr << "Couldn't open the window!" << std::endl;
		return 0; 
	}

	_rendrer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED);

	if (_rendrer == nullptr){
		std::cerr << "Rendrer couldnt render" << std::endl; 
		return 0; 
	}
	SDL_SetRenderDrawColor(_rendrer, 0, 0, 200, 255);
	return true; 
}

bool Window::getClosed() const
{
	return _close;	 
}

void Window::clear() const
{
	SDL_RenderClear(_rendrer);
}

void Window::setClose(bool isClosed)
{
	_close = isClosed; 
}
