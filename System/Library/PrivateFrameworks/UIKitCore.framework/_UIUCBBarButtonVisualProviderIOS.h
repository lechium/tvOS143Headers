/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@class UIButton;

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {

	UIButton* _contentButton;

}
+(id)_defaultTitleAttributes;
-(id)contentView;
-(id)_newButton;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(id)_defaultTitleAttributes;
-(void)_configureImageOrTitleFromBarItem:(id)arg1 ;
@end
