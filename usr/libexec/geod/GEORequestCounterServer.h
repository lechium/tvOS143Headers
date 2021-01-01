//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

@interface GEORequestCounterServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x0000000100012014
- (void)fetchRoutePreloadSessionsWithMessage:(id)arg1;	// IMP=0x0000000100008368
- (void)recordRoutePreloadSessionWithMessage:(id)arg1;	// IMP=0x0000000100007ff4
- (void)analyticsHandlingFetchWithMessage:(id)arg1;	// IMP=0x0000000100007c80
- (void)readProactiveTileDownloadsWithMessage:(id)arg1;	// IMP=0x00000001000078c4
- (void)clearWithMessage:(id)arg1;	// IMP=0x000000010000764c
- (void)startPowerLogSessionWithMessage:(id)arg1;	// IMP=0x000000010000731c
- (void)readRequestLogsWithMessage:(id)arg1;	// IMP=0x0000000100006e5c
- (void)readRequestsWithMessage:(id)arg1;	// IMP=0x000000010000699c
- (void)incrementWithMessage:(id)arg1;	// IMP=0x0000000100006640
- (void)setCountersEnabledWithMessage:(id)arg1;	// IMP=0x00000001000062c4
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100012020

@end

