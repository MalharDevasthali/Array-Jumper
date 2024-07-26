#pragma once
#include "../../header/UI/UIElement/ImageView.h"

namespace Player
{
	class PlayerController;

	class PlayerView
	{
	private:
		sf::RenderWindow* game_window;
		UI::UIElement::ImageView* player_image;

		float player_height;
		float player_width;


	private:
		void initializePlayerImage(); 
		void drawPlayer(); 
		void loadPlayer(); 
		void calculatePlayerDimensions(); 
		sf::Vector2f calulcatePlayerPosition();

		void updatePlayerPosition();

	public:
		PlayerView();
		~PlayerView();

		void initialize();
		void update();
		void render();

	};
}