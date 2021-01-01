//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UAActivityReplay;
@protocol SFActivityAdvertiserDelegate;

@interface UAMockActivityAdvertiser : NSObject
{
    id <SFActivityAdvertiserDelegate> _delegate;	// 8 = 0x8
    UAActivityReplay *_controller;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100066210
@property(retain) UAActivityReplay *controller; // @synthesize controller=_controller;
@property id <SFActivityAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchLoginIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000661d4
- (void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065fe0
- (void)fetchSFPeerDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065e88
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;	// IMP=0x0000000100065e00
- (id)initWithController:(id)arg1;	// IMP=0x0000000100065d88

@end

