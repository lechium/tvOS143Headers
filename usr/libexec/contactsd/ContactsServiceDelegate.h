//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString;
@protocol CNScheduler, CNTCC;

@interface ContactsServiceDelegate : NSObject <NSXPCListenerDelegate>
{
    CDUnknownBlockType _serviceProvider;	// 8 = 0x8
    id <CNScheduler> _workQueue;	// 16 = 0x10
    id <CNTCC> _tccServices;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000c094
@property(readonly, nonatomic) id <CNTCC> tccServices; // @synthesize tccServices=_tccServices;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType serviceProvider; // @synthesize serviceProvider=_serviceProvider;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000bed4
- (id)initWithServiceProvider:(CDUnknownBlockType)arg1 schedulerProvider:(id)arg2 tccServices:(id)arg3;	// IMP=0x000000010000bdd0
- (id)init;	// IMP=0x000000010000bcb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

