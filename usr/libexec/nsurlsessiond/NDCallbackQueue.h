//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NDCallbackQueueDelegate;

@interface NDCallbackQueue : NSObject
{
    NSMutableArray *_callbacks;	// 8 = 0x8
    id <NDCallbackQueueDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100053260
@property __weak id <NDCallbackQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)count;	// IMP=0x000000010005322c
- (void)drainCallbacksForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100052fc8
- (void)performAllCallbacks;	// IMP=0x0000000100052e88
- (void)addPendingCallback:(id)arg1 wakeRequirement:(long long)arg2;	// IMP=0x0000000100052d88
- (void)addPendingCallbackToFront:(id)arg1;	// IMP=0x0000000100052d74
- (void)drainCallback:(id)arg1;	// IMP=0x0000000100052960
- (void)performCallback:(id)arg1;	// IMP=0x00000001000511e0
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010005110c

@end
