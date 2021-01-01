/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableDictionary, _UINavigationBarLargeTitleView, UILabel, UIView;

@interface _UINavigationBarLargeTitleViewLayout : NSObject {

	NSMutableDictionary* _titleHeightCache;
	NSMutableDictionary* _restingHeightCache;
	double _cachedRestingHeight;
	BOOL _alignAccessoryViewToTitleBaseline;
	BOOL _providesExtraSpaceForExcessiveLineHeights;
	_UINavigationBarLargeTitleView* _contentView;
	long long _titleType;
	UILabel* _titleLabel;
	unsigned long long _twoLineMode;
	double _titleRestingHeight;
	UIView* _accessoryView;
	unsigned long long _accessoryViewHorizontalAlignment;
	NSDirectionalEdgeInsets _layoutMargins;

}

@property (nonatomic,readonly) _UINavigationBarLargeTitleView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long titleType;                                              //@synthesize titleType=_titleType - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long twoLineMode;                                   //@synthesize twoLineMode=_twoLineMode - In the implementation block
@property (nonatomic,readonly) double titleRestingHeight;                                      //@synthesize titleRestingHeight=_titleRestingHeight - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                           //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL alignAccessoryViewToTitleBaseline;                           //@synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline - In the implementation block
@property (assign,nonatomic) BOOL providesExtraSpaceForExcessiveLineHeights;                   //@synthesize providesExtraSpaceForExcessiveLineHeights=_providesExtraSpaceForExcessiveLineHeights - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryViewHorizontalAlignment;              //@synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets layoutMargins;                            //@synthesize layoutMargins=_layoutMargins - In the implementation block
-(id)description;
-(void)setAccessoryView:(UIView *)arg1 ;
-(long long)titleType;
-(_UINavigationBarLargeTitleView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setTitleType:(long long)arg1 ;
-(UILabel *)titleLabel;
-(NSDirectionalEdgeInsets)layoutMargins;
-(UIView *)accessoryView;
-(void)setLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)removeContent;
-(void)cleanupAfterLayoutTransitionCompleted;
-(void)_invalidateTitleHeightCache;
-(void)updateRestingTitleHeight;
-(double)titleRestingHeight;
-(CGSize)sizeFittingSize:(CGSize)arg1 titleType:(long long)arg2 ;
-(void)layoutViews;
-(void)setAlignAccessoryViewToTitleBaseline:(BOOL)arg1 ;
-(void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1 ;
-(void)setTwoLineMode:(unsigned long long)arg1 ;
-(void)setProvidesExtraSpaceForExcessiveLineHeights:(BOOL)arg1 ;
-(unsigned long long)twoLineMode;
-(BOOL)providesExtraSpaceForExcessiveLineHeights;
-(BOOL)alignAccessoryViewToTitleBaseline;
-(unsigned long long)accessoryViewHorizontalAlignment;
-(CGRect)_contentLayoutBoundsUsingRestingTitleHeight:(BOOL)arg1 ;
-(double)_textHeightForSize:(CGSize)arg1 titleType:(long long)arg2 ;
-(void)_enforceLayoutOrdering;
-(void)layoutViewsWithOffset:(UIOffset)arg1 useRestingTitleHeight:(BOOL)arg2 ;
-(CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)arg1 ;
-(void)layoutViewsWithOffsetSupportingMultiLineShrinkToFit:(UIOffset)arg1 useRestingTitleHeight:(BOOL)arg2 ;
-(CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidthSupportingMultiLineShrinkToFit:(double)arg1 ;
-(CGRect)_contentLayoutBounds;
@end

