#include "1.h"

USING_NS_CC;

Scene* Start::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
	auto layer = Start::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool Start::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
	auto mario = Sprite::create("mario.png");
	mario->setPosition(200, 200);
	//addChild(mario);

	auto car = Sprite::create("car.png");
	car->setPosition(visibleSize.width,visibleSize.height/2);
	car->setAnchorPoint(Vec2(1,0));
	car->setScale(0.3, 0.3);
	addChild(car);

	auto car1 = Sprite::create("car.png");
	car1->setPosition(visibleSize.width, visibleSize.height / 2);
	car1->setAnchorPoint(Vec2(1, 0));
	car1->setScale(0.3, 0.3);
	//addChild(car1);

	auto CarMoveTo = MoveTo::create(1.7, Vec2(2, visibleSize.height / 2));
	auto CarMoveTo1 = MoveTo::create(0, Vec2(visibleSize.width, visibleSize.height / 2));
	//auto CarMoveBy = MoveBy::create(0, Vec2(visibleSize.width, visibleSize.height / 2));
	auto carsqe = Sequence::create(CarMoveTo,CarMoveTo1,nullptr);
	car->runAction(RepeatForever::create(carsqe));

	auto sonic = Sprite::create("sonic.png");
	sonic->setPosition(visibleSize.width / 2, visibleSize.height / 2);
	sonic->setScale(0.3, 0.3);
	addChild(sonic);
	auto RotateTo = RotateTo::create(0.1, 180);
	auto RotateTo1 = RotateTo::create(0.1, 360);
	auto sonicsqe = Sequence::create(RotateTo, RotateTo1, nullptr);
	sonic->runAction(RepeatForever::create(sonicsqe));

	auto lol = Sprite::create("LOL.png");
	lol->setPosition(100, 100);
	lol->setScale(0.3, 0.3);
	addChild(lol);

	auto ScaleTo1 = ScaleTo::create(1, 1.5);
	auto ScaleTo2 = ScaleTo::create(1, 1.5);
	auto ScaleTo3 = ScaleTo::create(0.5, 1/3);
	auto lolScale = Sequence::create(ScaleTo1, ScaleTo2, ScaleTo3, nullptr);
	lol->runAction(RepeatForever::create(lolScale));



	return true;
}



