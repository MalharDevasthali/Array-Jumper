#pragma once
#include <SFML/Graphics.hpp>

class MainMenuUIController
{
private:

	// Constants:
	const float button_width = 400.f;
	const float button_height = 140.f;

	sf::RenderWindow* game_window;

	// Textures:
	sf::Texture background_texture;
	sf::Sprite background_sprite;

	sf::Texture play_button_texture;
	sf::Sprite play_button_sprite;

	sf::Texture instructions_button_texture;
	sf::Sprite instructions_button_sprite;

	sf::Texture quit_button_texture;
	sf::Sprite quit_button_sprite;

	void initializeBackgroundImage();
	void scaleBackgroundImage();

	void initializeButtons();
	bool loadButtonTexturesFromFile();
	void setButtonSprites();

	void scaleAllButttons();
	void scaleButton(sf::Sprite* button_to_scale);
	void positionButtons();

	bool pressedMouseButton();
	void handleButtonInteractions();
	bool clickedButton(sf::Sprite*, sf::Vector2f);

public:
	MainMenuUIController();

	void initialize(sf::RenderWindow* window_to_set);
	void update();
	void render();
};
