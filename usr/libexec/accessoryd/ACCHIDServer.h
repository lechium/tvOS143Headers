//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCFeatureServer.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCConnection;
@protocol AccessoryHIDXPCClientProtocol;

@interface ACCHIDServer : ACCFeatureServer <NSXPCListenerDelegate>
{
    NSMutableArray *_clientConnections;	// 40 = 0x28
    NSXPCConnection *_activeConnection;	// 48 = 0x30
    id <AccessoryHIDXPCClientProtocol> _remoteObject;	// 56 = 0x38
}

+ (id)sharedServer;	// IMP=0x0000000100033d6c
- (void).cxx_destruct;	// IMP=0x0000000100033e80
@property(retain, nonatomic) id <AccessoryHIDXPCClientProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain, nonatomic) NSXPCConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
- (void)getReportResponse:(id)arg1 componentID:(unsigned short)arg2 reportType:(unsigned char)arg3 reportID:(unsigned char)arg4 report:(id)arg5;	// IMP=0x0000000100033b6c
- (void)inReport:(id)arg1 componentID:(unsigned short)arg2 report:(id)arg3;	// IMP=0x0000000100033a28
- (void)unregisterAllDescriptors:(id)arg1;	// IMP=0x0000000100033910
- (void)unregisterHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2;	// IMP=0x00000001000337f0
- (void)registerHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2 dictionary:(id)arg3;	// IMP=0x0000000100033644
- (_Bool)shouldAcceptXPCConnection:(id)arg1;	// IMP=0x0000000100033568
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100032c34
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x0000000100032ba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

