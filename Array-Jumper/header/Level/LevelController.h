#pragma once
namespace Level
{
	class LevelView;
	class LevelModel;
	enum  BlockType;
	struct BoxDimensions;

	class LevelController
	{
	private:
		LevelView* level_view;
		LevelModel* level_model;

	public:
		LevelController();
		~LevelController();

		void initialize();
		void update();
		void render();

		BlockType getCurrentBoxValue(int);
		BoxDimensions getBoxDimensions();

		void loadNextLevel();
		bool isLastLevel();
		void reset();
	};
}