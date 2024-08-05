#include "../../header/Gameplay/GameplayService.h"
#include "../../header/Gameplay/GameplayController.h"

namespace Gameplay
{
	GameplayService::GameplayService()
	{
		gameplay_controller = new GameplayController();
	}
	GameplayService::~GameplayService()
	{
	}
	void GameplayService::initialize()
	{
	}
	void GameplayService::update()
	{
	}
	void GameplayService::render()
	{
	}
	void GameplayService::onPositionChanged(int position)
	{
		gameplay_controller->onPositionChanged(position);
	}
	void GameplayService::OnDeath()
	{
		gameplay_controller->OnDeath();
	}
}