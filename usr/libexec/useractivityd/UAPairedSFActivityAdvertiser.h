//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFPeerDevice, UAPairedSFActivityScanner;
@protocol SFActivityAdvertiserDelegate;

@interface UAPairedSFActivityAdvertiser : NSObject
{
    UAPairedSFActivityScanner *_pairedScanner;	// 8 = 0x8
    id <SFActivityAdvertiserDelegate> _delegate;	// 16 = 0x10
    SFPeerDevice *_peer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000454a4
@property(readonly, copy) SFPeerDevice *peer; // @synthesize peer=_peer;
@property id <SFActivityAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) UAPairedSFActivityScanner *pairedScanner; // @synthesize pairedScanner=_pairedScanner;
- (void)payloadRequestFromPeer:(id)arg1 advertisementPayload:(id)arg2 command:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100045178
- (void)fetchLoginIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100045094
- (void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100044e30
- (void)fetchSFPeerDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044c50
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;	// IMP=0x0000000100044ab0
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001000449d0

@end
