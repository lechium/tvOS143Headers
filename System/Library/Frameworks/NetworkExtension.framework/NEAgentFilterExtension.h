/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderHostDelegate.h>
#import <libobjc.A.dylib/NEAgentSessionDelegate.h>
#import <libobjc.A.dylib/NEFilterPluginDriver.h>

@protocol NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSExtension, NEFilterExtensionProviderHostContext, NEFilterControlExtensionProviderHostContext, NSUUID, NSObject, NSXPCListenerEndpoint, NEFilterProviderConfiguration, NSArray, NSXPCInterface;

@interface NEAgentFilterExtension : NSObject <NEFilterExtensionProviderHostDelegate, NEAgentSessionDelegate, NEFilterPluginDriver> {

	BOOL _dataExtensionInitialized;
	BOOL _controlExtensionInitialized;
	BOOL _appsUpdateStarted;
	BOOL _appsUpdateEnding;
	int _crypto_kernel_salt;
	id<NEPluginManagerObjectFactory> _managerObjectFactory;
	NSString* _pluginType;
	NSExtension* _dataExtension;
	NSExtension* _controlExtension;
	NEFilterExtensionProviderHostContext* _dataSessionContext;
	NEFilterControlExtensionProviderHostContext* _controlSessionContext;
	NSUUID* _dataSessionRequestIdentifier;
	NSUUID* _controlSessionRequestIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _dataExtensionIdentifier;
	NSString* _controlExtensionIdentifier;
	NSXPCListenerEndpoint* _clientListenerEndpoint;
	NEFilterProviderConfiguration* _configuration;
	NSArray* _extensionUUIDs;
	NSObject*<OS_dispatch_source> _sendFailedTimer;
	cfil_crypto_state* _crypto_state;

}

@property (__weak,readonly) id<NEPluginManagerObjectFactory> managerObjectFactory;                   //@synthesize managerObjectFactory=_managerObjectFactory - In the implementation block
@property (nonatomic,readonly) NSString * pluginType;                                                //@synthesize pluginType=_pluginType - In the implementation block
@property (retain) NSExtension * dataExtension;                                                      //@synthesize dataExtension=_dataExtension - In the implementation block
@property (retain) NSExtension * controlExtension;                                                   //@synthesize controlExtension=_controlExtension - In the implementation block
@property (retain) NEFilterExtensionProviderHostContext * dataSessionContext;                        //@synthesize dataSessionContext=_dataSessionContext - In the implementation block
@property (retain) NEFilterControlExtensionProviderHostContext * controlSessionContext;              //@synthesize controlSessionContext=_controlSessionContext - In the implementation block
@property (retain) NSUUID * dataSessionRequestIdentifier;                                            //@synthesize dataSessionRequestIdentifier=_dataSessionRequestIdentifier - In the implementation block
@property (retain) NSUUID * controlSessionRequestIdentifier;                                         //@synthesize controlSessionRequestIdentifier=_controlSessionRequestIdentifier - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                               //@synthesize queue=_queue - In the implementation block
@property (retain) NSString * dataExtensionIdentifier;                                               //@synthesize dataExtensionIdentifier=_dataExtensionIdentifier - In the implementation block
@property (retain) NSString * controlExtensionIdentifier;                                            //@synthesize controlExtensionIdentifier=_controlExtensionIdentifier - In the implementation block
@property (assign) BOOL dataExtensionInitialized;                                                    //@synthesize dataExtensionInitialized=_dataExtensionInitialized - In the implementation block
@property (assign) BOOL controlExtensionInitialized;                                                 //@synthesize controlExtensionInitialized=_controlExtensionInitialized - In the implementation block
@property (retain) NSXPCListenerEndpoint * clientListenerEndpoint;                                   //@synthesize clientListenerEndpoint=_clientListenerEndpoint - In the implementation block
@property (retain) NEFilterProviderConfiguration * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSArray * extensionUUIDs;                                             //@synthesize extensionUUIDs=_extensionUUIDs - In the implementation block
@property (assign) BOOL appsUpdateStarted;                                                           //@synthesize appsUpdateStarted=_appsUpdateStarted - In the implementation block
@property (assign) BOOL appsUpdateEnding;                                                            //@synthesize appsUpdateEnding=_appsUpdateEnding - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> sendFailedTimer;                                    //@synthesize sendFailedTimer=_sendFailedTimer - In the implementation block
@property (assign) cfil_crypto_state* crypto_state;                                                  //@synthesize crypto_state=_crypto_state - In the implementation block
@property (assign) int crypto_kernel_salt;                                                           //@synthesize crypto_kernel_salt=_crypto_kernel_salt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * uuids; 
@property (nonatomic,readonly) NSXPCInterface * driverInterface; 
@property (nonatomic,readonly) NSXPCInterface * managerInterface; 
+(BOOL)authenticateFlowWithState:(cfil_crypto_state*)arg1 crypto_key:(id)arg2 flow:(id)arg3 salt:(unsigned)arg4 isKernelSocket:(BOOL)arg5 ;
-(void)dealloc;
-(NEFilterProviderConfiguration *)configuration;
-(void)setConfiguration:(NEFilterProviderConfiguration *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)wakeup;
-(void)updateConfiguration:(id)arg1 ;
-(NSString *)pluginType;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendExtensionFailed;
-(void)startWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
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
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(void)report:(id)arg1 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)appsUpdateStarted;
-(void)setAppsUpdateStarted:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)sendFailedTimer;
-(void)setSendFailedTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)appsUpdateEnding;
-(void)setAppsUpdateEnding:(BOOL)arg1 ;
-(void)handleExtensionExit:(id)arg1 ;
-(NSArray *)extensionUUIDs;
-(void)handleControlExtensionInitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleDataExtensionInitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopFilterExtensionWithReason:(int)arg1 ;
-(NSString *)dataExtensionIdentifier;
-(NSString *)controlExtensionIdentifier;
-(void)sendFilterStatus:(long long)arg1 withError:(long long)arg2 ;
-(void)startFilter;
-(void)getFilterClientConnectionWithCompletionHandler:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDataSessionRequestIdentifier:(NSUUID *)arg1 ;
-(NSExtension *)dataExtension;
-(NEFilterExtensionProviderHostContext *)dataSessionContext;
-(void)setControlSessionRequestIdentifier:(NSUUID *)arg1 ;
-(NSExtension *)controlExtension;
-(NEFilterControlExtensionProviderHostContext *)controlSessionContext;
-(void)setDataExtension:(NSExtension *)arg1 ;
-(NSUUID *)dataSessionRequestIdentifier;
-(void)cleanupDataExtensionWithRequestIdentifier:(id)arg1 ;
-(void)setControlExtension:(NSExtension *)arg1 ;
-(NSUUID *)controlSessionRequestIdentifier;
-(void)cleanupControlExtensionWithRequestIdentifier:(id)arg1 ;
-(void)setDataExtensionInitialized:(BOOL)arg1 ;
-(void)resetFilterSettings;
-(void)setDataSessionContext:(NEFilterExtensionProviderHostContext *)arg1 ;
-(void)setControlSessionContext:(NEFilterControlExtensionProviderHostContext *)arg1 ;
-(void)setControlExtensionInitialized:(BOOL)arg1 ;
-(void)cleanupOnStartFailure;
-(void)startControlExtensionWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDataExtensionWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)dataExtensionInitialized;
-(BOOL)controlExtensionInitialized;
-(void)startFilterExtension;
-(void)savedConfigurationChanged:(id)arg1 ;
-(void)handleStopCompleteWithError:(id)arg1 ;
-(int)crypto_kernel_salt;
-(id)generateClientKey:(int)arg1 salt:(unsigned)arg2 ;
-(BOOL)sendCryptoKeyWithControlSocket:(int)arg1 crypto_key:(id)arg2 ;
-(id)sanitizeFilterFlow:(id)arg1 ;
-(id)sanitizeReport:(id)arg1 ;
-(cfil_crypto_state*)crypto_state;
-(NSXPCListenerEndpoint *)clientListenerEndpoint;
-(void)setClientListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(long long)sanitizeFilterAction:(long long)arg1 ;
-(long long)sanitizeFilterReportEvent:(long long)arg1 ;
-(BOOL)authenticateFlow:(id)arg1 ;
-(void)createPacketChannelForExtension:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDataExtensionIdentifier:(NSString *)arg1 ;
-(void)setControlExtensionIdentifier:(NSString *)arg1 ;
-(void)setCrypto_state:(cfil_crypto_state*)arg1 ;
-(void)setCrypto_kernel_salt:(int)arg1 ;
@end

