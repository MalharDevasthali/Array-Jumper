#include "../../header/Level/LevelController.h"
#include "../../header/Level/LevelView.h"
#include "../../header/Level/LevelModel.h"

Level::LevelController::LevelController()
{
	level_view = new LevelView(this);
	level_model = new LevelModel();
}

Level::LevelController::~LevelController()
{
}

void Level::LevelController::initialize()
{
	level_view->initialize();
}

void Level::LevelController::update()
{
	level_view->update();
}

void Level::LevelController::render()
{
	level_view->render();
}

Level::BlockType Level::LevelController::getCurrentBoxValue(int index)
{
	return level_model->getCurrentBoxValue(index);
}

Level::BoxDimensions Level::LevelController::getBoxDimensions()
{
	return level_view->getBoxDimensions();
}

void Level::LevelController::loadNextLevel()
{
	level_model->loadNextLevel();
}

bool Level::LevelController::isLastLevel()
{
	return level_model->isLastLevel();
}

void Level::LevelController::reset()
{
	level_model->reset();
}
