//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSXPCConnectionDelegate-Protocol.h"

@class CSXPCConnection, NSString;
@protocol CSAudioMeterProviding;

@interface CSAudioMeterProvidingProxy : NSObject <CSXPCConnectionDelegate>
{
    id <CSAudioMeterProviding> _audioMeterProvider;	// 8 = 0x8
    CSXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000e6564
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSAudioMeterProviding> audioMeterProvider; // @synthesize audioMeterProvider=_audioMeterProvider;
- (void)_sendReplyMessageWithResult:(_Bool)arg1 event:(id)arg2 client:(id)arg3;	// IMP=0x00000001000e648c
- (void)_handleMeterProvidingRequestTypePowerMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 powerType:(unsigned long long)arg4;	// IMP=0x00000001000e61b8
- (void)_handleMeterProvidingRequestTypeUpdateMetersMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00000001000e60ac
- (void)_handleMeterProvidingRequestTypeSetMeteringEnabledMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00000001000e5f6c
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00000001000e5d94
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000001000e5d20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
