#pragma once
#include "SDL.h"
#include <string>
#include <iostream>


class Window
{
public:
	Window(std::string title, int height, int width);
	~Window();
	bool init();
	bool getClosed() const; 
	void pollevents();
	void clear() const;
	void setClose(bool); 

private:
	int _heigth; 
	int _width; 
	std::string _title;
	bool _close;
protected:
	SDL_Window * _window;
	SDL_Renderer * _rendrer;
	
};

