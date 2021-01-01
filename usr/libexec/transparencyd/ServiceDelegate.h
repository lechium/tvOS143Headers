//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, transparencyd;
@protocol OS_dispatch_workloop;

@interface ServiceDelegate : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_workloop> *_xpcQueue;	// 8 = 0x8
    transparencyd *_daemonContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000086c8
@property(retain) transparencyd *daemonContext; // @synthesize daemonContext=_daemonContext;
@property(retain) NSObject<OS_dispatch_workloop> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000083cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

