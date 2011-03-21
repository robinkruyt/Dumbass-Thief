#include "GameGroup.h"

GameGroup::GameGroup() {} 
GameGroup::~GameGroup() {
	while(!members.empty())
	{
		delete members.back();
		members.pop_back();
	}
}

void GameGroup::update() {
	for(unsigned int i = 0; i < members.size(); i++)
	{
		members[i]->update();
	}
}

void GameGroup::draw() {
	for(unsigned int i = 0; i < members.size(); i++)
	{
		members[i]->draw();
	}
}

void GameGroup::add(Plane* member) {
	members.push_back(member);
}

void GameGroup::remove(int index) {
	//members[index].pop;
}