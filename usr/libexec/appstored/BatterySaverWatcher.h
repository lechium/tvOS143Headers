//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BatterySaverWatcherDelegate, OS_dispatch_queue;

@interface BatterySaverWatcher : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    int _token;	// 24 = 0x18
    id <BatterySaverWatcherDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010014a444
@property(readonly) __weak id <BatterySaverWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateStatus;	// IMP=0x000000010014a2cc
- (void)_registerNotifier;	// IMP=0x000000010014a118
- (void)_notifyDelegate;	// IMP=0x000000010014a05c
- (unsigned long long)_getState;	// IMP=0x000000010014a024
- (_Bool)batterySaverEnabled;	// IMP=0x0000000100149f84
- (void)dealloc;	// IMP=0x0000000100149f3c
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100149ebc

@end
