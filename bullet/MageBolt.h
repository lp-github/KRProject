#pragma once

#include "cocos2d.h"
#include "bullet/Bullet.h"

USING_NS_CC;

class MageBolt : public Bullet
{
public:
	virtual bool init();
	CREATE_FUNC(MageBolt);
	void shoot();
	 void shoot(Vec2 dist) ;
	 void shoot(BaseMonster* target) ;
	void removeBullet();
};
