#pragma once
#include "MovementDirection.h"
#include "../../header/Event/EventService.h"
#include "../../header/Level/BlockType.h"
namespace Player
{
	class PlayerView;
	class PlayerModel;
	enum class PlayerState;

	class PlayerController
	{
	private:
		PlayerModel* player_model;
		PlayerView* player_view;
		Event::EventService* event_service;

		void move(MovementDirection direction);
		void jump(MovementDirection direction);
	
		
		void readInput();
		
		bool isPositionInBound(int targetPosition);
		void destroy();

	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		void takeDamage();
		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
		int getCurrentPosition();
	};
}