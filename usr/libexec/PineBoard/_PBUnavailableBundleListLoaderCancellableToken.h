//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCancellable-Protocol.h"

@class AMSPromise, NSString;

@interface _PBUnavailableBundleListLoaderCancellableToken : NSObject <PBCancellable>
{
    _Bool _cancelled;	// 8 = 0x8
    AMSPromise *_promise;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001474f4
@property(nonatomic) __weak AMSPromise *promise; // @synthesize promise=_promise;
- (void)cancel;	// IMP=0x00000001001473f8
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

