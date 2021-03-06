//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APSEnvironment, NSMutableDictionary;

@interface APSPushHistory : NSObject
{
    APSEnvironment *_environment;	// 8 = 0x8
    NSMutableDictionary *_history;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100059590
- (_Bool)hasPayload:(id)arg1 forTopic:(id)arg2 tokens:(id)arg3;	// IMP=0x0000000100059258
- (id)timestampForTopic:(id)arg1 token:(id)arg2;	// IMP=0x00000001000590b0
- (void)receivedPushWithTopic:(id)arg1 token:(id)arg2 payload:(id)arg3 timestamp:(id)arg4;	// IMP=0x0000000100058e50
- (id)_keyForTopic:(id)arg1 token:(id)arg2;	// IMP=0x0000000100058dc4
- (void)_pruneHistory;	// IMP=0x0000000100058b28
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000100058ab0

@end

