#include "../../header/Player/PlayerModel.h"

int Player::PlayerModel::getCurrentPosition()
{
	return current_position;
}

void Player::PlayerModel::setCurrentPosition(int new_position)
{
	current_position = new_position;
}

Player::PlayerState Player::PlayerModel::getPlayerState()
{
	return player_state;
}

void Player::PlayerModel::setPlayerState(PlayerState new_player_state)
{
	player_state = new_player_state;
}
