#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
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
	mario->setPosition(visibleSize.width / 2,visibleSize.height /2);
	mario->setOpacity(50);
	addChild(mario);

	auto mario1 = Sprite::create("mario.png");
	mario1->setPosition(0,0);
	mario1->setAnchorPoint(Vec2(0, 0));
	mario1->setColor(Color3B::MAGENTA);
	addChild(mario1);

	auto mario2 = Sprite::create("mario.png");
	mario2->setPosition(405,0);
	mario2->setAnchorPoint(Vec2(1, 0));
	mario2->setRotation(45);
	mario2->setColor(Color3B::MAGENTA);
	mario2->setScale(1.5, 1.5);
	mario2->setOpacity(50);
	addChild(mario2);

	auto mario3 = Sprite::create("mario.png");
	mario3->setPosition(0, visibleSize.height);
	mario3->setAnchorPoint(Vec2(0, 1));
	mario3->setScale(1.5, 1.5);
	addChild(mario3);

	auto mario4 = Sprite::create("mario.png");
	mario4->setPosition(visibleSize.width, 270);
	mario4->setAnchorPoint(Vec2(1, 1));
	mario4->setRotation(45);
	addChild(mario4	);

	return true;
}



