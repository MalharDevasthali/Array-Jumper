#pragma once
#include "LevelData.h"
#include "LevelConfiguration.h"
namespace Level
{
	struct BoxDimensions
	{
		float box_width;
		float box_height;
		float box_spacing;

		float box_spacing_percentage = 0.3f;
		float bottom_offset = 200.f;
	};

	class LevelModel
	{
	private:
		LevelConfiguration level_configuration;
		int current_level_index = 0;

	public:
		LevelModel();
		~LevelModel();

		void initialize();
		void loadNextLevel();
		bool isLastLevel();
		void reset();
		BlockType getCurrentBoxValue(int currentPosition);
		int getCurrentLevelNumber();
	};
}