//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCAppOfferStateService-Protocol.h"

@class MISSING_TYPE;

@interface _TtC19appstorecomponentsd19AppOfferStateClient : NSObject <ASCAppOfferStateService>
{
    MISSING_TYPE *objectGraph;	// 8 = 0x8
    MISSING_TYPE *appStateController;	// 16 = 0x10
    MISSING_TYPE *arcadeSubscription;	// 24 = 0x18
    MISSING_TYPE *restrictions;	// 40 = 0x28
    MISSING_TYPE *jsStackManager;	// 56 = 0x38
    MISSING_TYPE *localizer;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *stateLock;	// 0 = 0x0
    MISSING_TYPE *observations;	// 0 = 0x0
    MISSING_TYPE *isUpdatingArcadeSubscription;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000010006bf6c
- (id)init;	// IMP=0x0000000100070444
- (void)reinstallWatchSystemAppWithBundleID:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100070390
- (void)reinstallWatchAppWithID:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010006fa30
- (void)performActionOfOffer:(id)arg1 withActivity:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010006f098
- (void)stopObservingStateOfOffers:(id)arg1;	// IMP=0x000000010006e848
- (void)startObservingStateOfOffers:(id)arg1;	// IMP=0x000000010006dec4
- (void)dealloc;	// IMP=0x000000010006bf48

@end

