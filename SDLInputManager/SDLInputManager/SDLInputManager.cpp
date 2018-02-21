#include <iostream>
#include <SDL.h>
#include "Window.h"
#include "Rect.h"
using namespace std;
int main(int argc, char* argv[]){
	Window window("Window Test", 800, 600); 
	Rect rect(window, 120, 120, 100, 100, 200, 0, 200, 255); 

	while (!window.IsClosed())
	{
		rect.draw(); 
		rect.pollEvents(); 
		window.clear();
	}

	
	return 0; 
}