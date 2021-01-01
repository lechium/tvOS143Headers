/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UAUserActivityClientResponseProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMapTable, NSMutableSet, NSUUID, NSSet, NSString;

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serverQ;
	BOOL _connectionInitializationSucceeded;
	NSMapTable* _userActivitiesByUUID;
	BOOL _supportsActivityContinuation;
	BOOL _activityContinuationIsEnabled;
	NSMutableSet* _userActivityUUIDsSendToServer;
	BOOL _registeredForAppResignationMessages;
	BOOL _needToSendInitialMessage;
	NSUUID* _activeUserActivityUUID;
	NSMapTable* _activeUserActivitiesByUUID;

}

@property (readonly) NSObject*<OS_dispatch_queue> serverQ;                    //@synthesize serverQ=_serverQ - In the implementation block
@property (copy) NSUUID * activeUserActivityUUID;                             //@synthesize activeUserActivityUUID=_activeUserActivityUUID - In the implementation block
@property (retain) NSMapTable * userActivitiesByUUID;                         //@synthesize userActivitiesByUUID=_userActivitiesByUUID - In the implementation block
@property (retain) NSMapTable * activeUserActivitiesByUUID;                   //@synthesize activeUserActivitiesByUUID=_activeUserActivitiesByUUID - In the implementation block
@property (copy,readonly) NSSet * userActivityUUIDsSendToServer; 
@property (assign) BOOL needToSendInitialMessage;                             //@synthesize needToSendInitialMessage=_needToSendInitialMessage - In the implementation block
@property (assign) BOOL registeredForAppResignationMessages;                  //@synthesize registeredForAppResignationMessages=_registeredForAppResignationMessages - In the implementation block
@property (readonly) NSXPCConnection * connection; 
@property (readonly) BOOL supportsActivityContinuation;                       //@synthesize supportsActivityContinuation=_supportsActivityContinuation - In the implementation block
@property (readonly) BOOL activityContinuationIsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
+(BOOL)userActivityContinuationSupported;
+(id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)arg1 dynamicType:(id)arg2 kind:(unsigned long long)arg3 teamIdentifier:(id)arg4 ;
+(BOOL)dontConnectToServer;
+(BOOL)shouldSupportActivityContinuation;
-(id)init;
-(void)dealloc;
-(BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(id)activities;
-(void)connectionInterrupted;
-(id)fetchUUID:(id)arg1 intervalToWaitForDocumentSynchonization:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeUserActivity:(id)arg1 ;
-(BOOL)userActivityIsActive:(id)arg1 ;
-(void)markUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2 ;
-(void)makeActive:(id)arg1 ;
-(void)makeInactive:(id)arg1 ;
-(void)pinUserActivity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)tellDaemonAboutNewLSUserActivity:(id)arg1 ;
-(NSUUID *)activeUserActivityUUID;
-(void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(BOOL)arg2 ;
-(BOOL)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)registerForApplicationDeactivateIfNecessary;
-(void)askClientUserActivityToSave:(id)arg1 ;
-(void)askClientUserActivityToSave:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)tellClientUserActivityItWasResumed:(id)arg1 ;
-(void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serverQ;
-(BOOL)supportsActivityContinuation;
-(BOOL)activityContinuationIsEnabled;
-(NSMapTable *)userActivitiesByUUID;
-(void)setNeedToSendInitialMessage:(BOOL)arg1 ;
-(void)sendInitialMessage:(BOOL)arg1 ;
-(id)userActivityForUUID:(id)arg1 ;
-(NSMapTable *)activeUserActivitiesByUUID;
-(void)setActiveUserActivityUUID:(NSUUID *)arg1 ;
-(id)activeActivitiesByPriority;
-(void)addUserActivity:(id)arg1 ;
-(NSSet *)userActivityUUIDsSendToServer;
-(void)sendToIndexerIfAppropriate:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)registeredForAppResignationMessages;
-(void)setRegisteredForAppResignationMessages:(BOOL)arg1 ;
-(void)sendCurrentActivityToIndexer:(id)arg1 ;
-(void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 ;
-(id)encodeUserActivity:(id)arg1 ;
-(id)createByDecodingUserActivity:(id)arg1 ;
-(BOOL)hasUserActivityWithUUID:(id)arg1 ;
-(void)setUserActivitiesByUUID:(NSMapTable *)arg1 ;
-(void)setActiveUserActivitiesByUUID:(NSMapTable *)arg1 ;
-(BOOL)needToSendInitialMessage;
@end

