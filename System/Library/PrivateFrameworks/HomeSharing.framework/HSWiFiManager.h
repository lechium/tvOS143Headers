/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeSharing/HomeSharing-Structs.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HSWiFiManager : NSObject <ICEnvironmentMonitorObserver> {

	SCPreferencesRef _wifiPreferences;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _wiFiEnabled;
	BOOL _wiFiAssociated;

}

@property (assign,getter=isWiFiEnabled,nonatomic) BOOL wiFiEnabled;                    //@synthesize wiFiEnabled=_wiFiEnabled - In the implementation block
@property (assign,getter=isWiFiAssociated,nonatomic) BOOL wiFiAssociated;              //@synthesize wiFiAssociated=_wiFiAssociated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWiFiManager;
-(id)init;
-(void)dealloc;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(BOOL)isWiFiEnabled;
-(BOOL)isWiFiAssociated;
-(id)_processIdentifier;
-(void)setWiFiEnabled:(BOOL)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(BOOL)_getWiFiEnabledFromPrefs;
-(BOOL)_getWiFiAssociated;
-(void)setWiFiAssociated:(BOOL)arg1 ;
@end

