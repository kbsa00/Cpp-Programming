#include "Window.h"
#include <iostream>



Window::Window(int height, int width, std::string title) : m_height(height), 
m_width(width), m_title(title)
{
	_isClosed = !init(); 
}

Window::~Window()
{
	SDL_DestroyWindow(sdl_window);
	SDL_Quit();
	SDL_FreeSurface(screenSurface); 
}

bool Window::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		std:std::cerr << "Failed to intilize" << std::endl; 
		return 0; 
	}

	sdl_window = SDL_CreateWindow(m_title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		m_width, m_height, SDL_WINDOW_SHOWN);

	if (sdl_window == nullptr){
		std::cerr << "SDL Window is null" << std::endl; 
		return 0; 
	}

	screenSurface = SDL_GetWindowSurface(sdl_window);

	if (screenSurface == nullptr){
		std::cerr << "Could not initilize screensurface" << std::endl; 
	}

	return true; 
}

SDL_Surface* Window::loadMedia(const char* file)
{
	return SDL_LoadBMP(file); 
}


void Window::setPicture(std::string file)
{
	image = loadMedia(file.c_str()); 
	SDL_UpdateWindowSurface(sdl_window); 
	SDL_BlitSurface(image, nullptr, screenSurface, nullptr);

}

bool Window::getClosed() const
{
	return _isClosed; 
}

void Window::setClosed(bool closed)
{
	_isClosed = closed; 
}


