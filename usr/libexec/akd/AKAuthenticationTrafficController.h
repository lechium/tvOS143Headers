//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAuthenticationSurrogateManager, AKExpiringCache, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AKAuthenticationTrafficController : NSObject
{
    NSMutableArray *_pendingTrafficRequests;	// 8 = 0x8
    NSMutableDictionary *_authenticatingApps;	// 16 = 0x10
    NSMutableDictionary *_authenticatingDaemons;	// 24 = 0x18
    AKExpiringCache *_expiringCache;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clearanceQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_trafficQueue;	// 48 = 0x30
    AKAuthenticationSurrogateManager *_surrogateManager;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x000000010006bf14
- (void).cxx_destruct;	// IMP=0x000000010006d57c
@property(retain, nonatomic) AKAuthenticationSurrogateManager *surrogateManager; // @synthesize surrogateManager=_surrogateManager;
- (void)_addCachedPasswordInContext:(id)arg1;	// IMP=0x000000010006d428
- (void)_updateContext:(id)arg1 withPassword:(id)arg2 forAppleID:(id)arg3;	// IMP=0x000000010006d2d4
- (void)_tq_invokeTrafficRequest:(id)arg1;	// IMP=0x000000010006d060
- (void)endAuthenticationForAppleID:(id)arg1 password:(id)arg2 error:(id)arg3 context:(id)arg4 client:(id)arg5 clearanceHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010006c990
- (_Bool)_hasValuesInMap:(id)arg1;	// IMP=0x000000010006c888
- (_Bool)_hasActiveAppAuths;	// IMP=0x000000010006c878
- (_Bool)_hasActiveDaemonAuths;	// IMP=0x000000010006c868
- (_Bool)_shouldClearRequest:(id)arg1 withClient:(id)arg2;	// IMP=0x000000010006c33c
- (void)beginAuthenticationWithContext:(id)arg1 client:(id)arg2 clearanceHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010006c078
- (id)init;	// IMP=0x000000010006bf80

@end

