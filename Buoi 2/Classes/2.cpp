#include "2.h"
#include "SimpleAudioEngine.h"


USING_NS_CC;

Scene* Play::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = Play::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool Play::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
	auto audio = CocosDenshion::SimpleAudioEngine::getInstance();
	audio->playBackgroundMusic("back.mp3", true);

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

	auto touchListener = EventListenerTouchOneByOne::create();
	touchListener->onTouchBegan = CC_CALLBACK_2(Play::OnTouchBegan, this);
	touchListener->onTouchMoved = CC_CALLBACK_2(Play::OnTouchMove, this);
	touchListener->onTouchEnded = CC_CALLBACK_2(Play::OnTouchEnd, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(touchListener, this);

	this->scheduleUpdate();

	return true;
}

void Play::update(float x)
{
	auto car = Sprite::create("car.png");
	car->setPosition(350, 350);
	car->setScale(1.2, 1.2);
	addChild(car);
}

bool Play::OnTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
	//auto sce = Start::createScene();
	//Director::getInstance()->replaceScene(sce);
	return true;

}

void Play::OnTouchMove(cocos2d::Touch *touch, cocos2d::Event *event)
{

}

void Play::OnTouchEnd(cocos2d::Touch *touch, cocos2d::Event *event)
{

}

