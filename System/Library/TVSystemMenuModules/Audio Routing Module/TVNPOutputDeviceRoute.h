//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVNPRoute.h"

#import "MPVolumeControllerDelegate-Protocol.h"

@class MPAVOutputDeviceRoute, MPVolumeController, NSString;

@interface TVNPOutputDeviceRoute : TVNPRoute <MPVolumeControllerDelegate>
{
    MPAVOutputDeviceRoute *_outputDeviceRoute;	// 88 = 0x58
    MPVolumeController *_volumeController;	// 96 = 0x60
}

+ (id)_nameForAVRoute:(id)arg1 destination:(id)arg2;	// IMP=0x0000000000015db8
- (void).cxx_destruct;	// IMP=0x00000000000161fc
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute; // @synthesize outputDeviceRoute=_outputDeviceRoute;
- (void)_updateVolume;	// IMP=0x0000000000015fe0
- (id)_imageForAVRoute:(id)arg1 destination:(id)arg2;	// IMP=0x0000000000015f0c
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x0000000000015d50
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x0000000000015ce8
- (void)setVolumeLevel:(id)arg1;	// IMP=0x0000000000015c50
- (id)deviceImage;	// IMP=0x0000000000015bd8
- (void)updateWithOutputDevice:(id)arg1 selectionState:(unsigned long long)arg2 destination:(id)arg3;	// IMP=0x00000000000155e4
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000015514

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

