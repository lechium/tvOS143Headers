//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSLock, NSNumber, StoreKitClientIdentity;

@interface MicroPaymentQueueRequest : NSObject <NSCopying>
{
    StoreKitClientIdentity *_clientIdentity;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSNumber *_rangeEndIdentifier;	// 24 = 0x18
    NSNumber *_rangeStartIdentifier;	// 32 = 0x20
    NSNumber *_userIdentifier;	// 40 = 0x28
}

- (id)_ntsQueryParameters:(id *)arg1;	// IMP=0x0000000100089ffc
- (id)_copyApplicationIdentity:(id *)arg1;	// IMP=0x0000000100089da0
- (id)description;	// IMP=0x0000000100089ce8
@property(readonly) long long URLBagType;
@property(readonly) _Bool usesSoftwareMap;
@property(retain) NSNumber *userIdentifier;
@property(retain) NSNumber *rangeStartIdentifier;
@property(retain) NSNumber *rangeEndIdentifier;
@property(copy) StoreKitClientIdentity *clientIdentity;
- (id)newStoreURLOperation:(id *)arg1;	// IMP=0x0000000100089808
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000896f0
- (void)dealloc;	// IMP=0x0000000100089688
- (id)init;	// IMP=0x0000000100089630

@end

