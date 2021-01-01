/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPVolumeControllerDataSource.h>

@protocol MPVolumeControllerDataSourceDelegate;
@class MPAVRoute, NSString;

@interface MPVolumeControllerRouteDataSource : NSObject <MPVolumeControllerDataSource> {

	float _pendingVolume;
	BOOL _hasPendingVolume;
	BOOL _hasVolumeInFlight;
	BOOL _volumeInitialized;
	BOOL _volumeCapabilitiesInitialized;
	BOOL _volumeControlAvailable;
	BOOL _muted;
	BOOL _volumeWarningEnabled;
	float _volume;
	float _EUVolumeLimit;
	id<MPVolumeControllerDataSourceDelegate> _delegate;
	long long _volumeWarningState;
	MPAVRoute* _groupRoute;
	MPAVRoute* _outputDeviceRoute;

}

@property (nonatomic,retain) MPAVRoute * groupRoute;                                                     //@synthesize groupRoute=_groupRoute - In the implementation block
@property (nonatomic,retain) MPAVRoute * outputDeviceRoute;                                              //@synthesize outputDeviceRoute=_outputDeviceRoute - In the implementation block
@property (assign,nonatomic,__weak) id<MPVolumeControllerDataSourceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL applicationShouldOverrideHardwareVolumeBehavior; 
@property (nonatomic,copy,readonly) NSString * volumeControlLabel; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) float volume;                                                               //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                  //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) BOOL volumeWarningEnabled;                                                //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) long long volumeWarningState;                                             //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (nonatomic,readonly) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id<MPVolumeControllerDataSourceDelegate>)delegate;
-(void)setDelegate:(id<MPVolumeControllerDataSourceDelegate>)arg1 ;
-(void)reload;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isVolumeControlAvailable;
-(NSString *)volumeControlLabel;
-(void)setGroupRoute:(MPAVRoute *)arg1 ;
-(void)setOutputDeviceRoute:(MPAVRoute *)arg1 ;
-(MPAVRoute *)groupRoute;
-(MPAVRoute *)outputDeviceRoute;
-(void)adjustVolumeValue:(float)arg1 ;
-(void)getVolumeValueWithCompletion:(/*^block*/id)arg1 ;
-(void)beginIncreasingRelativeVolume;
-(void)endIncreasingRelativeVolume;
-(void)beginDecreasingRelativeVolume;
-(void)endDecreasingRelativeVolume;
-(BOOL)volumeWarningEnabled;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;
-(void)initializeVolume;
-(BOOL)applicationShouldOverrideHardwareVolumeBehavior;
-(id)initWithGroupRoute:(id)arg1 outputDeviceRoute:(id)arg2 ;
-(void)_setPendingVolumeIfNeeded;
-(void)_sendVolumeButtonEventWithUsagePage:(unsigned)arg1 usage:(unsigned)arg2 down:(BOOL)arg3 ;
-(void)_updateVolumeControlCapabilities:(unsigned)arg1 ;
-(void)_routeVolumeDidChangeNotification:(id)arg1 ;
-(void)_routeVolumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
@end

