/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKSettings.h>

@protocol OS_dispatch_queue;
@class NSString, TVHKMediaServerDiscoveryConfiguration, NSObject;

@interface TVHKMediaServerDiscoverySettings : TVHKSettings {

	BOOL _cacheIPAddresses;
	BOOL _logVerbosely;
	NSString* _serverIPAddress;
	TVHKMediaServerDiscoveryConfiguration* _mediaServerDiscoveryConfiguration;
	NSObject*<OS_dispatch_queue> _serialProcessingQueue;
	unsigned long long _homeSharingGroupIdentifierFetchContext;

}

@property (nonatomic,copy) TVHKMediaServerDiscoveryConfiguration * mediaServerDiscoveryConfiguration;              //@synthesize mediaServerDiscoveryConfiguration=_mediaServerDiscoveryConfiguration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingQueue;                                   //@synthesize serialProcessingQueue=_serialProcessingQueue - In the implementation block
@property (assign,nonatomic) unsigned long long homeSharingGroupIdentifierFetchContext;                            //@synthesize homeSharingGroupIdentifierFetchContext=_homeSharingGroupIdentifierFetchContext - In the implementation block
@property (assign,nonatomic) BOOL cacheIPAddresses;                                                                //@synthesize cacheIPAddresses=_cacheIPAddresses - In the implementation block
@property (assign,nonatomic) BOOL logVerbosely;                                                                    //@synthesize logVerbosely=_logVerbosely - In the implementation block
@property (nonatomic,copy) NSString * serverIPAddress;                                                             //@synthesize serverIPAddress=_serverIPAddress - In the implementation block
+(id)new;
+(id)sharedInstance;
+(BOOL)_validateMediaServerDiscoveryMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingGroupIdentifier:(id)arg3 ;
-(id)init;
-(id)_init;
-(void)setMediaServerDiscoveryConfigurationWithMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingPassword:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_refreshFromPreferences;
-(void)_initializeFromPreferences;
-(void)_writeMediaServerDiscoveryConfigurationToPreferences:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialProcessingQueue;
-(void)_setMediaServerDiscoveryConfigurationWithMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingPassword:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_refreshFromPreferencesAndShouldNotify:(BOOL)arg1 ;
-(unsigned long long)homeSharingGroupIdentifierFetchContext;
-(void)setHomeSharingGroupIdentifierFetchContext:(unsigned long long)arg1 ;
-(TVHKMediaServerDiscoveryConfiguration *)mediaServerDiscoveryConfiguration;
-(void)setMediaServerDiscoveryConfiguration:(TVHKMediaServerDiscoveryConfiguration *)arg1 ;
-(void)_fetchHomeSharingGroupIdentifierWithAccountName:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_readMediaServerDiscoveryConfigurationFromPreferences;
-(void)setCacheIPAddresses:(BOOL)arg1 ;
-(BOOL)cacheIPAddresses;
-(void)setServerIPAddress:(NSString *)arg1 ;
-(NSString *)serverIPAddress;
-(void)setLogVerbosely:(BOOL)arg1 ;
-(BOOL)logVerbosely;
-(void)setSerialProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

