/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCameraClipAddSignificantEventOperation.h>

@class NSDate, HMCameraClipEncryptionManager;

@interface HMDCameraClipCreateClipOperation : HMDCameraClipAddSignificantEventOperation {

	double _targetFragmentDuration;
	NSDate* _clipStartDate;
	HMCameraClipEncryptionManager* _encryptionManager;

}

@property (readonly) double targetFragmentDuration;                                  //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (copy,readonly) NSDate * clipStartDate;                                    //@synthesize clipStartDate=_clipStartDate - In the implementation block
@property (readonly) HMCameraClipEncryptionManager * encryptionManager;              //@synthesize encryptionManager=_encryptionManager - In the implementation block
+(id)logCategory;
-(id)attributeDescriptions;
-(double)targetFragmentDuration;
-(NSDate *)clipStartDate;
-(id)modelsToUpdate;
-(HMCameraClipEncryptionManager *)encryptionManager;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 encryptionManager:(id)arg7 ;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 encryptionManager:(id)arg7 dataSource:(id)arg8 ;
@end

