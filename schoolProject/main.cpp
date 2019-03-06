#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class GUI
{
    public:

private:

};

class app
{
   public:

    private:

};

int main()
{
	RenderWindow window(VideoMode(640, 480, 32), "School Project");

	while(window.isOpen())
	{
		Event event;
		while(window.pollEvent(event))
		{
			switch(event.type)
			{
			case Event::Closed:
				window.close();
				break;

			}
		}

		window.clear();
		window.display();
	}

	return 0;
}
