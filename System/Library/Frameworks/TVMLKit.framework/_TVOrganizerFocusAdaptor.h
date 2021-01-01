/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIFloatingContentView;

@interface _TVOrganizerFocusAdaptor : UIView {

	BOOL _focused;
	_UIFloatingContentView* _selectingView;

}

@property (getter=isFocused,nonatomic,readonly) BOOL focused;                     //@synthesize focused=_focused - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * selectingView;              //@synthesize selectingView=_selectingView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isFocused;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(_UIFloatingContentView *)selectingView;
-(void)setSelectingView:(_UIFloatingContentView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
@end

