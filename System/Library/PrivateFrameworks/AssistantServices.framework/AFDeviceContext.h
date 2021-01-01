/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, AFPeerInfo, NSMutableDictionary, NSString, AFClockAlarmSnapshot, AFDeviceContextMetadata, AFClockTimerSnapshot, AFMediaPlaybackStateSnapshot, AFHomeAnnouncementSnapshot, NSData, AFMultiUserStateSnapshot, AFLocationSnapshot;

@interface AFDeviceContext : NSObject <NSCopying, NSSecureCoding> {

	BOOL _fromLocalDevice;
	NSUUID* _identifier;
	AFPeerInfo* _deviceInfo;
	long long _privacyClass;
	NSMutableDictionary* _serializedBackingStore;
	long long _dirtyFlags;
	NSString* _contextCollectorSource;

}

@property (nonatomic,readonly) AFClockAlarmSnapshot * alarmSnapshot; 
@property (nonatomic,readonly) AFDeviceContextMetadata * alarmSnapshotMetadata; 
@property (nonatomic,readonly) AFClockTimerSnapshot * timerSnapshot; 
@property (nonatomic,readonly) AFDeviceContextMetadata * timerSnapshotMetadata; 
@property (nonatomic,readonly) AFMediaPlaybackStateSnapshot * playbackStateSnapshot; 
@property (nonatomic,readonly) AFDeviceContextMetadata * playbackStateMetadata; 
@property (nonatomic,readonly) AFHomeAnnouncementSnapshot * homeAnnouncementSnapshot; 
@property (nonatomic,readonly) AFDeviceContextMetadata * homeAnnouncementSnapshotMetadata; 
@property (nonatomic,readonly) long long heardVoiceTrigger; 
@property (nonatomic,readonly) AFDeviceContextMetadata * heardVoiceTriggerMetadata; 
@property (nonatomic,readonly) NSData * myriadAdvertisementContext; 
@property (nonatomic,readonly) AFMultiUserStateSnapshot * multiUserStateSnapshot; 
@property (nonatomic,readonly) AFDeviceContextMetadata * multiUserStateMetadata; 
@property (nonatomic,readonly) AFLocationSnapshot * locationSnapshot; 
@property (nonatomic,readonly) AFDeviceContextMetadata * locationMetadata; 
@property (nonatomic,readonly) BOOL fromLocalDevice;                                                    //@synthesize fromLocalDevice=_fromLocalDevice - In the implementation block
@property (nonatomic,readonly) NSString * contextCollectorSource;                                       //@synthesize contextCollectorSource=_contextCollectorSource - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) AFPeerInfo * deviceInfo;                                                 //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) long long privacyClass;                                                  //@synthesize privacyClass=_privacyClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(AFPeerInfo *)deviceInfo;
-(NSData *)myriadAdvertisementContext;
-(id)serializedContextForKey:(id)arg1 ;
-(id)contextMetadataForKey:(id)arg1 ;
-(BOOL)fromLocalDevice;
-(AFClockAlarmSnapshot *)alarmSnapshot;
-(AFClockTimerSnapshot *)timerSnapshot;
-(AFMediaPlaybackStateSnapshot *)playbackStateSnapshot;
-(AFHomeAnnouncementSnapshot *)homeAnnouncementSnapshot;
-(BOOL)af_didHearVoiceTrigger;
-(AFMultiUserStateSnapshot *)multiUserStateSnapshot;
-(AFLocationSnapshot *)locationSnapshot;
-(AFDeviceContextMetadata *)alarmSnapshotMetadata;
-(AFDeviceContextMetadata *)timerSnapshotMetadata;
-(AFDeviceContextMetadata *)playbackStateMetadata;
-(AFDeviceContextMetadata *)homeAnnouncementSnapshotMetadata;
-(long long)heardVoiceTrigger;
-(AFDeviceContextMetadata *)heardVoiceTriggerMetadata;
-(AFDeviceContextMetadata *)multiUserStateMetadata;
-(AFDeviceContextMetadata *)locationMetadata;
-(id)_safeContextDictionary;
-(id)_serializedBackingStoreIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 ;
-(id)serializedBackingStore;
-(id)initWithSerializedBackingStore:(id)arg1 fromLocalDevice:(BOOL)arg2 contextCollectorSource:(id)arg3 ;
-(id)partialSerializedBackingStoreIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 ;
-(id)allContextKeys;
-(id)partiallyUpdatedContextForDeviceContextKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 fromDeviceContext:(id)arg3 ;
-(id)deviceContextForDeviceContextKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 ;
-(NSString *)contextCollectorSource;
-(long long)privacyClass;
-(id)af_serviceDeviceContextForKeys:(id)arg1 excludeContextExpiredBefore:(id)arg2 ;
-(id)af_serviceDeviceContextForKeys:(id)arg1 ;
@end

