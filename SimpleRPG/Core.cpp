#include "Core.h"

Core::Core()
	: mWindowWidth(WIN_WIDTH)
	, mWindowHeight(WIN_HEIGHT)
	, mWindowName("Simple RPG")
	, mWindow(sf::VideoMode(mWindowWidth, mWindowHeight), mWindowName)
	, mEvent()
	, mTime(60)
{
}

Core::~Core()
{
}

void Core::run()
{
	if (!loadMedia()) {
		printf("Failed to load media!\n");
	}
	else {
		while (mWindow.isOpen()) {
			events();
			input();
			update();
			render();
			mTime.run();
		}
	}



	

}

bool Core::loadMedia()
{
	bool success = true;


	return success;
}

void Core::events()
{
	while (mWindow.pollEvent(mEvent)) {
		switch (mEvent.type)
		{
		case sf::Event::Closed:
			mWindow.close();
			break;
		}
	}
}

void Core::input()
{
}

void Core::update()
{
}

void Core::render()
{
	mWindow.clear();


	mWindow.display();

}
