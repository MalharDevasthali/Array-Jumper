#pragma once
namespace Player
{

	enum class PlayerState
	{
		ALIVE,
		DEAD
	};

	class PlayerModel
	{
	private:
		int current_position;
		PlayerState player_state;

		

	public:
		PlayerModel();
		~PlayerModel();

		void initialize();
		void resetPlayer();

		int getCurrentPosition();
		void setCurrentPosition(int new_position);

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
	};
}