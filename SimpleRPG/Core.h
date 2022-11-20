#pragma once
#include <stdlib.h>
#include <SFML/Graphics.hpp>

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


};
