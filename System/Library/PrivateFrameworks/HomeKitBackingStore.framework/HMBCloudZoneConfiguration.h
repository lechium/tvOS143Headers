/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMBCloudZoneConfiguration : HMFObject {

	BOOL _shouldRebuildOnManateeKeyLoss;
	BOOL _shouldSuppressDelegateCallbacksOnInitialFetch;

}

@property (assign) BOOL shouldRebuildOnManateeKeyLoss;                              //@synthesize shouldRebuildOnManateeKeyLoss=_shouldRebuildOnManateeKeyLoss - In the implementation block
@property (assign) BOOL shouldSuppressDelegateCallbacksOnInitialFetch;              //@synthesize shouldSuppressDelegateCallbacksOnInitialFetch=_shouldSuppressDelegateCallbacksOnInitialFetch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(void)setShouldRebuildOnManateeKeyLoss:(BOOL)arg1 ;
-(void)setShouldSuppressDelegateCallbacksOnInitialFetch:(BOOL)arg1 ;
-(BOOL)shouldRebuildOnManateeKeyLoss;
-(BOOL)shouldSuppressDelegateCallbacksOnInitialFetch;
@end

