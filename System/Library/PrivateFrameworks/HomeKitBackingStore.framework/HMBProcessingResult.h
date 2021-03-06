/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions, NSArray, NAFuture;

@interface HMBProcessingResult : HMFObject {

	HMBProcessingOptions* _options;
	NSArray* _actions;
	NAFuture* _mirrorOutputResult;

}

@property (nonatomic,readonly) HMBProcessingOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                           //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NAFuture * mirrorOutputResult;               //@synthesize mirrorOutputResult=_mirrorOutputResult - In the implementation block
-(HMBProcessingOptions *)options;
-(NSArray *)actions;
-(NAFuture *)mirrorOutputResult;
-(id)initWithOptions:(id)arg1 actions:(id)arg2 mirrorOutputResult:(id)arg3 ;
@end

