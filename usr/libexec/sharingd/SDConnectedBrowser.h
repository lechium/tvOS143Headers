//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SDStatusMonitor;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDConnectedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    int _recentsCount;	// 12 = 0xc
    int _connectedCount;	// 16 = 0x10
    _Bool _sendNotification;	// 20 = 0x14
    NSDictionary *_servers;	// 24 = 0x18
    NSDictionary *_odiskServers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    SDStatusMonitor *_monitor;	// 48 = 0x30
    struct __CFBag *_airDropPeople;	// 56 = 0x38
}

+ (id)sharedBrowser;	// IMP=0x0000000100173d98
- (void).cxx_destruct;	// IMP=0x00000001001751f8
- (void)stop;	// IMP=0x0000000100175160
- (void)start;	// IMP=0x000000010017505c
- (void)volumesChanged:(id)arg1;	// IMP=0x0000000100175048
- (void)removeAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x0000000100174f80
- (void)removeAirDropPersonInternal:(struct __SFNode *)arg1;	// IMP=0x0000000100174ebc
@property(readonly, copy) NSArray *airDropNodes;
- (void)addAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x0000000100174d50
- (void)buildNodesAndNotify:(_Bool)arg1;	// IMP=0x0000000100174d1c
- (void)combineRecentAndConnectedNodes:(_Bool)arg1;	// IMP=0x000000010017480c
- (id)connectedNodes;	// IMP=0x00000001001741c4
- (id)URLForRemounting:(id)arg1;	// IMP=0x0000000100174110
- (_Bool)opticalDisk:(id)arg1;	// IMP=0x0000000100174088
- (void)setNodeModel:(struct __SFNode *)arg1 protocol:(id)arg2 url:(id)arg3;	// IMP=0x0000000100174084
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x000000010017407c
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x0000000100174074
- (id)recentNodes;	// IMP=0x0000000100174028
- (void)addToRecents:(id)arg1;	// IMP=0x0000000100174024
- (void)browseAfterDelay:(double)arg1;	// IMP=0x0000000100173ffc
- (void)postNotification;	// IMP=0x0000000100173f8c
@property(readonly, copy) NSArray *odiskNodes;
@property(readonly, copy) NSArray *nodes;
- (void)setODiskServers:(id)arg1;	// IMP=0x0000000100173f0c
- (void)setServers:(id)arg1;	// IMP=0x0000000100173eac
- (id)init;	// IMP=0x0000000100173e04

@end

