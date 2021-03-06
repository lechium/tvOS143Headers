//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface IDSOTRController : NSObject
{
    NSRecursiveLock *_storageLock;	// 8 = 0x8
    NSMutableDictionary *_sessionStorage;	// 16 = 0x10
    struct _opaque_pthread_mutex_t _lock;	// 24 = 0x18
    NSMutableDictionary *_sessionInfoToToken;	// 88 = 0x58
    NSMutableDictionary *_priorityToCompletionBlocks;	// 96 = 0x60
    NSMutableDictionary *_priorityToTimeoutBlocks;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x00000001003ab874
- (void).cxx_destruct;	// IMP=0x00000001003b7fe4
- (void)_onQueueStartOTRNegotiationWithDeviceIfNeeded:(id)arg1 token:(id)arg2 reset:(_Bool)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001003b5af8
- (void)startOTRNegotiationWithDeviceIfNeeded:(id)arg1 token:(id)arg2 reset:(_Bool)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001003b58a8
- (void)_kickoffOTRNegotiationWithDevice:(id)arg1 token:(id)arg2 negotiationData:(id)arg3;	// IMP=0x00000001003b5514
- (struct _SecMPPublicIdentity *)copyPairedDevicePublicIdentityWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x00000001003b4dc0
- (_Bool)hasMessagableOTRSessionForToken:(id)arg1;	// IMP=0x00000001003b46fc
- (void)processNegotiationData:(id)arg1 deviceUniqueID:(id)arg2 token:(id)arg3 negotiationCount:(unsigned int)arg4;	// IMP=0x00000001003b16ac
- (void)_reportOTRTestResult:(id)arg1 setupTime:(double)arg2 result:(unsigned char)arg3;	// IMP=0x00000001003b1440
- (CDUnknownBlockType)copyOTRTestBlock:(id)arg1;	// IMP=0x00000001003b1300
- (void)setOTRTestBlockFromCompletionBlock:(CDUnknownBlockType)arg1 token:(id)arg2;	// IMP=0x00000001003b0fec
- (void)removeAllCachedSessionsFromMainQueue;	// IMP=0x00000001003b0f84
- (id)copySessionObjectForToken:(id)arg1;	// IMP=0x00000001003b0ea0
- (_Bool)serializeSession:(struct _SecOTRSession *)arg1 token:(id)arg2;	// IMP=0x00000001003b06d0
- (void)_cacheSession:(struct _SecOTRSession *)arg1 token:(id)arg2;	// IMP=0x00000001003b02a0
- (struct _SecOTRSession *)_cachedSessionForToken:(id)arg1;	// IMP=0x00000001003b0124
- (struct _SecOTRSession *)copySessionForToken:(id)arg1;	// IMP=0x00000001003afb84
- (unsigned int)sessionNegotiationCount:(id)arg1;	// IMP=0x00000001003afa4c
- (_Bool)isSessionReady:(id)arg1;	// IMP=0x00000001003af900
- (_Bool)isSessionNegotiating:(id)arg1;	// IMP=0x00000001003af7b4
- (void)resetAllSessions;	// IMP=0x00000001003af5f4
- (void)resumeSessionNegotiation;	// IMP=0x00000001003af06c
- (void)suspendSessionNegotiation:(id)arg1 askedByPairedDevice:(_Bool)arg2;	// IMP=0x00000001003aeb6c
- (void)setSessionNegotiationComplete:(id)arg1;	// IMP=0x00000001003ae67c
- (void)setSessionNegotiationStart:(id)arg1;	// IMP=0x00000001003ae0d4
- (double)sessionStartTimeWithToken:(id)arg1;	// IMP=0x00000001003adfa0
- (void)setSessionReady:(id)arg1;	// IMP=0x00000001003adab0
- (void)setupNewSessionInfoWithToken:(id)arg1;	// IMP=0x00000001003ad8f4
- (void)performOTRSessionBlock:(unsigned char)arg1 token:(id)arg2;	// IMP=0x00000001003ac560
- (void)addOTRSessionBlock:(unsigned char)arg1 sessionBlock:(CDUnknownBlockType)arg2 key:(id)arg3;	// IMP=0x00000001003abb0c
- (id)init;	// IMP=0x00000001003aba20

@end

