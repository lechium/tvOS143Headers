/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/ISSettings.h>
#import <libobjc.A.dylib/ISVitalitySettings.h>

@protocol ISVitalitySettings <NSObject>
@required
-(long long)behavior;
-(double)playbackRate;
-(double)minimumVisibilityFactor;
-(double)preDuration;
-(double)postDuration;
-(double)maxVitalityDelay;
-(double)minimumPhotoTransitionDuration;
-(double)endTimeOffset;
-(double)maximumDelayBeforePlayback;

@end


@class ISVitalitySpecificSettings, NSString;

@interface ISVitalitySettings : ISSettings <ISVitalitySettings> {

	BOOL _shouldPreroll;
	BOOL _useLegacyBehavior;
	ISVitalitySpecificSettings* _oneUpSettings;
	ISVitalitySpecificSettings* _shareViewSettings;
	ISVitalitySpecificSettings* _activityViewSettings;
	ISVitalitySpecificSettings* _orbPreviewSettings;

}

@property (assign,nonatomic) BOOL useLegacyBehavior;                                         //@synthesize useLegacyBehavior=_useLegacyBehavior - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * oneUpSettings;                     //@synthesize oneUpSettings=_oneUpSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * shareViewSettings;                 //@synthesize shareViewSettings=_shareViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * activityViewSettings;              //@synthesize activityViewSettings=_activityViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * orbPreviewSettings;                //@synthesize orbPreviewSettings=_orbPreviewSettings - In the implementation block
@property (assign,nonatomic) BOOL shouldPreroll;                                             //@synthesize shouldPreroll=_shouldPreroll - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(long long)behavior;
-(double)playbackRate;
-(void)setDefaultValues;
-(ISVitalitySpecificSettings *)oneUpSettings;
-(void)setOneUpSettings:(ISVitalitySpecificSettings *)arg1 ;
-(id)_defaultSettings;
-(double)minimumVisibilityFactor;
-(double)preDuration;
-(double)postDuration;
-(double)maxVitalityDelay;
-(double)minimumPhotoTransitionDuration;
-(BOOL)shouldPreroll;
-(double)endTimeOffset;
-(double)maximumDelayBeforePlayback;
-(void)setShouldPreroll:(BOOL)arg1 ;
-(BOOL)useLegacyBehavior;
-(void)setUseLegacyBehavior:(BOOL)arg1 ;
-(ISVitalitySpecificSettings *)shareViewSettings;
-(void)setShareViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(ISVitalitySpecificSettings *)activityViewSettings;
-(void)setActivityViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(ISVitalitySpecificSettings *)orbPreviewSettings;
-(void)setOrbPreviewSettings:(ISVitalitySpecificSettings *)arg1 ;
@end

