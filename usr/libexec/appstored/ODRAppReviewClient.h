//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODRAppReviewProtocol-Protocol.h"

@class NSString;

@interface ODRAppReviewClient : NSObject <ODRAppReviewProtocol>
{
}

- (void)registerManifest:(id)arg1 forBundleID:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001abe18
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001001abcc4
- (id)interface;	// IMP=0x00000001001abca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

