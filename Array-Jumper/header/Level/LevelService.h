#pragma once

namespace Level
{
	class LevelController;
	struct BoxDimensions;
	enum BlockType;
	class LevelService
	{
	private:
		LevelController* level_controller;

		void destroy();
	public:
		LevelService();
		~LevelService();

		void intialize();
		void update();
		void render();

		BoxDimensions getBoxDimensions();
		BlockType getCurrentBoxValue(int currentPosition);
		void loadNextLevel();
		bool isLastLevel();
		void reset();
		
	};
}