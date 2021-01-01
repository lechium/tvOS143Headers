/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NEAgentSessionDelegate.h>
#import <libobjc.A.dylib/NEExtensionProviderHostDelegate.h>
#import <libobjc.A.dylib/NEPluginDriver.h>

@protocol NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;
@class NEExtensionProviderHostContext, NSObject, NSString, NSXPCInterface, NSUUID, NSExtension, NSArray;

@interface NEAgentExtension : NSObject <NEAgentSessionDelegate, NEExtensionProviderHostDelegate, NEPluginDriver> {

	BOOL _appsUpdateStarted;
	BOOL _appsUpdateEnding;
	id<NEPluginManagerObjectFactory> _managerObjectFactory;
	NEExtensionProviderHostContext* _sessionContext;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _pluginType;
	NSString* _extensionIdentifier;
	NSXPCInterface* _managerProtocol;
	NSXPCInterface* _driverProtocol;
	NSObject*<OS_dispatch_source> _sendFailedTimer;
	NSUUID* _sessionRequestIdentifier;
	NSString* _extensionPointIdentifier;
	NSExtension* _extension;
	NSArray* _extensionUUIDs;
	/*^block*/id _pendingDisposeCompletion;

}

@property (nonatomic,retain) NSUUID * sessionRequestIdentifier;                                 //@synthesize sessionRequestIdentifier=_sessionRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * extensionPointIdentifier;                             //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                           //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSArray * extensionUUIDs;                                        //@synthesize extensionUUIDs=_extensionUUIDs - In the implementation block
@property (copy) id pendingDisposeCompletion;                                                   //@synthesize pendingDisposeCompletion=_pendingDisposeCompletion - In the implementation block
@property (__weak,readonly) id<NEPluginManagerObjectFactory> managerObjectFactory;              //@synthesize managerObjectFactory=_managerObjectFactory - In the implementation block
@property (nonatomic,retain) NEExtensionProviderHostContext * sessionContext;                   //@synthesize sessionContext=_sessionContext - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * pluginType;                                           //@synthesize pluginType=_pluginType - In the implementation block
@property (nonatomic,readonly) NSString * extensionIdentifier;                                  //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (readonly) NSXPCInterface * managerProtocol;                                          //@synthesize managerProtocol=_managerProtocol - In the implementation block
@property (readonly) NSXPCInterface * driverProtocol;                                           //@synthesize driverProtocol=_driverProtocol - In the implementation block
@property (assign) BOOL appsUpdateStarted;                                                      //@synthesize appsUpdateStarted=_appsUpdateStarted - In the implementation block
@property (assign) BOOL appsUpdateEnding;                                                       //@synthesize appsUpdateEnding=_appsUpdateEnding - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> sendFailedTimer;                               //@synthesize sendFailedTimer=_sendFailedTimer - In the implementation block
@property (nonatomic,readonly) NSArray * uuids; 
@property (nonatomic,readonly) NSXPCInterface * driverInterface; 
@property (nonatomic,readonly) NSXPCInterface * managerInterface; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)wakeup;
-(void)updateConfiguration:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(NSString *)extensionPointIdentifier;
-(NSString *)pluginType;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendExtensionFailed;
-(void)startWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NEExtensionProviderHostContext *)sessionContext;
-(id<NEPluginManagerObjectFactory>)managerObjectFactory;
-(void)extension:(id)arg1 didFailWithError:(id)arg2 ;
-(void)extension:(id)arg1 didStartWithError:(id)arg2 ;
-(void)extensionDidStop:(id)arg1 ;
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5 ;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleCancel;
-(void)handleAppsUninstalled:(id)arg1 ;
-(void)handleAppsUpdateBegins:(id)arg1 ;
-(void)handleAppsUpdateEnding:(id)arg1 ;
-(void)handleAppsUpdateEnds:(id)arg1 ;
-(NSArray *)uuids;
-(NSXPCInterface *)driverInterface;
-(NSXPCInterface *)managerInterface;
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6 ;
-(BOOL)appsUpdateStarted;
-(void)setAppsUpdateStarted:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)sendFailedTimer;
-(void)setSendFailedTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)appsUpdateEnding;
-(void)setAppsUpdateEnding:(BOOL)arg1 ;
-(void)handleExtensionStartedWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSUUID *)sessionRequestIdentifier;
-(void)handleExtensionExit:(id)arg1 ;
-(void)cleanupExtensionWithRequestIdentifier:(id)arg1 ;
-(void)setPendingDisposeCompletion:(id)arg1 ;
-(void)setSessionRequestIdentifier:(NSUUID *)arg1 ;
-(void)setSessionContext:(NEExtensionProviderHostContext *)arg1 ;
-(id)pendingDisposeCompletion;
-(NSXPCInterface *)managerProtocol;
-(NSXPCInterface *)driverProtocol;
-(NSArray *)extensionUUIDs;
@end

