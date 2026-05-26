#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>

int main() {
  sf::RenderWindow window{sf::VideoMode{{800, 600}}, "Chess"};
  while (window.isOpen()) {
    while (const std::optional event{window.pollEvent()}) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }

    window.clear(sf::Color{254, 22, 32});

    window.display();
  }

  return 0;
}
