/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventConsumer.h>

@protocol MPCPlaybackEngineEventStreamSubscription;
@class MPCPlaybackEngine, NSString;

@interface MPCPlaybackEngineEnvironmentConsumer : NSObject <MPCPlaybackEngineEventObserving, ICEnvironmentMonitorObserver, MPCPlaybackEngineEventConsumer> {

	os_unfair_lock_s _lock;
	long long _reachability;
	MPCPlaybackEngine* _playbackEngine;
	id<MPCPlaybackEngineEventStreamSubscription> _subscription;

}

@property (nonatomic,readonly) id<MPCPlaybackEngineEventStreamSubscription> subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(id<MPCPlaybackEngineEventStreamSubscription>)subscription;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)subscribeToEventStream:(id)arg1 ;
-(void)unsubscribeFromEventStream:(id)arg1 ;
-(void)engine:(id)arg1 didChangeAccounts:(id)arg2 ;
-(void)_snapshotAccount:(id)arg1 eventType:(id)arg2 atTime:(SCD_Struct_MP10)arg3 ;
-(void)_devicePrivateListeningDidChange:(id)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
-(void)_snapshotDeviceWithEvent:(id)arg1 nudge:(int)arg2 ;
-(void)_snapshotNetworkReachabilityWithEvent:(id)arg1 nudge:(int)arg2 ;
-(void)_snapshotNetworkTypeWithEvent:(id)arg1 nudge:(int)arg2 ;
-(void)_addEventForAccountIdentifier:(id)arg1 cursor:(id)arg2 event:(id)arg3 nudge:(int)arg4 ;
-(void)_snapshotNetworkReachabilityAtTime:(SCD_Struct_MP10)arg1 force:(BOOL)arg2 ;
-(void)_snapshotNetworkTypeAtTime:(SCD_Struct_MP10)arg1 ;
-(void)_snapshotDeviceAtTime:(SCD_Struct_MP10)arg1 ;
-(void)_snapshotAccount:(id)arg1 eventType:(id)arg2 event:(id)arg3 nudge:(int)arg4 ;
@end

