
#include <SFML/Graphics.hpp>

using namespace sf;
const float WINDOW_WIDTH = 800;
const float WINDOW_HEIGHT = 600;
const std::string WINDOW_TITLE = "SFML_TEMPLATE3";
const float batWidth = 20.f;
const Vector2f batSize(20.f, 80.f);
const float batHight =80.f;
const float batOffset = 50.f;
const Color leftBatColor(158, 20, 37);
const Color rightBatColor(20, 158, 49);
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
	RectangleShape leftBat, rightBat;
	leftBat.     setSize(batSize);
	rightBat.     setSize(batSize);
	leftBat.setPosition(batOffset, (WINDOW_HEIGHT - batHight) / 2);
	rightBat.setPosition(batOffset, (WINDOW_HEIGHT - batHight) / 2);
	CircleShape circle(10.f);
	circle.setPosition(380, 280);
	circle.setOrigin(0, 0);
	circle.setFillColor(Color::White);
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна 
		window.display();
		window.draw(leftBat);
		window.draw(rightBat);
		window.draw(circle);
	}

	return 0;
}