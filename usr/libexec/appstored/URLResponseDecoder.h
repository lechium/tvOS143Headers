//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSURLResponseDecoder.h>

#import "AMSResponseDecoding-Protocol.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface URLResponseDecoder : AMSURLResponseDecoder <AMSResponseDecoding>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableDictionary *_requestProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000db6a8
- (void)_processResponseDictionary:(id)arg1 withRequestProperties:(id)arg2;	// IMP=0x00000001000db648
- (void)_importKeyBagFromDictionary:(id)arg1;	// IMP=0x00000001000db544
- (void)_discardRequestPropertiesForTask:(id)arg1;	// IMP=0x00000001000db51c
- (id)_dequeueRequestPropertiesForTask:(id)arg1;	// IMP=0x00000001000db484
- (id)resultFromResult:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000db2e0
- (void)registerRequestProperties:(id)arg1 forTask:(id)arg2;	// IMP=0x00000001000db18c
- (void)discardRequestPropertiesForTask:(id)arg1;	// IMP=0x00000001000db0ec
- (id)init;	// IMP=0x00000001000db038

@end

