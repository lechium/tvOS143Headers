//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

@interface GEOToolServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x0000000100011480
- (void)notifyNetworkDefaultsChangedWithMessage:(id)arg1;	// IMP=0x0000000100023fdc
- (void)invalidateTileCacheWithMessage:(id)arg1;	// IMP=0x0000000100023ec0
- (void)freePurgableSpaceWithMessage:(id)arg1;	// IMP=0x0000000100023adc
- (void)calculatePurgableSpaceWithMessage:(id)arg1;	// IMP=0x000000010002381c
- (void)getDefaultWithMessage:(id)arg1;	// IMP=0x0000000100023658
- (void)lockDBsWithMessage:(id)arg1;	// IMP=0x00000001000235e4
- (void)unlockDBsWithMessage:(id)arg1;	// IMP=0x0000000100023570
- (void)pingWithMessage:(id)arg1;	// IMP=0x00000001000233f0
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x000000010001148c

@end

