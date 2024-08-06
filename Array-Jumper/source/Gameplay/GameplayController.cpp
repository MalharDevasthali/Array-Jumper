#include "../../header/Gameplay/GameplayController.h"
#include "../../header/Global/ServiceLocator.h"


namespace Gameplay
{
	using namespace Global;
	using namespace Sound;
	using namespace Main;

	GameplayController::GameplayController()
	{
	}

	GameplayController::~GameplayController()
	{
	}

	void GameplayController::initialize()
	{
	}

	void GameplayController::update()
	{
	}

	void GameplayController::render()
	{
	}

	void GameplayController::processObstacle()
	{
		ServiceLocator::getInstance()->getPlayerService()->takeDamage();
		ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::DEATH);
	}

	void GameplayController::processEndBlock()
	{
		ServiceLocator::getInstance()->getPlayerService()->levelComplete();
		ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::LEVEL_COMPLETE);

		if (isLastLevel())
		{
			gameWon();
			return;
		}

		loadNextLevel();
	}

	void GameplayController::onPositionChanged(int position)
	{
		Level::BlockType value = ServiceLocator::getInstance()->getLevelService()->getCurrentBoxValue(position);

		if (isObstacle(value))
			processObstacle(); 
		if (isEndBlock(value))
			processEndBlock();
	}

	bool GameplayController::isObstacle(Level::BlockType value)
	{
		if (value == Level::BlockType::OBSTACLE_ONE || value == Level::BlockType::OBSTACLE_TWO)
			return true;
		return false;
	}

	bool GameplayController::isEndBlock(Level::BlockType value)
	{
		if (value == Level::BlockType::TARGET)
			return true;
		return false;
	}

	bool GameplayController::isLastLevel()
	{
		return ServiceLocator::getInstance()->getLevelService()->isLastLevel();
	}

	void GameplayController::loadNextLevel()
	{
		ServiceLocator::getInstance()->getLevelService()->loadNextLevel();
	}

	void GameplayController::OnDeath()
	{
		GameService::setGameState(GameState::CREDITS);
		ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::DEATH);
	}

	void GameplayController::gameWon()
	{
		GameService::setGameState(GameState::CREDITS);
		ServiceLocator::getInstance()->getSoundService()->playSound(SoundType::GAME_WON);
	}

}