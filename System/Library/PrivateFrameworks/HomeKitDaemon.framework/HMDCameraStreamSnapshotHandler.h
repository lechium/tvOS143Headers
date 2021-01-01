/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraStreamSnapshotCaptureDelegate.h>
#import <libobjc.A.dylib/HMDCameraGetSnapshotProtocol.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString, NSMutableDictionary, NSMapTable;

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol> {

	id<HMFLocking> _lock;
	BOOL _streamAvailable;
	BOOL _streamSetupInProgress;
	NSMutableSet* _streamSnapshotCaptures;
	NSMutableSet* _retiredStreamSnapshotCaptures;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSString* _logID;
	NSMutableDictionary* _serviceInstanceStreamStatus;
	NSMapTable* _delegateTable;

}

@property (readonly) NSMutableSet * streamSnapshotCaptures;                                  //@synthesize streamSnapshotCaptures=_streamSnapshotCaptures - In the implementation block
@property (readonly) NSMutableSet * retiredStreamSnapshotCaptures;                           //@synthesize retiredStreamSnapshotCaptures=_retiredStreamSnapshotCaptures - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;                             //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (readonly) NSString * logID;                                                       //@synthesize logID=_logID - In the implementation block
@property (readonly) NSMutableDictionary * serviceInstanceStreamStatus;                      //@synthesize serviceInstanceStreamStatus=_serviceInstanceStreamStatus - In the implementation block
@property (readonly) NSMapTable * delegateTable;                                             //@synthesize delegateTable=_delegateTable - In the implementation block
@property (getter=isStreamAvailable,readonly) BOOL streamAvailable;                          //@synthesize streamAvailable=_streamAvailable - In the implementation block
@property (getter=isStreamSetupInProgress,readonly) BOOL streamSetupInProgress;              //@synthesize streamSetupInProgress=_streamSetupInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)removeDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSString *)logID;
-(id)logIdentifier;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)removeVideoStreamInterface:(id)arg1 ;
-(void)addVideoStreamInterface:(id)arg1 ;
-(NSMapTable *)delegateTable;
-(void)callStreamSetupInProgress:(BOOL)arg1 ;
-(NSMutableDictionary *)serviceInstanceStreamStatus;
-(void)setStreamSetupInProgress:(BOOL)arg1 ;
-(NSMutableSet *)streamSnapshotCaptures;
-(void)setStreamAvailable:(BOOL)arg1 ;
-(NSMutableSet *)retiredStreamSnapshotCaptures;
-(void)_callDidGetNewSnapshot:(id)arg1 ;
-(void)_callDidGetLastSnapshot:(id)arg1 ;
-(void)_callStreamSetupInProgress:(BOOL)arg1 ;
-(void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2 ;
-(void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3 ;
-(void)addDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(BOOL)isStreamAvailable;
-(BOOL)isStreamSetupInProgress;
-(void)setStreamSetupStatusForService:(id)arg1 inProgress:(BOOL)arg2 ;
@end

