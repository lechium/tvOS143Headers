//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFAssertionContextMutating-Protocol.h"

@class AFAssertionContext, NSDate, NSDictionary, NSString;

@interface _AFAssertionContextMutation : NSObject <AFAssertionContextMutating>
{
    AFAssertionContext *_baseModel;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    NSDate *_effectiveDate;	// 32 = 0x20
    double _expirationDuration;	// 40 = 0x28
    NSDictionary *_userInfo;	// 48 = 0x30
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimestamp:1;
        unsigned int hasReason:1;
        unsigned int hasEffectiveDate:1;
        unsigned int hasExpirationDuration:1;
        unsigned int hasUserInfo:1;
    } _mutationFlags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010018aed4
- (id)generate;	// IMP=0x000000010018ad2c
- (void)setUserInfo:(id)arg1;	// IMP=0x000000010018acf4
- (void)setExpirationDuration:(double)arg1;	// IMP=0x000000010018ace0
- (void)setEffectiveDate:(id)arg1;	// IMP=0x000000010018aca8
- (void)setReason:(id)arg1;	// IMP=0x000000010018ac70
- (void)setTimestamp:(unsigned long long)arg1;	// IMP=0x000000010018ac5c
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000010018abe4
- (id)init;	// IMP=0x000000010018abd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
