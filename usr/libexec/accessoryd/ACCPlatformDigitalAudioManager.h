//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACCPlatformDigitalAudioManager : NSObject
{
    _Bool _bDigAudSendNewProp;	// 8 = 0x8
    _Bool _bDigAudIsActive;	// 9 = 0x9
    int _digAudSampleEnum;	// 12 = 0xc
    unsigned int _digAudSampleMask;	// 16 = 0x10
    unsigned int _digAudVolumeLevel;	// 20 = 0x14
    unsigned int _digAudSoundCheck;	// 24 = 0x18
    NSString *_digAudEndpointUUID;	// 32 = 0x20
}

+ (unsigned int)sampleRateMaskFromEnum:(int)arg1;	// IMP=0x00000001000fdc14
+ (int)sampleRateEnumFromValue:(unsigned int)arg1;	// IMP=0x00000001000fda90
+ (unsigned int)sampleRateValueFromEnum:(int)arg1;	// IMP=0x00000001000fd9d0
+ (id)getManager;	// IMP=0x00000001000fd964
- (void).cxx_destruct;	// IMP=0x00000001000febe8
@property(nonatomic) _Bool bDigAudIsActive; // @synthesize bDigAudIsActive=_bDigAudIsActive;
@property(nonatomic) _Bool bDigAudSendNewProp; // @synthesize bDigAudSendNewProp=_bDigAudSendNewProp;
@property(nonatomic) unsigned int digAudSoundCheck; // @synthesize digAudSoundCheck=_digAudSoundCheck;
@property(nonatomic) unsigned int digAudVolumeLevel; // @synthesize digAudVolumeLevel=_digAudVolumeLevel;
@property(nonatomic) unsigned int digAudSampleMask; // @synthesize digAudSampleMask=_digAudSampleMask;
@property(nonatomic) int digAudSampleEnum; // @synthesize digAudSampleEnum=_digAudSampleEnum;
@property(retain, nonatomic) NSString *digAudEndpointUUID; // @synthesize digAudEndpointUUID=_digAudEndpointUUID;
- (id)supportedSampleRatesList;	// IMP=0x00000001000fe9a4
- (void)updateSoundCheck:(unsigned int)arg1;	// IMP=0x00000001000fe82c
- (void)updateVolumeLevel:(unsigned int)arg1;	// IMP=0x00000001000fe6b4
- (void)updateSampleRate:(unsigned int)arg1;	// IMP=0x00000001000fe4e8
- (unsigned int)convertToSupportedSampleRate:(unsigned int)arg1;	// IMP=0x00000001000fe2d8
- (unsigned int)currentSampleRate;	// IMP=0x00000001000fe194
- (_Bool)newAudioPropertyNotification;	// IMP=0x00000001000fded8
- (void)stopAudioPropertyNotifications;	// IMP=0x00000001000fde8c
- (void)startAudioPropertyNotifications;	// IMP=0x00000001000fde40
- (void)sendAudioStateChangedNotification;	// IMP=0x00000001000fde34
- (_Bool)setDigitalAudioEndpointUUID:(id)arg1 withSupportedSampleRates:(unsigned int)arg2;	// IMP=0x00000001000fdcc4
- (void)dealloc;	// IMP=0x00000001000fdc90
- (id)init;	// IMP=0x00000001000fdc28

@end

