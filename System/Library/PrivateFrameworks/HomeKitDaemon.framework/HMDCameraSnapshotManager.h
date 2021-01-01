/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraSnapshotLocalDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteRelaySenderDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteRelayReceiverDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteStreamSenderDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteStreamReceiverDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteRelayStreamDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraStreamSnapshotHandlerDelegate.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFMessageDispatcher, HMDSnapshotLocalSession, NSMutableDictionary, HMDHAPAccessory, NSUUID, NSString, HMDCameraSnapshotMonitorEvents, HMDSnapshotRequestHandler, HMDSnapshotCacheRequestHandler, HMDSnapshotSlotManager, HMDCameraStreamSnapshotHandler, NSMutableArray, HMDNotificationRegistration, HMFNetMonitor, HMDCameraResidentMessageHandler, NSDictionary, NSSet;

@interface HMDCameraSnapshotManager : HMFObject <HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMFTimerDelegate, HMFLogging, HMDCameraStreamSnapshotHandlerDelegate, HMDHomeMessageReceiver> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDSnapshotLocalSession* _currentLocalSession;
	NSMutableDictionary* _currentRemoteSessions;
	HMDHAPAccessory* _accessory;
	NSUUID* _uniqueIdentifier;
	NSString* _imageCacheDirectory;
	NSString* _logID;
	HMDCameraSnapshotMonitorEvents* _monitorServicesManager;
	HMDSnapshotRequestHandler* _snapshotRequestHandler;
	HMDSnapshotCacheRequestHandler* _snapshotCacheRequestHandler;
	HMDSnapshotSlotManager* _snapshotSlotManager;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;
	NSMutableArray* _pendingSnapshotRequestDuringStreamSetup;
	NSMutableArray* _pendingRemoteSnapshotRequestDuringStreamSetup;
	HMDNotificationRegistration* _notificationRegistration;
	HMFNetMonitor* _networkMonitor;
	HMDCameraResidentMessageHandler* _residentMessageHandler;

}

@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                          //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDSnapshotLocalSession * currentLocalSession;                                 //@synthesize currentLocalSession=_currentLocalSession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentRemoteSessions;                                   //@synthesize currentRemoteSessions=_currentRemoteSessions - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * imageCacheDirectory;                                              //@synthesize imageCacheDirectory=_imageCacheDirectory - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                                            //@synthesize logID=_logID - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotMonitorEvents * monitorServicesManager;                     //@synthesize monitorServicesManager=_monitorServicesManager - In the implementation block
@property (nonatomic,readonly) HMDSnapshotRequestHandler * snapshotRequestHandler;                          //@synthesize snapshotRequestHandler=_snapshotRequestHandler - In the implementation block
@property (nonatomic,readonly) HMDSnapshotCacheRequestHandler * snapshotCacheRequestHandler;                //@synthesize snapshotCacheRequestHandler=_snapshotCacheRequestHandler - In the implementation block
@property (readonly) HMDSnapshotSlotManager * snapshotSlotManager;                                          //@synthesize snapshotSlotManager=_snapshotSlotManager - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSnapshotHandler * streamSnapshotHandler;                      //@synthesize streamSnapshotHandler=_streamSnapshotHandler - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingSnapshotRequestDuringStreamSetup;                    //@synthesize pendingSnapshotRequestDuringStreamSetup=_pendingSnapshotRequestDuringStreamSetup - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRemoteSnapshotRequestDuringStreamSetup;              //@synthesize pendingRemoteSnapshotRequestDuringStreamSetup=_pendingRemoteSnapshotRequestDuringStreamSetup - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;                      //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (nonatomic,retain) HMFNetMonitor * networkMonitor;                                                //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (nonatomic,readonly) HMDCameraResidentMessageHandler * residentMessageHandler;                    //@synthesize residentMessageHandler=_residentMessageHandler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                      //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSDictionary * encodedMostRecentSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(void)auditSnapshotDirectories:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHAPAccessory *)accessory;
-(NSString *)logID;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)registerForMessages;
-(HMFNetMonitor *)networkMonitor;
-(NSSet *)messageReceiverChildren;
-(void)handleCameraSettingsDidChangeNotification:(id)arg1 ;
-(void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(HMDCameraStreamSnapshotHandler *)streamSnapshotHandler;
-(HMDSnapshotRequestHandler *)snapshotRequestHandler;
-(HMDCameraResidentMessageHandler *)residentMessageHandler;
-(void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2 ;
-(void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2 ;
-(void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(BOOL)arg2 ;
-(void)handleAccessoryDisconnected:(id)arg1 ;
-(void)snapshotRelayStream:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayStream:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(HMDNotificationRegistration *)notificationRegistration;
-(void)takeSnapshot:(id)arg1 ;
-(void)releaseSnapshot:(id)arg1 ;
-(void)_removeAllPendingRequests:(id)arg1 ;
-(void)_handleSnapshotRequest:(id)arg1 ;
-(void)_handleSnapshotRemoteRequest:(id)arg1 ;
-(void)_handleSnapshotReceived:(id)arg1 ;
-(void)_handleSnapshotSendFailure:(id)arg1 ;
-(void)_handleReleaseSnapshot:(id)arg1 ;
-(void)_handleCreateSnapshotFromBulletinContext:(id)arg1 ;
-(HMDCameraSnapshotMonitorEvents *)monitorServicesManager;
-(HMDSnapshotSlotManager *)snapshotSlotManager;
-(HMDSnapshotLocalSession *)currentLocalSession;
-(NSMutableDictionary *)currentRemoteSessions;
-(void)setCurrentLocalSession:(HMDSnapshotLocalSession *)arg1 ;
-(NSMutableArray *)pendingSnapshotRequestDuringStreamSetup;
-(NSMutableArray *)pendingRemoteSnapshotRequestDuringStreamSetup;
-(NSString *)imageCacheDirectory;
-(NSDictionary *)encodedMostRecentSnapshot;
-(id)_createSnapshotSessionIDWithMessage:(id)arg1 error:(id*)arg2 ;
-(HMDSnapshotCacheRequestHandler *)snapshotCacheRequestHandler;
-(void)_sendStreamSnapshotRequest:(id)arg1 snapshotSessionID:(id)arg2 ;
-(void)_sendSnapshotRequestLocal:(id)arg1 snapshotSessionID:(id)arg2 ;
-(void)_sendSnapshotRequestStreamReceiver:(id)arg1 snapshotSessionID:(id)arg2 ;
-(void)_sendSnapshotRequestRelayReceiver:(id)arg1 snapshotSessionID:(id)arg2 ;
-(void)_sendSnapshotRequestRelayInitiator:(id)arg1 snapshotSessionID:(id)arg2 ;
-(void)_sendSnapshotRequestStreamInitiator:(id)arg1 snapshotSessionID:(id)arg2 ;
-(void)_sendSnapshotRequestRelayStream:(id)arg1 snapshotSessionID:(id)arg2 ;
-(void)_issueGetSnapshot:(id)arg1 ;
-(void)_sendResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
-(id)_findSessionWithID:(id)arg1 ;
-(void)_endSession:(id)arg1 error:(id)arg2 ;
-(void)_sendRemoteResponse:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotRelaySender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelaySender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotStreamReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotStreamReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 logID:(id)arg5 msgDispatcher:(id)arg6 networkMonitor:(id)arg7 ;
-(void)setCurrentRemoteSessions:(NSMutableDictionary *)arg1 ;
-(void)setNetworkMonitor:(HMFNetMonitor *)arg1 ;
@end

