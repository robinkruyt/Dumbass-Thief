#ifndef GAMEGROUP_H_
#define GAMEGROUP_H_

class GameGroup {
public:
	GameGroup();
	virtual ~GameGroup();
	
	//ArrayList* members;

	void update();
	void draw();

	// ADD, REPLACE, REMOVE(scrollfactor)
};

#endif /* GAMEGROUP_H_ */