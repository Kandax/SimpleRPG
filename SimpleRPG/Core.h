#pragma once
#include <stdlib.h>
#include <iostream>
#include <SFML/Graphics.hpp>

#include "Time.h"


#define APP_NAME "Simple RPG"
#define WIN_WIDTH 640
#define WIN_HEIGHT 720





class Core {
public:
	Core();
	~Core();
	void run();

private:
	
	/// Loads Textures.
	/// Return true if loading media was successful.
	bool loadMedia();


	void events();
	void input();
	void update();
	void render();

private:
	uint16_t mWindowWidth;
	uint16_t mWindowHeight;
	std::string mWindowName;

	sf::RenderWindow mWindow;
	sf::Event mEvent;

	// Delta time
	Time mTime;
};
