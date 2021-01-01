//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATHardwareInputSource.h"

@class AXMIDIManager;

@interface SCATMIDIInputSource : SCATHardwareInputSource
{
    AXMIDIManager *_midiManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000bae70
@property(retain, nonatomic) AXMIDIManager *midiManager; // @synthesize midiManager=_midiManager;
- (long long)switchKeyForSwitch:(id)arg1;	// IMP=0x00000001000badf0
- (id)switchSource;	// IMP=0x00000001000bade0
- (_Bool)isMIDIInputSource;	// IMP=0x00000001000badd8
- (void)_handleMIDIEvent:(id)arg1 device:(id)arg2 entity:(id)arg3 endpoint:(id)arg4;	// IMP=0x00000001000baacc
- (long long)_switchKeyForEvent:(id)arg1;	// IMP=0x00000001000baa68
- (id)init;	// IMP=0x00000001000ba888

@end

