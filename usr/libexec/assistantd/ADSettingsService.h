//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADBaseService.h"

@protocol ADRecordingInfoProviding;

@interface ADSettingsService : ADBaseService
{
    id <ADRecordingInfoProviding> _recordingInfoProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000f4ef8
@property(readonly, nonatomic) id <ADRecordingInfoProviding> recordingInfoProvider; // @synthesize recordingInfoProvider=_recordingInfoProvider;
- (void)_setBoolSetting:(id)arg1 currentValueBlock:(CDUnknownBlockType)arg2 setValueBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f4bb0
- (id)_wrapBoolSettingValue:(_Bool)arg1;	// IMP=0x00000001000f4b3c
- (void)_setNoiseManagement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f4a6c
- (void)_getNoiseManagement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f499c
- (void)_getPlaybackAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f4484
- (void)_setVoiceOver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f435c
- (void)_getVoiceOver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f4250
- (void)_getVoiceTriggerEnabled:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f4114
- (void)_setVoiceTriggerEnabled:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f3f6c
- (void)_registerCommandHandlersWithRegistry:(id)arg1;	// IMP=0x00000001000f3dec
- (id)initWithRecordingInfoProvider:(id)arg1;	// IMP=0x00000001000f3d6c

@end

