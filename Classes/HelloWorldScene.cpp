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
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
	closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    auto label = Label::createWithTTF("Coder", "fonts/Marker Felt.ttf", 24);
    
    // position the label on the center of the screen
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(label, 1);

    // add "HelloWorld" splash screen"
    auto sprite = Sprite::create("HelloWorld.png");

    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);
	//add "HelloWorld" splash screen
	auto anh1 = Sprite::create("cv.jpg");
	anh1->setScale(0.2);
	anh1->setPosition(Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
		this->addChild(anh1);
	// add "HelloWorld" splash screen
		auto anh2 = Sprite::create("cv2.jpg");
		anh2->setScale(0.1);
		anh2->setPosition(Vec2(visibleSize.width + origin.x, visibleSize.height + origin.y));
		anh2->setAnchorPoint(Point(1.0f, 1.0f));
		anh2->setSkewY(30.0f);
		this->addChild(anh2);
	// add "HelloWorld" splash screen
		auto anh3 = Sprite::create("cv3.jpg");
		anh3->setScale(0.1);
		anh3->setPosition(Vec2(visibleSize.width + origin.x, origin.y));
		anh3->setAnchorPoint(Point(1.0f, 0.0f));
		anh3->setSkewX(30.0f);
		this->addChild(anh3);
	// add "HelloWorld" splash screen
		auto anh4 = Sprite::create("cv4.jpg");
		anh4->setScale(0.5);
		anh4->setPosition(Vec2(origin.x, origin.y));
		anh4->setAnchorPoint(Point(0.0f, 0.0f));
		this->addChild(anh4);
	// add "HelloWorld" splash screen
		auto anh5 = Sprite::create("cv5.jpg");
		anh5->setScale(0.1);
		anh5->setPosition(Vec2( origin.x, visibleSize.height + origin.y));
		anh5->setAnchorPoint(Point(0.0f, 1.0f));
		this->addChild(anh5);
	//add "HelloWorld" splash screen
		auto anh6 = Sprite::create("cv6.jpg");
		anh6->setScale(0.09);
		anh6->setPosition(Vec2(visibleSize.width / 3 + origin.x, visibleSize.height / 3 + origin.y));
		anh6->setScaleX(0.5f);
		this->addChild(anh6);
	//add "HelloWorld" splash screen
		auto anh7 = Sprite::create("cv6.jpg");
		anh7->setScale(0.1);
		anh7->setPosition(Vec2(visibleSize.width / 3 + origin.x, visibleSize.height / 3 + origin.y));
		anh7->setAnchorPoint(Point(0.0f, 1.0f));
		anh7->setColor(Color3B::BLUE);
		anh7->setOpacity(10.0f);
		this->addChild(anh7);
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
