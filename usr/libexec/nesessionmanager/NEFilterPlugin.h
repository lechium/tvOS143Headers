//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPlugin.h"

#import "NEFilterPluginManager-Protocol.h"

@interface NEFilterPlugin : NEPlugin <NEFilterPluginManager>
{
    long long _filterStatus;	// 64 = 0x40
}

@property(readonly) long long filterStatus; // @synthesize filterStatus=_filterStatus;
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015e2c
- (id)managerInterface;	// IMP=0x0000000100015e10
- (id)remotePluginInterface;	// IMP=0x0000000100015df4
- (void)acceptAgentClients;	// IMP=0x0000000100015d2c
- (void)setStatus:(long long)arg1 error:(id)arg2;	// IMP=0x0000000100015b68
- (void)handlePluginFailedWithError:(id)arg1;	// IMP=0x0000000100015b0c
- (void)createPacketChannelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000159e0
- (void)createContentFilterSocketWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000158b4
- (void)getFilterClientConnectionWithHandler:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015534
- (void)startFilter;	// IMP=0x00000001000154f4

@end
