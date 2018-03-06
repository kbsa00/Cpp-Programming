#pragma once
#include <SDL.h>
#include <String>
class Window
{
public:
	Window(int heigth, int width, std::string title);
	~Window();
	bool init(); 
	SDL_Surface * loadMedia(const char* file);
	void setPicture(std::string file);

	bool getClosed() const; 
	void setClosed(bool closed);

private:
	bool _isClosed; 
	SDL_Window * sdl_window = nullptr; 
	SDL_Surface * screenSurface = nullptr; 
	SDL_Surface * image = nullptr; 
	int m_height, m_width; 
	std::string m_title; 

};

