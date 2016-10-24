#ifndef __2__
#define __2__

#include "cocos2d.h"

class Play : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

	bool OnTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
	void OnTouchMove(cocos2d::Touch *touch, cocos2d::Event *event);
	void OnTouchEnd(cocos2d::Touch *touch, cocos2d::Event *event);
	void update(float x);

    
    // implement the "static create()" method manually
	CREATE_FUNC(Play);
};

#endif // __HELLOWORLD_SCENE_H__
