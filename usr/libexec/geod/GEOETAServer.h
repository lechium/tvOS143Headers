//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

@interface GEOETAServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x0000000100010b38
- (void)cancelETARequestWithRequest:(id)arg1;	// IMP=0x000000010003cc54
- (void)updateETARequestWithRequest:(id)arg1;	// IMP=0x000000010003cbb0
- (void)startETARequestWithRequest:(id)arg1;	// IMP=0x000000010003c7ac
- (void)cancelSimpleETARequestWithRequest:(id)arg1;	// IMP=0x000000010003c658
- (void)startSimpleETARequestWithRequest:(id)arg1;	// IMP=0x000000010003c3d0
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100010b44

@end
