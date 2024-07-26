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
