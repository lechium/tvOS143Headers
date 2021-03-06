//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATInputSource.h"

#import "AXEventHandler-Protocol.h"

@class NSString;
@protocol SCATScreenInputSourceDelegate;

@interface SCATScreenInputSource : SCATInputSource <AXEventHandler>
{
    NSString *_switchDisplayName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005a320
@property(copy, nonatomic) NSString *switchDisplayName; // @synthesize switchDisplayName=_switchDisplayName;
- (void)updateWithSwitches:(id)arg1 recipe:(id)arg2;	// IMP=0x0000000100059f88
- (void)stopRunning;	// IMP=0x0000000100059f30
- (void)startRunning;	// IMP=0x0000000100059ed8
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100059e70
- (void)dealloc;	// IMP=0x0000000100059e24
- (void)_stopHandlingEvents;	// IMP=0x0000000100059dd4
- (void)_startHandlingEvents;	// IMP=0x0000000100059d84
- (unsigned long long)priority;	// IMP=0x0000000100059d7c
- (_Bool)handledEvent:(id)arg1;	// IMP=0x0000000100059bc0
- (long long)_actionIdentifierWithType:(id)arg1;	// IMP=0x0000000100059abc
- (void)_didReceiveActionWithIdentifier:(long long)arg1 start:(_Bool)arg2 ignoreInputHold:(_Bool)arg3;	// IMP=0x0000000100059998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) id <SCATScreenInputSourceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

