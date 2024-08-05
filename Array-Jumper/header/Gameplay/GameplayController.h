#pragma once
#include "../Level/BlockType.h"

namespace Gameplay
{
	class GameplayController
	{

	private:
		bool isObstacle(Level::BlockType value);
	public:
		GameplayController();
		~GameplayController();

		void initialize();
		void update();
		void render();

		void processObstacle();
		void onPositionChanged(int position);

	};
}