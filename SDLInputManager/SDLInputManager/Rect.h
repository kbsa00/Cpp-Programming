#pragma once
#include "Window.h"
class Rect : public Window{

public:

	Rect(const Window& window, int w, int h, int x, int y, int r, int g, int b, int a);
	~Rect();

	void draw() const;
	void pollEvents(); 

private:
	int _w, _h; 
	int _x, _y; 
	int _r, _g, _b, _a; 
};

