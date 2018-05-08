#ifndef GAMESTATE_H
#define GAMESTATE_H

class GameState
{
public:
	GameState();
	virtual void update() = 0;
	virtual void render() = 0;
	bool getExit() { return this->exit; }
protected:
	bool exit;
};

#endif
