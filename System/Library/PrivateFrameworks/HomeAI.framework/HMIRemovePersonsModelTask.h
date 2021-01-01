/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HMIHomeTask.h>

@class NSUUID;

@interface HMIRemovePersonsModelTask : HMIHomeTask {

	NSUUID* _sourceUUID;

}

@property (readonly) NSUUID * sourceUUID;              //@synthesize sourceUUID=_sourceUUID - In the implementation block
+(id)logCategory;
-(void)main;
-(NSUUID *)sourceUUID;
-(id)logIdentifier;
-(id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3 ;
@end
