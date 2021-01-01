//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TVCSEndpointManager;

@interface TVSettingsRemoteAppFacade : NSObject
{
    NSArray *_pairedDevices;	// 8 = 0x8
    NSArray *_pairableDevices;	// 16 = 0x10
    TVCSEndpointManager *_endpointManager;	// 24 = 0x18
}

+ (id)deviceStatusFormatter;	// IMP=0x000000010009345c
- (void).cxx_destruct;	// IMP=0x0000000100094640
@property(readonly, nonatomic) TVCSEndpointManager *endpointManager; // @synthesize endpointManager=_endpointManager;
@property(copy, nonatomic) NSArray *pairableDevices; // @synthesize pairableDevices=_pairableDevices;
@property(copy, nonatomic) NSArray *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
- (void)_updateRemotesSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100093d24
- (void)_pairDevice:(id)arg1 withPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100093c3c
- (void)_unpairDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009396c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000938a0
- (void)remoteStatusUpdated:(id)arg1;	// IMP=0x000000010009388c
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100093878
- (void)dealloc;	// IMP=0x0000000100093754
- (id)init;	// IMP=0x00000001000935dc

@end

