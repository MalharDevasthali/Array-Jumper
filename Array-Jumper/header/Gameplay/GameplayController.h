#pragma once
#include "../Level/BlockType.h"
#include "../../header/Main/GameService.h"
namespace Gameplay
{
	class GameplayController
	{

	private:
		bool isObstacle(Level::BlockType value);
		bool isEndBlock(Level::BlockType value);
		bool isLastLevel();
		void loadNextLevel();

		
	public:
		GameplayController();
		~GameplayController();

		void initialize();
		void update();
		void render();

		void processObstacle();
		void processEndBlock();
		void onPositionChanged(int position);
		void OnDeath();
		void gameWon();
	};
}