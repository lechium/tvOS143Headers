/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIBarAppearanceData.h>

@class UIColor, UIImage;

@interface _UITabBarLayoutData : _UIBarAppearanceData {

	UIColor* _selectionIndicatorTintColor;
	UIImage* _selectionIndicatorImage;
	long long _itemPositioning;
	double _itemWidth;
	double _itemSpacing;

}

@property (nonatomic,copy) UIColor * selectionIndicatorTintColor;              //@synthesize selectionIndicatorTintColor=_selectionIndicatorTintColor - In the implementation block
@property (nonatomic,retain) UIImage * selectionIndicatorImage;                //@synthesize selectionIndicatorImage=_selectionIndicatorImage - In the implementation block
@property (assign,nonatomic) long long itemPositioning;                        //@synthesize itemPositioning=_itemPositioning - In the implementation block
@property (assign,nonatomic) double itemWidth;                                 //@synthesize itemWidth=_itemWidth - In the implementation block
@property (assign,nonatomic) double itemSpacing;                               //@synthesize itemSpacing=_itemSpacing - In the implementation block
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
+(id)standardLayoutData;
-(double)itemWidth;
-(void)setItemWidth:(double)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(double)itemSpacing;
-(void)setSelectionIndicatorTintColor:(UIColor *)arg1 ;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(void)describeInto:(id)arg1 ;
-(id)replicate;
-(long long)hashInto:(long long)arg1 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(void)setItemPositioning:(long long)arg1 ;
-(long long)itemPositioning;
-(UIColor *)selectionIndicatorTintColor;
-(long long)positioningForTraitCollection:(id)arg1 ;
@end

