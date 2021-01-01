//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate;
@protocol PDNetworkTaskManagerProtocol;

@interface PDNetworkTask : NSObject <NSSecureCoding>
{
    _Bool _started;	// 8 = 0x8
    _Bool _canceled;	// 9 = 0x9
    unsigned long long _nextBackoffLevel;	// 16 = 0x10
    unsigned long long _nextBackoffIteration;	// 24 = 0x18
    _Bool _canRequestReauthentication;	// 32 = 0x20
    _Bool _isValid;	// 33 = 0x21
    id <PDNetworkTaskManagerProtocol> _manager;	// 40 = 0x28
    NSDate *_creationDate;	// 48 = 0x30
    NSDate *_nextStartDate;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000e410c
- (void).cxx_destruct;	// IMP=0x00000001000e43e4
@property(retain, nonatomic) NSDate *nextStartDate; // @synthesize nextStartDate=_nextStartDate;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) _Bool canRequestReauthentication; // @synthesize canRequestReauthentication=_canRequestReauthentication;
@property(nonatomic) __weak id <PDNetworkTaskManagerProtocol> manager; // @synthesize manager=_manager;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000e4274
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e4114
- (void)performReset;	// IMP=0x00000001000e40fc
- (void)performCancel;	// IMP=0x00000001000e40f8
- (void)performStart:(_Bool)arg1;	// IMP=0x00000001000e40f4
- (unsigned long long)numberOfBackoffLevels;	// IMP=0x00000001000e40ec
- (const CDStruct_316206b0 *)backoffLevels;	// IMP=0x00000001000e40e0
- (void)mergeWithNewerTask:(id)arg1;	// IMP=0x00000001000e40dc
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x00000001000e40d4
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x00000001000e40cc
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x00000001000e40c4
- (void)failForAuthentication;	// IMP=0x00000001000e3fd0
- (void)fail;	// IMP=0x00000001000e3edc
- (void)succeed;	// IMP=0x00000001000e3de8
- (void)reportWarnings:(id)arg1 forSubtask:(id)arg2;	// IMP=0x00000001000e3d04
- (void)reportWarnings:(id)arg1;	// IMP=0x00000001000e3c34
- (void)reportError:(id)arg1 forSubtask:(id)arg2;	// IMP=0x00000001000e3b50
- (void)reportError:(id)arg1;	// IMP=0x00000001000e3a80
- (void)reportStateChange;	// IMP=0x00000001000e39c4
- (void)deliverResult:(id)arg1 forSubtask:(id)arg2;	// IMP=0x00000001000e38e0
- (void)deliverResult:(id)arg1;	// IMP=0x00000001000e3810
- (void)resetBackoff;	// IMP=0x00000001000e3808
- (void)incrementBackoff;	// IMP=0x00000001000e3794
- (double)nextBackoffInterval;	// IMP=0x00000001000e3734
- (_Bool)backoffComplete;	// IMP=0x00000001000e3704
- (void)cancel;	// IMP=0x00000001000e36e4
- (void)start:(_Bool)arg1;	// IMP=0x00000001000e35f8
- (id)init;	// IMP=0x00000001000e3574

@end

