/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol TVHKMediaServerManagerDelegate, OS_dispatch_source;
@class NSString, NSNetServiceBrowser, NSMutableSet, NSObject, NSSet;

@interface TVHKMediaServerManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	BOOL _startedDiscovery;
	unsigned long long _discoveryMode;
	NSString* _homeSharingGroupIdentifier;
	id<TVHKMediaServerManagerDelegate> _delegate;
	NSNetServiceBrowser* _serviceBrowser;
	NSMutableSet* _monitoredServices;
	NSMutableSet* _mutableMediaServers;
	NSMutableSet* _mediaServerIdentifiersBeingVerified;
	NSMutableSet* _mediaServerIdentifiersWaitingToBeRediscovered;
	NSObject*<OS_dispatch_source> _mediaServerRediscoveryTimer;

}

@property (nonatomic,copy) NSString * homeSharingGroupIdentifier;                                         //@synthesize homeSharingGroupIdentifier=_homeSharingGroupIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long discoveryMode;                                            //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * serviceBrowser;                                        //@synthesize serviceBrowser=_serviceBrowser - In the implementation block
@property (nonatomic,readonly) NSMutableSet * monitoredServices;                                          //@synthesize monitoredServices=_monitoredServices - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutableMediaServers;                                        //@synthesize mutableMediaServers=_mutableMediaServers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mediaServerIdentifiersBeingVerified;                        //@synthesize mediaServerIdentifiersBeingVerified=_mediaServerIdentifiersBeingVerified - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mediaServerIdentifiersWaitingToBeRediscovered;              //@synthesize mediaServerIdentifiersWaitingToBeRediscovered=_mediaServerIdentifiersWaitingToBeRediscovered - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> mediaServerRediscoveryTimer;                   //@synthesize mediaServerRediscoveryTimer=_mediaServerRediscoveryTimer - In the implementation block
@property (assign,nonatomic) BOOL startedDiscovery;                                                       //@synthesize startedDiscovery=_startedDiscovery - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mediaServers; 
@property (__weak) id<TVHKMediaServerManagerDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_bonjourServiceTypeWithServiceBaseType:(id)arg1 serviceSubType:(id)arg2 ;
+(id)_homeSharingGroupIdentifierWithTXTRecord:(id)arg1 ;
+(id)_mediaServerIdentifierWithTXTRecord:(id)arg1 ;
+(id)_bonjourServiceConfigurationWithService:(id)arg1 ;
+(id)_mediaServerWithIdentifier:(id)arg1 service:(id)arg2 txtRecord:(id)arg3 ;
+(id)_stringFromTXTRecord:(id)arg1 forKey:(id)arg2 ;
+(unsigned long long)_uint64ValueWithHexString:(id)arg1 ;
+(unsigned long long)_mediaServerTypeFromServiceType:(id)arg1 ;
+(unsigned long long)_mediaServerTypeWithService:(id)arg1 andTXTRecord:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<TVHKMediaServerManagerDelegate>)delegate;
-(void)setDelegate:(id<TVHKMediaServerManagerDelegate>)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(void)setDiscoveryMode:(unsigned long long)arg1 ;
-(unsigned long long)discoveryMode;
-(NSNetServiceBrowser *)serviceBrowser;
-(void)setServiceBrowser:(NSNetServiceBrowser *)arg1 ;
-(NSMutableSet *)mutableMediaServers;
-(void)_onMainQueue_startDiscovery;
-(void)_onMainQueue_stopDiscovery;
-(void)_onMainQueue_netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)_onMainQueue_netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)_onMainQueue_netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)_onMainQueue_applicationWillEnterForeground;
-(void)_onMainQueue_applicationDidEnterBackground;
-(BOOL)startedDiscovery;
-(NSString *)homeSharingGroupIdentifier;
-(void)setStartedDiscovery:(BOOL)arg1 ;
-(void)_onMainQueue_startServiceBrowsing;
-(void)_handleApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_onMainQueue_stopServiceBrowsingAndMonitoring;
-(void)_onMainQueue_removeAllMediaServers;
-(id)_onMainQueue_serviceType;
-(NSMutableSet *)monitoredServices;
-(NSMutableSet *)mediaServerIdentifiersBeingVerified;
-(NSMutableSet *)mediaServerIdentifiersWaitingToBeRediscovered;
-(void)_onMainQueue_stopMediaServerRediscoveryTimer;
-(id)_onMainQueue_mediaServerForBonjourServiceName:(id)arg1 ;
-(void)_handleVerifyMediaServer:(id)arg1 isAvailableCompletionWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_onMainQueue_removeMediaServer:(id)arg1 ;
-(void)_onMainQueue_handleDiscoveredService:(id)arg1 withTXTRecord:(id)arg2 ;
-(id)_onMainQueue_mediaServerForIdentifier:(id)arg1 ;
-(void)_onMainQueue_addMediaServer:(id)arg1 ;
-(NSSet *)mediaServers;
-(void)_onMainQueue_startMediaServerRediscoveryTimer;
-(void)setMediaServerRediscoveryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_onMainQueue_handleMediaServerRediscoveryTimer;
-(NSObject*<OS_dispatch_source>)mediaServerRediscoveryTimer;
-(id)initWithMode:(unsigned long long)arg1 homeSharingGroupIdentifier:(id)arg2 ;
-(void)startDiscoveringMediaServers;
-(void)stopDiscoveringMediaServers;
-(unsigned long long)countOfMediaServers;
-(id)enumeratorOfMediaServers;
-(id)memberOfMediaServers:(id)arg1 ;
-(void)setHomeSharingGroupIdentifier:(NSString *)arg1 ;
@end

