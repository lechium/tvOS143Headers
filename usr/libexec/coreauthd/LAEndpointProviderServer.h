//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LAProtocolEndpointProviderServer-Protocol.h"

@class NSXPCConnection;

@interface LAEndpointProviderServer : NSObject <LAProtocolEndpointProviderServer>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (_Bool)handleConnection:(id)arg1;	// IMP=0x00000001000053f0
- (void).cxx_destruct;	// IMP=0x000000010000580c
- (void)provideEndpoint:(long long)arg1 uid:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005508

@end

