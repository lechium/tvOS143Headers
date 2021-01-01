/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVOutputDeviceImpl.h>

@protocol AVOutputDeviceImplSupport;
@class NSString, NSData, NSArray, NSNumber, NSDictionary;

@interface AVLocalOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {

	id<AVOutputDeviceImplSupport> _implSupportEventListener;

}

@property (__weak) id<AVOutputDeviceImplSupport> implEventListener;                                                    //@synthesize implSupportEventListener=_implSupportEventListener - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * ID; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) long long deviceSubType; 
@property (nonatomic,readonly) long long clusterType; 
@property (nonatomic,readonly) long long configuredClusterSize; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSData * identifyingMACAddress; 
@property (nonatomic,readonly) NSArray * clusteredDeviceDescriptions; 
@property (nonatomic,readonly) BOOL isClusterLeader; 
@property (nonatomic,readonly) NSString * clusterID; 
@property (nonatomic,readonly) NSNumber * batteryLevel; 
@property (nonatomic,readonly) NSNumber * caseBatteryLevel; 
@property (nonatomic,readonly) NSNumber * leftBatteryLevel; 
@property (nonatomic,readonly) NSNumber * rightBatteryLevel; 
@property (nonatomic,readonly) NSNumber * supportsDataOverACLProtocol; 
@property (nonatomic,readonly) NSNumber * isInEar; 
@property (nonatomic,readonly) NSDictionary * airPlayProperties; 
@property (getter=isInUseByPairedDevice,nonatomic,readonly) BOOL inUseByPairedDevice; 
@property (nonatomic,copy,readonly) NSArray * connectedPairedDevices; 
@property (nonatomic,readonly) unsigned long long deviceFeatures; 
@property (nonatomic,readonly) BOOL requiresAuthorization; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL canAccessRemoteAssets; 
@property (nonatomic,readonly) BOOL canAccessAppleMusic; 
@property (nonatomic,readonly) BOOL canAccessiCloudMusicLibrary; 
@property (nonatomic,readonly) BOOL supportsBufferedAirPlay; 
@property (readonly) float volume; 
@property (readonly) BOOL canSetVolume; 
@property (readonly) long long volumeControlType; 
@property (nonatomic,readonly) BOOL canBeGrouped; 
@property (nonatomic,copy,readonly) NSString * groupID; 
@property (nonatomic,copy,readonly) NSString * proposedGroupID; 
@property (nonatomic,readonly) BOOL canBeGroupLeader; 
@property (nonatomic,readonly) BOOL isGroupLeader; 
@property (nonatomic,readonly) BOOL participatesInGroupPlayback; 
@property (nonatomic,readonly) BOOL groupContainsGroupLeader; 
@property (nonatomic,readonly) NSString * logicalDeviceID; 
@property (nonatomic,readonly) BOOL isLogicalDeviceLeader; 
@property (nonatomic,readonly) BOOL canCommunicateWithAllLogicalDeviceMembers; 
@property (nonatomic,readonly) BOOL canRelayCommunicationChannel; 
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets; 
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender; 
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; 
@property (nonatomic,readonly) BOOL supportsBluetoothSharing; 
@property (nonatomic,readonly) long long HAPConformance; 
@property (nonatomic,readonly) BOOL supportsHeadTrackedSpatialAudio; 
@property (getter=isHeadTrackedSpatialAudioActive,nonatomic,readonly) BOOL headTrackedSpatialAudioActive; 
@property (nonatomic,readonly) NSArray * availableBluetoothListeningModes; 
@property (nonatomic,readonly) NSString * currentBluetoothListeningMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)deviceType;
-(NSString *)serialNumber;
-(NSString *)ID;
-(NSString *)firmwareVersion;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(long long)clusterType;
-(NSString *)manufacturer;
-(unsigned long long)deviceFeatures;
-(NSString *)groupID;
-(NSNumber *)batteryLevel;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)groupContainsGroupLeader;
-(long long)deviceSubType;
-(NSString *)modelID;
-(NSString *)logicalDeviceID;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isGroupLeader;
-(BOOL)requiresAuthorization;
-(long long)configuredClusterSize;
-(BOOL)supportsBluetoothSharing;
-(NSString *)currentBluetoothListeningMode;
-(NSArray *)availableBluetoothListeningModes;
-(BOOL)canSetVolume;
-(BOOL)canBeGrouped;
-(NSString *)clusterID;
-(NSDictionary *)airPlayProperties;
-(NSData *)identifyingMACAddress;
-(BOOL)canBeGroupLeader;
-(BOOL)participatesInGroupPlayback;
-(BOOL)isInUseByPairedDevice;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(NSArray *)clusteredDeviceDescriptions;
-(long long)volumeControlType;
-(long long)HAPConformance;
-(BOOL)isClusterLeader;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setImplEventListener:(id<AVOutputDeviceImplSupport>)arg1 ;
-(NSNumber *)caseBatteryLevel;
-(NSNumber *)leftBatteryLevel;
-(NSNumber *)rightBatteryLevel;
-(NSNumber *)supportsDataOverACLProtocol;
-(NSNumber *)isInEar;
-(NSArray *)connectedPairedDevices;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(void)setSecondDisplayMode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)proposedGroupID;
-(BOOL)isLogicalDeviceLeader;
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(id<AVOutputDeviceImplSupport>)implEventListener;
@end

