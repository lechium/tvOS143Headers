//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCAssistiveTouchXPCServerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ACCAssistiveTouchServerRemote : NSObject <ACCAssistiveTouchXPCServerProtocol>
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100122aac
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)notifyEnabledState:(_Bool)arg1 provider:(id)arg2;	// IMP=0x00000001001228e4
- (void)initConnection:(CDUnknownBlockType)arg1;	// IMP=0x0000000100122658
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000001001224e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

