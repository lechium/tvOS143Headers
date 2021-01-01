//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDPinPairingDialog.h"

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDPinPairingDialog_ATV : MRDPinPairingDialog
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSString *_titleKey;	// 24 = 0x18
    NSString *_pinKey;	// 32 = 0x20
    NSString *_messageKey;	// 40 = 0x28
    NSString *_timeoutKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100023c54
- (id)_pineboardHangdogInterface;	// IMP=0x0000000100023bdc
- (void)closeAll;	// IMP=0x0000000100023a34
- (void)closeForClient:(id)arg1 userCancelled:(_Bool)arg2;	// IMP=0x00000001000237cc
- (void)closeForClient:(id)arg1;	// IMP=0x00000001000237bc
- (void)showWithPin:(id)arg1 forClient:(id)arg2;	// IMP=0x00000001000233cc
- (void)dealloc;	// IMP=0x0000000100023380
- (id)init;	// IMP=0x0000000100023314

@end

