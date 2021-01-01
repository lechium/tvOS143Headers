/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKNanoSyncControlClient.h>

@class HKProxyProvider, NSString;

@interface HKNanoSyncControl : NSObject <_HKXPCExportable, HKNanoSyncControlClient> {

	HKProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)fetchNanoSyncPairedDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)forceNanoSyncWithPullRequest:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceLastChanceNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)resetNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

