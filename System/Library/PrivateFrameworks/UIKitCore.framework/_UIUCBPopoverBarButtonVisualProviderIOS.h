/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIUCBBarButtonVisualProviderIOS.h>

@class UIView, UIColor;

@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {

	UIView* _selectionBackgroundView;
	UIColor* _selectionBackgroundTintColor;
	UIColor* _selectionTintColor;

}

@property (nonatomic,retain) UIColor * selectionBackgroundTintColor;              //@synthesize selectionBackgroundTintColor=_selectionBackgroundTintColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor;                        //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIColor *)selectionTintColor;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)setSelectionBackgroundTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionBackgroundTintColor;
@end
