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
		const int max_lives = 3;
		int current_lives;
		int current_position;
		PlayerState player_state;

		

	public:
		PlayerModel();
		~PlayerModel();

		void initialize();
		void resetPlayer();

		int getCurrentPosition();
		void setCurrentPosition(int new_position);
		void resetPosition();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
		int getCurrentLives();
		void decrementLife();
	};
}