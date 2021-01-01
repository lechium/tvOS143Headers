/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDVideoStreamReconfigureDelegate;
@class NSDictionary, NSMutableArray, HMFTimer, NSObject, HMDCameraStreamSessionID, NSString;

@interface HMDVideoStreamReconfigure : HMFObject <HMFTimerDelegate, HMFLogging> {

	BOOL _reconfigurationMode;
	NSDictionary* _downlinkQualityInfo;
	NSMutableArray* _reconfigureEvents;
	HMFTimer* _upgradeDebouceTimer;
	HMFTimer* _downgradeDebouceTimer;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDCameraStreamSessionID* _sessionID;
	id<HMDVideoStreamReconfigureDelegate> _delegate;

}

@property (nonatomic,retain) NSDictionary * downlinkQualityInfo;                         //@synthesize downlinkQualityInfo=_downlinkQualityInfo - In the implementation block
@property (nonatomic,readonly) NSMutableArray * reconfigureEvents;                       //@synthesize reconfigureEvents=_reconfigureEvents - In the implementation block
@property (nonatomic,retain) HMFTimer * upgradeDebouceTimer;                             //@synthesize upgradeDebouceTimer=_upgradeDebouceTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * downgradeDebouceTimer;                           //@synthesize downgradeDebouceTimer=_downgradeDebouceTimer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (__weak,readonly) id<HMDVideoStreamReconfigureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL reconfigurationMode;                                   //@synthesize reconfigurationMode=_reconfigurationMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDVideoStreamReconfigureDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDCameraStreamSessionID *)sessionID;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(BOOL)reconfigurationMode;
-(void)setReconfigurationMode:(BOOL)arg1 ;
-(NSDictionary *)downlinkQualityInfo;
-(void)_processDownlinkQuality;
-(void)setDownlinkQualityInfo:(NSDictionary *)arg1 ;
-(void)_processDownlinkQualityChanged:(id)arg1 ;
-(HMFTimer *)upgradeDebouceTimer;
-(void)setUpgradeDebouceTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)downgradeDebouceTimer;
-(void)setDowngradeDebouceTimer:(HMFTimer *)arg1 ;
-(BOOL)_isReconfigureFlipFlop;
-(void)_callNetworkImproved;
-(void)_callNetworkDeteriorated;
-(NSMutableArray *)reconfigureEvents;
-(void)_addReconfigureEvent:(unsigned long long)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(void)updateReconfigurationMode:(BOOL)arg1 ;
-(void)downlinkQualityChanged:(id)arg1 ;
@end

