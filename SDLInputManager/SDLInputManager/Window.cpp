#include "Window.h"
#include "SDL.h"


Window::Window(const string &title, int width, int height) : 
m_title(title), m_width(width), m_height(height)
{
	_close = !init(); 
}


Window::~Window()
{
	SDL_DestroyRenderer(_renderer); 
	SDL_DestroyWindow(_window); 
	SDL_Quit(); 

}

bool Window::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		cerr << "SDL failed to initilize" << endl;
		return 0;
	}
	
	_window = SDL_CreateWindow(m_title.c_str(),
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		m_width, m_height,
		0
	);

	if (_window == nullptr)
	{
		cerr << "Failed to create Window" << endl; 
	}

	_renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_PRESENTVSYNC);

	if (_renderer == nullptr)
	{
		cerr << "Failed to create render \n"; 
		return 0;
	}

	return true; 
}

void Window::pollevents()
{
	SDL_Event event;

	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT: 
			_close = true; 

			break;
		default:
			break;
		}
	}
}

void Window::clear() const
{
	SDL_SetRenderDrawColor(_renderer, 0, 0, 200, 255); 
	SDL_RenderClear(_renderer); 
}
