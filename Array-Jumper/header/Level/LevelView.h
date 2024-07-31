#pragma once
#include "LevelController.h"
#include "../../header/UI/UIElement/ImageView.h"
#include "LevelModel.h"

namespace Level
{
	class LevelView
	{
	private:

		sf::RenderWindow* game_window;
		LevelController* level_controller;

		UI::UIElement::ImageView* background_image;
		const float background_alpha = 110.f;

		UI::UIElement::ImageView* box_image;

		UI::UIElement::ImageView* letter_one_overlay_image;
		UI::UIElement::ImageView* letter_two_overlay_image;
		UI::UIElement::ImageView* letter_three_overlay_image;
		UI::UIElement::ImageView* obstacle_one_overlay_image;
		UI::UIElement::ImageView* obstacle_two_overlay_image;

		BoxDimensions box_dimensions;

		void createImages();
		void initializeImages();
		void updateImages();
		void drawBox(sf::Vector2f position);
		void drawBoxValue(sf::Vector2f position, BlockType box_value);
		void drawLevel();
		void calculateBoxDimensions();
		void calculateBoxWidthHeight();
		void calculateBoxSpacing();
		sf::Vector2f calculateBoxPosition(int index);
		void deleteImages();

	public:
		LevelView(LevelController* controller);
		~LevelView();

		UI::UIElement::ImageView* getBoxOverlayImage(BlockType block_type);
		BoxDimensions getBoxDimensions();

		void initialize();
		void update();
		void render();
	};
}
