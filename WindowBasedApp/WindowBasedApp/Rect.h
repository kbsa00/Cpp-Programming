#pragma once

#include "SDL.h"	
#include "Window.h"
class Rect : public Window
{
public:
	Rect(const Window & window, int positionX, int positionY);
	~Rect();
	void init();
	void draw(); 
	
	//Setters and getters
	void setPositionX(int posX); 
	int getPositionX() const;
	void setPositionY(int posY); 
	int getPositionY() const;
	

private:
	int _posX, _posY; 
	SDL_Rect _rect;
	SDL_Surface * _surface;
	SDL_Texture * _texture;

};

