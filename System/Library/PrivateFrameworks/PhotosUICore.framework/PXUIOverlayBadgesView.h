/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, NSDictionary, UIImageView;

@interface PXUIOverlayBadgesView : UIView {

	BOOL _isShowingAnyBadge;
	UIStackView* _stackView;
	NSDictionary* _badges;
	UIImageView* _backgroundView;

}

@property (nonatomic,readonly) UIStackView * stackView;                        //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSDictionary * badges;                          //@synthesize badges=_badges - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL isShowingAnyBadge;                           //@synthesize isShowingAnyBadge=_isShowingAnyBadge - In the implementation block
+(id)defaultOrder;
+(id)badgesViewWithDefaultBadgesAndOrder;
+(id)defaultBadges;
+(id)defaultViewForBadge:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)backgroundView;
-(UIStackView *)stackView;
-(NSDictionary *)badges;
-(id)initWithBadges:(id)arg1 order:(id)arg2 ;
-(id)createWeaklyReferencedBackgroundView;
-(void)showBadges:(id)arg1 ;
-(BOOL)isShowingAnyBadge;
-(void)setIsShowingAnyBadge:(BOOL)arg1 ;
-(void)showBadgesForPHAsset:(id)arg1 ;
@end
