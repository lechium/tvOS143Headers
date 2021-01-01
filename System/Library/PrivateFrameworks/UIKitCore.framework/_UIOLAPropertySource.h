/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSMapTable;


@protocol _UIOLAPropertySource <_UILAPropertySource>
@property (assign,nonatomic) double spacing; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,nonatomic) long long distribution; 
@property (assign,setter=_setItemOrderingChanged:,nonatomic) BOOL _itemOrderingChanged; 
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) BOOL _itemFittingSizeChanged; 
@property (nonatomic,readonly) NSMapTable * customSpacings; 
@required
-(double)spacing;
-(void)setSpacing:(double)arg1;
-(long long)distribution;
-(void)setDistribution:(long long)arg1;
-(void)setBaselineRelativeArrangement:(BOOL)arg1;
-(BOOL)isBaselineRelativeArrangement;
-(void)_setItemOrderingChanged:(BOOL)arg1;
-(void)_setItemFittingSizeChanged:(BOOL)arg1;
-(void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
-(double)customSpacingAfterItem:(id)arg1;
-(BOOL)_itemOrderingChanged;
-(BOOL)_itemFittingSizeChanged;
-(NSMapTable *)customSpacings;

@end
