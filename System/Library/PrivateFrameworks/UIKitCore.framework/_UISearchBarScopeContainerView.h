/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UISearchBarScopeContainerLayout;

@interface _UISearchBarScopeContainerView : UIView {

	_UISearchBarScopeContainerLayout* _layout;

}

@property (nonatomic,retain) _UISearchBarScopeContainerLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(_UISearchBarScopeContainerLayout *)layout;
-(void)setLayout:(_UISearchBarScopeContainerLayout *)arg1 ;
-(void)setNeedsLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)_isKnownUISearchBarComponentContainer;
@end
