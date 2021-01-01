/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIVisualEffectView, UIView, PKSplashImageHeaderView, UIVisualEffect, UIColor;

@interface PKTransactionHistoryMerchantHeaderCell : PKDashboardCollectionViewCell {

	UIVisualEffectView* _overlayEffectView;
	UIView* _shadowView;
	PKSplashImageHeaderView* _headerView;
	UIVisualEffect* _overlayEffect;
	UIColor* _shadowColor;
	double _overlayAlpha;

}

@property (nonatomic,readonly) PKSplashImageHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIVisualEffect * overlayEffect;                      //@synthesize overlayEffect=_overlayEffect - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                               //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) double overlayAlpha;                                 //@synthesize overlayAlpha=_overlayAlpha - In the implementation block
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKSplashImageHeaderView *)headerView;
-(void)setOverlayEffect:(UIVisualEffect *)arg1 ;
-(void)setOverlayAlpha:(double)arg1 ;
-(UIVisualEffect *)overlayEffect;
-(double)overlayAlpha;
@end

