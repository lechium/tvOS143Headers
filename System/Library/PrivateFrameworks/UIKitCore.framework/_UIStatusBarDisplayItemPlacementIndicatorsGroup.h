/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class NSArray, _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup : _UIStatusBarDisplayItemPlacementGroup {

	NSArray* _stablePlacements;
	NSArray* _unstablePlacements;
	_UIStatusBarDisplayItemPlacement* _bluetoothInsetPaddingItem;

}

@property (nonatomic,copy,readonly) NSArray * stablePlacements;                                           //@synthesize stablePlacements=_stablePlacements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unstablePlacements;                                         //@synthesize unstablePlacements=_unstablePlacements - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacement * bluetoothInsetPaddingItem;              //@synthesize bluetoothInsetPaddingItem=_bluetoothInsetPaddingItem - In the implementation block
+(id)activityItemDisplayIdentifier;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 bluetoothPaddingInset:(double)arg3 ;
-(NSArray *)stablePlacements;
-(NSArray *)unstablePlacements;
-(_UIStatusBarDisplayItemPlacement *)bluetoothInsetPaddingItem;
@end

