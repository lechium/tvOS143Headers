/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIButton;

@interface BFFSplashButton : NSObject {

	UIButton* _button;
	long long _style;
	/*^block*/id _action;

}

@property (retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign) long long style;                //@synthesize style=_style - In the implementation block
@property (copy) id action;                        //@synthesize action=_action - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
@end
