/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class HMDHomeManager, NSString;

@interface HMDBackingStoreSaveToPersistentStore : NSOperation {

	BOOL _incrementGeneration;
	HMDHomeManager* _homeManager;
	NSString* _reason;

}

@property (nonatomic,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL incrementGeneration;                  //@synthesize incrementGeneration=_incrementGeneration - In the implementation block
-(NSString *)reason;
-(void)main;
-(HMDHomeManager *)homeManager;
-(BOOL)incrementGeneration;
-(id)initWithHomeManager:(id)arg1 reason:(id)arg2 incrementGeneration:(BOOL)arg3 ;
@end

