//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AppMetricsMonitor, DownloadAgentSupervisor, InGameAnalyticsListener, JobAgentSupervisor, JobManagerListener, JobScheduler, LaunchServicesObserver, NSCountedSet, NSMutableDictionary, NSXPCListener, ODRAppReviewListener, ODRDevtoolsListener, ODRDiagnosticsListener, ODRLaunchServicesListener, ODRServiceDelegate, OctaneListener, RequestBroker, RequestListener, SoftwareUpdateListener, StoreQueueListener, XPCServiceBroker;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject
{
    int _defaultsToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    InGameAnalyticsListener *_inGameAnalyticsDelegate;	// 24 = 0x18
    NSXPCListener *_inGameAnalyticsListener;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_jetsamSource;	// 40 = 0x28
    JobManagerListener *_jobManagerDelegate;	// 48 = 0x30
    NSXPCListener *_jobManagerListener;	// 56 = 0x38
    LaunchServicesObserver *_launchServicesObserver;	// 64 = 0x40
    OctaneListener *_octaneDelegate;	// 72 = 0x48
    NSXPCListener *_octaneListener;	// 80 = 0x50
    ODRAppReviewListener *_odrAppReviewDelegate;	// 88 = 0x58
    NSXPCListener *_odrAppReviewListener;	// 96 = 0x60
    ODRDiagnosticsListener *_odrCtlDelegate;	// 104 = 0x68
    NSXPCListener *_odrCtlListener;	// 112 = 0x70
    ODRDevtoolsListener *_odrDevtoolsDelegate;	// 120 = 0x78
    NSXPCListener *_odrDevtoolsListener;	// 128 = 0x80
    ODRServiceDelegate *_odrFoundationDelegate;	// 136 = 0x88
    NSXPCListener *_odrFoundationListener;	// 144 = 0x90
    ODRLaunchServicesListener *_odrLaunchServicesDelegate;	// 152 = 0x98
    NSXPCListener *_odrLaunchServicesListener;	// 160 = 0xa0
    NSXPCListener *_personalizationStoreService;	// 168 = 0xa8
    RequestBroker *_requestBroker;	// 176 = 0xb0
    RequestListener *_requestDelegate;	// 184 = 0xb8
    NSXPCListener *_requestListener;	// 192 = 0xc0
    NSObject<OS_dispatch_source> *_signalSource;	// 200 = 0xc8
    NSXPCListener *_softwareUpdateListener;	// 208 = 0xd0
    SoftwareUpdateListener *_softwareUpdateDelegate;	// 216 = 0xd8
    NSXPCListener *_storeQueueListener;	// 224 = 0xe0
    StoreQueueListener *_storeQueueDelegate;	// 232 = 0xe8
    NSCountedSet *_transactionCount;	// 240 = 0xf0
    NSMutableDictionary *_transactionStore;	// 248 = 0xf8
    XPCServiceBroker *_serviceBroker;	// 256 = 0x100
    DownloadAgentSupervisor *_downloadSupervisor;	// 264 = 0x108
    JobAgentSupervisor *_jobSupervisor;	// 272 = 0x110
    JobScheduler *_jobScheduler;	// 280 = 0x118
    AppMetricsMonitor *_appMetricsMonitor;	// 288 = 0x120
}

+ (void)_performODRSoftwareUpdateHousekeeping:(_Bool)arg1;	// IMP=0x0000000100012fb4
+ (_Bool)isPasscodeDisabled;	// IMP=0x0000000100010b38
+ (_Bool)isDeviceUnlocked;	// IMP=0x0000000100010b0c
+ (id)daemon;	// IMP=0x0000000100010980
- (void).cxx_destruct;	// IMP=0x0000000100013b3c
@property(readonly, nonatomic) JobAgentSupervisor *jobSupervisor; // @synthesize jobSupervisor=_jobSupervisor;
@property(readonly, nonatomic) JobScheduler *jobScheduler; // @synthesize jobScheduler=_jobScheduler;
@property(readonly, nonatomic) DownloadAgentSupervisor *downloadSupervisor; // @synthesize downloadSupervisor=_downloadSupervisor;
@property(readonly, nonatomic) AppMetricsMonitor *appMetricsMonitor; // @synthesize appMetricsMonitor=_appMetricsMonitor;
- (void)_setAMSProperties;	// IMP=0x0000000100013ac4
- (void)_startODRXPCListeners;	// IMP=0x0000000100013918
- (void)_setupODRXPCMaintenanceTask;	// IMP=0x000000010001343c
- (void)_setupODRDataMigrationTask;	// IMP=0x00000001000133d8
- (void)_setupCacheDeleteCoordinator;	// IMP=0x0000000100013320
- (void)_handleMigrationDidFinishNotification:(id)arg1;	// IMP=0x0000000100012f90
- (void)_updateDAAPDatabasesIfNeeded;	// IMP=0x0000000100012ec4
- (void)_startXPCModernListeners;	// IMP=0x0000000100012318
- (void)_startXPCListeners;	// IMP=0x0000000100012150
- (void)_startMidChangedNotifier;	// IMP=0x0000000100011f84
- (void)_startAppInstallQueue;	// IMP=0x0000000100011f04
- (void)_setupSignalHandler;	// IMP=0x0000000100011e2c
- (void)_startODR;	// IMP=0x0000000100011bdc
- (void)_startLaunchServicesObserver;	// IMP=0x0000000100011b98
- (void)_setupLogging;	// IMP=0x0000000100011a40
- (id)_createListenerForMachServiceName:(id)arg1 withDelegate:(id)arg2;	// IMP=0x00000001000118a8
- (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x0000000100011798
- (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x0000000100011680
- (void)performKeepAliveTransaction:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000115fc
- (void)start;	// IMP=0x0000000100010d78
- (_Bool)isMultiUser;	// IMP=0x0000000100010d70
- (void)endShowingDialog;	// IMP=0x0000000100010c64
- (void)beginShowingDialog;	// IMP=0x0000000100010b58
- (void)dealloc;	// IMP=0x0000000100010ac0
- (id)init;	// IMP=0x0000000100010a20

@end
