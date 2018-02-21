#pragma once
#include <iostream>
#include <string>
#include <SDL.h>

using namespace std;
class Window
{
public:
	Window(const string & title, int width, int height);
	~Window();
	inline bool IsClosed() const { return  _close; };
	void pollevents(); 
	void clear() const; 


private:
	bool init(); 
private:
	string m_title; 
	int m_height = 800;
	int m_width = 600;
	bool _close = false;
	SDL_Window * _window = nullptr; 

protected:
	SDL_Renderer * _renderer = nullptr;
};

