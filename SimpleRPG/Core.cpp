#include "Core.h"

Core::Core()
	: mWindowWidth(800)
	, mWindowHeight(600)
	, mWindowName("Simple RPG")
	, mWindow(sf::VideoMode(mWindowWidth, mWindowHeight), mWindowName)
	, mEvent()
{
}

Core::~Core()
{
}

void Core::run()
{
	while (mWindow.isOpen()) {
		events();
		input();
		update();
		render();

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
