#include <iostream>

enum class PlayerState {
    DEAD,
    IDLE,
    RUNNING,
    ATTACKING,
    JUMPING,
    FLYING,
    DANCING
};

void playerState(PlayerState state)
{
    switch (state) {
    case PlayerState::DEAD:
        std::cout << "Player is currently DEAD\n";
        return;
    case PlayerState::IDLE:
        std::cout << "Player is currently Idle\n";
        return;
    case PlayerState::RUNNING:
        std::cout << "Player is currently Running\n";
        return;
    case PlayerState::ATTACKING:
        std::cout << "Player is currently Attacking\n";
        return;
    case PlayerState::JUMPING:
        std::cout << "Player is currently Jumping\n";
        return;
    case PlayerState::FLYING:
        std::cout << "Player is currently Flying\n";
        return;
    case PlayerState::DANCING:
        std::cout << "Player is currently Dancing\n";
        return;
    default:
        std::cout << "Invalid state\n";
    }
}

int main()
{
    playerState(PlayerState::FLYING);

    return 0;
}
