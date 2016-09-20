#pragma once
#include "Piece.h"

class Game
{
public:
	void movePiece();
	Piece board[8][8];
	Game();
	~Game();
};

