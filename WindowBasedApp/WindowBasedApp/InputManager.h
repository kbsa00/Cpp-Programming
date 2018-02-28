#pragma once

#include "SDL.h"
#include <memory>

class InputManager
{
public:
	InputManager();
	~InputManager();
	bool KeyDown(SDL_Scancode scancode); 
	bool KeyStillDown(SDL_Scancode scancode);
	bool KeyUp(SDL_Scancode);
	bool KeyStillUp(SDL_Scancode);
	static InputManager * instance;
	void update();
	InputManager * getInstance(); 
	

private:
	const Uint8 * keys; 
	std::unique_ptr<Uint8> oldkeys; 
	int numkeys;
	
};

