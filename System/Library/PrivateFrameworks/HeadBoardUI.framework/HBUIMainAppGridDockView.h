/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class TVSUIOuterShadowView;

@interface HBUIMainAppGridDockView : UICollectionReusableView {

	TVSUIOuterShadowView* _shadowView;

}

@property (nonatomic,readonly) TVSUIOuterShadowView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateLayerBorderWidth;
-(void)_updateShadowViewVisibility;
-(void)_updateIdleModeAttributes;
-(TVSUIOuterShadowView *)shadowView;
@end

