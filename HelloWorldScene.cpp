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
    
    auto label = Label::createWithTTF("Hello World", "fonts/Marker Felt.ttf", 24);
    
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
    /*// thêm ảnh
	auto anh1 = Sprite::create("cv6.jpg");
	anh1->setScale(0.1);
	anh1->setPosition(Vec2(100,100)); // vị trí ban đầu của "anh1"
	auto moveTo = MoveTo::create(2, Vec2(150, 150)); //di chuyển "anh1" tới vị trí x=150 và y=150 sau 2 giây.
	anh1->runAction(moveTo); // chạy action moveTo
	auto moveBy = MoveBy::create(2, Vec2(150, 150)); //di chuyển "anh1" lên sang phải 150pixel và lên trên 150pixel sau 2 giây.
	anh1->runAction(moveBy); // chạy action moveBy
	auto delay = DelayTime::create(1); // thời gian trễ giữa các action.
	auto seq = Sequence::create(moveBy, moveTo, delay, nullptr); // khởi tạo Sequence bao gồm moveBy, moveTo, delay
	anh1->runAction(seq);
	this->addChild(anh1);
	// thêm ảnh
	auto anh2 = Sprite::create("HelloWorld.png");
	anh2->setScale(0.1);
	anh2->setPosition(Vec2(100,100));
	auto dichuyen = MoveTo::create(2, Vec2(50, 0));
	anh2->runAction(dichuyen);
	auto dichuyen2 = MoveBy::create(2, Vec2(50, 0));
	anh2->runAction(dichuyen2);
	auto thoigiantre = DelayTime::create(1);
	auto s = Sequence::create(moveBy, moveTo, delay, nullptr);
	anh2->runAction(s);
	this->addChild(anh2);
	//------------quay hình ảnh trong lúc di chuyển
	auto anh3 = Sprite::create("HelloWorld.png");
	anh3->setScale(0.3);
	anh3->setAnchorPoint(Point(0.0f, 0.0f));
	auto dichuyen3 = MoveTo::create(5, Vec2(40, 0));
	anh3->runAction(dichuyen3);
	auto dichuyen4 = MoveBy::create(5, Vec2(40, 0));
	anh3->runAction(dichuyen4);
	auto xoay = RotateTo::create(5, 360);
	anh3->runAction(xoay);
	auto xoay2 = RotateBy::create(5, 360);
	anh3->runAction(xoay2);
	this->addChild(anh3);
	//-------------tỉ lệ
	auto scaleBy = ScaleBy::create(2.0f, 3.0f); // tăng kích thước hình ảnh lên 3 lần trong 2 giây
	anh3->runAction(scaleBy);
	auto scaleTo = ScaleTo::create(2.0f, 5.0f, 3.0f); // tăng kích thước chiều dài lên 5 lần, chiều cao lên 3 lần 
	anh3->runAction(scaleTo);
	//----------------------------------di chuyển hình ảnh sau một thời gian nhất định
	auto anh4 = Sprite::create("cv.jpg");
	anh4->setScale(0.2f);
	anh4->setPosition(Vec2(100, 100));
	this->addChild(anh4);
	auto mvby = MoveBy::create(5, Vec2(200, 200));
	auto mvto = MoveTo::create(5, Vec2(200, 200));
	auto delay1 = DelayTime::create(5);
	auto see = Sequence::create(mvby, delay1, mvto, nullptr);
	anh4->runAction(see);
	//-------------------------------hiện và ẩn hình ảnh
	auto fadeIN = FadeIn::create(3.0f);
	//anh4->runAction(fadeIN);
	auto delay3 = DelayTime::create(2.0f);
	auto fadeOut = FadeOut::create(3.0f);
	//anh4->runAction(fadeOut);
	auto sequence1 = Sequence::create(fadeOut, fadeIN, see, nullptr);
	anh4->runAction(RepeatForever::create(sequence1));
	// ------------- animate
	Vector<SpriteFrame*> animFrames;
	animFrames.reserve(12);
	animFrames.pushBack(SpriteFrame::create("cv.jpg", Rect(0, 0, 50, 50)));
	animFrames.pushBack(SpriteFrame::create("cv.jpg", Rect(0,0,7)))*/
	/*auto anh00 = Sprite::create("cv.jpg");
	Vector<SpriteFrame*>animFrames;
	animFrames.reserve(12);
	animFrames.pushBack(SpriteFrame::create("a1.jpg", Rect(0, 0, 150, 150)));
	animFrames.pushBack(SpriteFrame::create("a2.jpg", Rect(0, 0, 150, 150)));
	animFrames.pushBack(SpriteFrame::create("a3.jpg", Rect(0, 0, 150, 160)));
	animFrames.pushBack(SpriteFrame::create("a4.jpg", Rect(0, 0, 100, 170)));
	animFrames.pushBack(SpriteFrame::create("a5.jpg", Rect(0, 0, 100, 170)));
	animFrames.pushBack(SpriteFrame::create("a6.jpg", Rect(0, 0, 65, 81)));
	animFrames.pushBack(SpriteFrame::create("a7.jpg", Rect(0, 0, 65, 81)));
	animFrames.pushBack(SpriteFrame::create("a8.jpg", Rect(0, 0, 65, 81)));
	animFrames.pushBack(SpriteFrame::create("a9.jpg", Rect(0, 0, 65, 81)));
	animFrames.pushBack(SpriteFrame::create("a10.jpg", Rect(0, 0, 65, 81)));
	animFrames.pushBack(SpriteFrame::create("a11.jpg", Rect(0, 0, 65, 81)));
	animFrames.pushBack(SpriteFrame::create("a12.jpg", Rect(0, 0, 65, 81)));
	// create the animation out of the frames

	Animation* animation = Animation::createWithSpriteFrames(animFrames, 0.1f);
	Animate* animate = Animate::create(animation);
	this->addChild(anh00);
	// run it and repeat it forever

	anh00->runAction(RepeatForever::create(animate));*/
	//--------------------------------------easing
	// create a sprite
	// Khởi tạo 1 sprite
	auto anh002 = Sprite::create("cv.jpg");
	anh002->setAnchorPoint(Point(0, 0));
	anh002->setScale(0.3);
	// Tạo ra một Action moveBy
	auto move = MoveBy::create(2, Vec2(200, 200));
	auto move_back = move->reverse();

	// Khởi tạo BounceIn Ease Action
	auto moveEaseIn = EaseBounceIn::create(move->clone());

	// Thời gian trễ giữa các Action
	auto delay = DelayTime::create(0.25f);

	// Khởi tạo Sequence của Action
	auto seq = Sequence::create(moveEaseIn, delay, move_back, delay->clone(), nullptr); // ??

	// Chạy sequence
	anh002->runAction(RepeatForever::create(seq));
	this->addChild(anh002);
	return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
