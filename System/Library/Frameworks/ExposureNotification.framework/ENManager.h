/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, ENUIRemotePresentationController, OS_dispatch_queue;
@class ENExposureDetectionClientSession, NSMutableArray, NSObject;

@interface ENManager : NSObject {

	BOOL _activateCalled;
	ENExposureDetectionClientSession* _detectionSession;
	NSMutableArray* _exposureWindows;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_xpc_object> _xpcCnx;
	BOOL _isTestEntitlement;
	id<ENUIRemotePresentationController> _remotePresentationController;
	BOOL _exposureNotificationEnabled;
	BOOL _exposureNotificationPaused;
	BOOL _analyticsEnabled;
	unsigned _clientID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _exposureNotificationStatus;
	/*^block*/id _invalidationHandler;
	NSObject*<OS_xpc_object> _testListenerEndpoint;
	/*^block*/id _activityHandler;
	/*^block*/id _diagnosisKeysAvailableHandler;
	/*^block*/id _statusChangedHandler;

}

@property (assign,nonatomic) unsigned clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,copy) id activityHandler;                                           //@synthesize activityHandler=_activityHandler - In the implementation block
@property (nonatomic,copy) id diagnosisKeysAvailableHandler;                             //@synthesize diagnosisKeysAvailableHandler=_diagnosisKeysAvailableHandler - In the implementation block
@property (nonatomic,copy) id statusChangedHandler;                                      //@synthesize statusChangedHandler=_statusChangedHandler - In the implementation block
@property (nonatomic,readonly) BOOL exposureNotificationPaused;                          //@synthesize exposureNotificationPaused=_exposureNotificationPaused - In the implementation block
@property (nonatomic,readonly) BOOL analyticsEnabled;                                    //@synthesize analyticsEnabled=_analyticsEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) long long exposureNotificationStatus;                     //@synthesize exposureNotificationStatus=_exposureNotificationStatus - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                       //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) BOOL exposureNotificationEnabled;                         //@synthesize exposureNotificationEnabled=_exposureNotificationEnabled - In the implementation block
+(long long)authorizationStatus;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(void)_reactivate;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(unsigned)clientID;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActivityHandler:(id)arg1 ;
-(id)activityHandler;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)_ensureXPCStarted;
-(void)_xpcReceivedEvent:(id)arg1 ;
-(void)_xpcReceivedMessage:(id)arg1 ;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticShow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setClientID:(unsigned)arg1 ;
-(NSObject*<OS_xpc_object>)testListenerEndpoint;
-(void)setTestListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)statusChangedHandler;
-(void)setStatusChangedHandler:(id)arg1 ;
-(void)exposureDetectionActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)exposureDetectionAddKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)exposureDetectionFinishWithCompletion:(/*^block*/id)arg1 ;
-(void)exposureDetectionGetExposureInfoWithMaximumCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)activateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)exposureDetectionFileActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)exposureDetectionFileAdd:(id)arg1 signatureURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)exposureDetectionFileFinishWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateInitial:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_setActivationPropertiesOnRequest:(id)arg1 error:(id*)arg2 ;
-(void)_entitlementCheckUpdate:(id)arg1 ;
-(void)_xpcHandleStatusChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)_tccCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)_entitlementCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)_xpcHandleActivity:(id)arg1 ;
-(void)_xpcHandlePreAuthorizedDiagnosisKeysAvailable:(id)arg1 ;
-(id)detectExposuresWithConfiguration:(id)arg1 diagnosisKeyURLs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_getExposureInfoCompleted:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getExposureWindowsFromIndex:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getExposureWindowsCompleted:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_preAuthorizeDiagnosisKeysWithSessionID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleRemotePresentationRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_checkRemoteDialogueRequirementForRequestType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getDiagnosisKeysForTesting:(BOOL)arg1 forceRefresh:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_getDiagnosisKeysReply:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetDataWithFlags:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)exposureDetectionGetExposureInfoCompleted:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_populateDetectionHistoryChecks:(id)arg1 forSessions:(id)arg2 sessionIndex:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDetectionHistorySessionsWithCompletion:(/*^block*/id)arg1 ;
-(void)getDetectionHistoryFilesForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getDetectionHistoryFilesCompleted:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getDetectionHistorySessionsCompleted:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRegionVisitHistoryWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchConfigurationsForRegion:(id)arg1 fetchReason:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)getUserTraveledWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setExposureNotificationEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPaused:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pauseWithExpiration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getPreAuthorizeDiagnosisKeysEnabledForRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPreAuthorizeDiagnosisKeysEnabled:(BOOL)arg1 region:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getRegionHistoryEnabledWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRegionHistoryEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getRegionMonitorEnabledWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getTravelStatusEnabledWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getTravelStatusEnabledForRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTravelStatusEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTravelStatusEnabled:(BOOL)arg1 region:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)detectExposuresWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)getExposureInfoFromSummary:(id)arg1 userExplanation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getExposureWindowsFromSummary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)preAuthorizeDiagnosisKeysWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestPreAuthorizedDiagnosisKeysWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getDiagnosisKeysWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getTestDiagnosisKeysWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetAllDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)triggerNotificationOfType:(int)arg1 appBundleIdentifier:(id)arg2 classificationName:(id)arg3 interval:(id)arg4 region:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)getDetectionHistoryChecksWithCompletion:(/*^block*/id)arg1 ;
-(void)startTestVerificationSessionWithCode:(id)arg1 region:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchTestMetadataForSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishTestVerificationForSession:(id)arg1 userDidConsent:(BOOL)arg2 metadata:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)activeRegionWithCompletion:(/*^block*/id)arg1 ;
-(void)regionConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)allRegionConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(void)allRegionServerConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(void)regionServerConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)agencyConfigurationForLocale:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)allAgencyConfigurationsForLocale:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)regionHistoryWithCompletion:(/*^block*/id)arg1 ;
-(void)setRegionConsent:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRegionConsent:(long long)arg1 region:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRegionUserConsent:(id)arg1 region:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteExposureDetectionHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadAndDetectExposure:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)exposureNotificationGetStatusForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getDataVaultSizeWithCompletion:(/*^block*/id)arg1 ;
-(void)getInfoForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAllEntitiesWithCompletion:(/*^block*/id)arg1 ;
-(void)onboardingDidStartForRegion:(id)arg1 withSource:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getLastExposureNotificationWithCompletion:(/*^block*/id)arg1 ;
-(void)setAutomaticRegionSwitchEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAvailabilityAlertEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentActiveApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveEntityWithAppBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveEntityWithRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDeveloperServerConfiguration:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setWeeklySummaryAlertEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearDeveloperServerConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)remotePresentationRequestDidComplete:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchConfigurationsForRegion:(id)arg1 forceServerFetch:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchSubdivisionsForCountry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signWithDeviceIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showBuddyForRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)exposureNotificationStatus;
-(BOOL)exposureNotificationEnabled;
-(id)diagnosisKeysAvailableHandler;
-(void)setDiagnosisKeysAvailableHandler:(id)arg1 ;
-(BOOL)exposureNotificationPaused;
-(BOOL)analyticsEnabled;
@end

