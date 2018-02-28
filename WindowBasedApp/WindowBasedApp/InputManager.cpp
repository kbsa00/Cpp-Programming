#include "InputManager.h"

InputManager * InputManager::instance = 0; 

InputManager::InputManager()
{
	keys = nullptr; 
	keys = SDL_GetKeyboardState(&numkeys);
	oldkeys = std::unique_ptr<Uint8>(new Uint8[numkeys]); 
}


InputManager::~InputManager()
{

}

bool InputManager::KeyDown(SDL_Scancode scancode)
{
	return (keys[scancode]) && (!oldkeys.get()[scancode]);
}

bool InputManager::KeyStillDown(SDL_Scancode scancode)
{
	return (keys[scancode]) && (oldkeys.get()[scancode]);
}


void InputManager::update()
{
	memcpy(oldkeys.get(), keys, numkeys * sizeof(Uint8));
	SDL_PumpEvents();
}


InputManager * InputManager::getInstance()
{
	if (instance == 0)
	{
		instance = new InputManager(); 
	}

	return instance; 
}

