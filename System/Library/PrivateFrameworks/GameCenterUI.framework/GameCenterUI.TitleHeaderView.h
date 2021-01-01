/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GameCenterUI.BaseCollectionReusableView.h>

@class _TtC12GameCenterUI16DynamicTypeLabel, UIView, NSString;

@interface GameCenterUI.TitleHeaderView : GameCenterUI.BaseCollectionReusableView {

	 titleLabel;
	 detailLabel;
	 accessoryView;
	 accessory;
	 accessoryAction;
	 separatorLineView;
	 separatorInset;
	 allowsAccessibilityLayouts;
	 avoidanceRegion;
	 state;

}

@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * titleLabel; 
@property (retain,nonatomic) UIView * accessoryView; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) UIView * accessibilityAccessoryView; 
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)accessibilityLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TtC12GameCenterUI16DynamicTypeLabel *)titleLabel;
-(UIView *)accessoryView;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilityTitleLabel;
-(BOOL)_disableRasterizeInAnimations;
-(void)didTapWithAccessoryView:(id)arg1 ;
-(UIView *)accessibilityAccessoryView;
@end

