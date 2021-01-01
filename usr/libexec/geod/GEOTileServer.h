//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

#import "GEOTileLoaderInternalDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GEOTileServer : GEOServer <GEOTileLoaderInternalDelegate>
{
    NSMutableDictionary *_pendingPeerToClientIdentifiers;	// 16 = 0x10
}

+ (_Bool)shouldStartImmediately;	// IMP=0x0000000100012b08
+ (id)identifier;	// IMP=0x0000000100012afc
- (void).cxx_destruct;	// IMP=0x0000000100036264
- (void)tileLoader:(id)arg1 submittedTilesToNetwork:(id)arg2 forClient:(id)arg3;	// IMP=0x0000000100035fc0
- (void)_receivedTile:(id)arg1 error:(id)arg2 info:(id)arg3 forKey:(const struct _GEOTileKey *)arg4 forPeer:(id)arg5;	// IMP=0x0000000100035bd4
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x00000001000358c0
- (void)peerDidConnect:(id)arg1;	// IMP=0x0000000100035828
- (void)endPreload:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100035764
- (void)beginPreload:(id)arg1 fromPeer:(id)arg2;	// IMP=0x000000010003563c
- (void)corrupt:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100035524
- (void)_shrinkDB:(id)arg1 fromPeer:(id)arg2 synchronous:(_Bool)arg3;	// IMP=0x0000000100035000
- (void)shrinkDBSync:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034fac
- (void)shrinkDB:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034f58
- (void)_canShrinkBySize:(id)arg1 fromPeer:(id)arg2 synchronous:(_Bool)arg3;	// IMP=0x0000000100034d2c
- (void)canShrinkBySizeSync:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034cd8
- (void)canShrinkBySize:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034c84
- (void)reprioritizeKey:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034ad4
- (void)cancel:(id)arg1 fromPeer:(id)arg2;	// IMP=0x00000001000346dc
- (void)loadTiles:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100032258
- (void)_didDeleteExternalTileData:(id)arg1;	// IMP=0x0000000100032248
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001000320fc
- (id)init;	// IMP=0x0000000100031fac
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100012b10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
