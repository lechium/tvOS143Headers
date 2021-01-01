/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class _UIFloatingContentView;

@interface GKRectShadowCell : UICollectionViewCell {

	_UIFloatingContentView* _floatingView;

}

@property (assign,nonatomic) _UIFloatingContentView * floatingView;              //@synthesize floatingView=_floatingView - In the implementation block
-(void)setSelected:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)awakeFromNib;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
@end
