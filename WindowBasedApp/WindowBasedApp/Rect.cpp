#include "Rect.h"
#include "iostream"

Rect::Rect(const Window & window, int positionX, int positionY) : Window(window),
_posX(positionX), _posY(positionY){

}

Rect::~Rect(){

}

void Rect::init()
{
	_surface = SDL_LoadBMP("download.bmp");	
	
	if (_surface == nullptr)
	{
		std::cerr << "Failed to load image: " << std::endl;
		SDL_DestroyRenderer(_rendrer);
		SDL_DestroyWindow(_window);
		SDL_Quit();
	}
	_texture = SDL_CreateTextureFromSurface(_rendrer, _surface);

	_rect.h = 150;
	_rect.w = 150;


	SDL_FreeSurface(_surface);
	
}


void Rect::Pollevent()
{

	SDL_Event event;

	if (SDL_PollEvent(&event))
	{
		if (event.type == SDL_KEYDOWN)
		{
			switch (event.key.keysym.sym)
			{
			case SDLK_RIGHT: 
				_posX += 10; 

				break;

			case SDLK_LEFT: 
				_posX -= 10; 

				break; 
			default: 
				break; 
			}
		}
	}
	
}

void Rect::draw()
{	
	SDL_RenderCopy(_rendrer, _texture, nullptr, &_rect);
	_rect.x = getPositionX(); 
	_rect.y = getPositionY();
	SDL_RenderPresent(_rendrer);
}

void Rect::setPositionX(int posX)
{
	_posX = posX; 
}

void Rect::setPositionY(int posY)
{
	_posY = posY;
}

int Rect::getPositionX() const
{
	return _posX; 
}

int Rect::getPositionY() const
{
	return _posY; 
}


