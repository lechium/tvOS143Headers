/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, UIColor;

@interface UIKBTutorialModalDisplayStyling : NSObject {

	NSArray* _backgroundEffects;
	UIColor* _backgroundColor;
	UIColor* _mainTextColor;
	UIColor* _buttonTextColor;

}

@property (nonatomic,retain) NSArray * backgroundEffects;              //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * mainTextColor;                  //@synthesize mainTextColor=_mainTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)buttonTextColor;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(NSArray *)backgroundEffects;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(id)backgroundBlurEffects:(long long)arg1 ;
-(UIColor *)mainTextColor;
-(void)setMainTextColor:(UIColor *)arg1 ;
@end
