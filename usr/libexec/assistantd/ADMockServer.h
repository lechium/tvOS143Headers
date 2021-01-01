//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol AMSMockServerProtocol;

@interface ADMockServer : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <AMSMockServerProtocol> _remoteProxy;	// 16 = 0x10
}

+ (id)sharedServer;	// IMP=0x000000010006575c
- (void).cxx_destruct;	// IMP=0x0000000100065c44
- (void)replayWithFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065974
- (_Bool)_establishConnectionIfNeeded;	// IMP=0x00000001000657c8

@end

