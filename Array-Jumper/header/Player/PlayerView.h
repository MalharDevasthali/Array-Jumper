#pragma once
#include "../../header/UI/UIElement/ImageView.h"
#include "../Level/LevelModel.h"

namespace Player
{
	class PlayerController;
	
	class PlayerView
	{
	private:
		PlayerController* player_controller;

		sf::RenderWindow* game_window;
		UI::UIElement::ImageView* player_image;

		float player_height;
		float player_width;
		Level::BoxDimensions current_box_dimensions;


	private:
		void initializePlayerImage(); 
		void drawPlayer(); 
		void loadPlayer(); 
		void calculatePlayerDimensions(); 
		sf::Vector2f calulcatePlayerPosition();

		void updatePlayerPosition();

	public:
		PlayerView(PlayerController*);
		~PlayerView();

		void initialize();
		void update();
		void render();

	};
}