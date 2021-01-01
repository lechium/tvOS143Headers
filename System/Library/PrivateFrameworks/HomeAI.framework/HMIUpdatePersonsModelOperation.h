/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFOperation.h>

@class NSUUID;

@interface HMIUpdatePersonsModelOperation : HMFOperation {

	BOOL _external;
	NSUUID* _sourceUUID;
	NSUUID* _homeUUID;

}

@property (readonly) NSUUID * sourceUUID;              //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (readonly) NSUUID * homeUUID;                //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) BOOL external;                    //@synthesize external=_external - In the implementation block
+(id)logCategory;
-(void)main;
-(NSUUID *)homeUUID;
-(BOOL)external;
-(NSUUID *)sourceUUID;
-(id)logIdentifier;
-(id)initWithSourceUUID:(id)arg1 homeUUID:(id)arg2 external:(BOOL)arg3 ;
-(void)updatePersonsModelWithRetryOnError:(BOOL)arg1 ;
@end

