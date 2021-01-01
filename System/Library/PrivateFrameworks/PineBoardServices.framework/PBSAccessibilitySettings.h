/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PBSAccessibilitySettings : NSObject {

	id _domainObserver;
	BOOL _voiceOverEnabled;
	BOOL _zoomEnabled;
	BOOL _boldTextEnabled;
	BOOL _reduceTransparencyEnabled;
	BOOL _highContrastFocusIndicatorsEnabled;
	BOOL _reduceMotionEnabled;
	BOOL _switchControlEnabled;
	BOOL _displayFilterInvertColorsEnabled;
	BOOL _displayFilterColorAdjustmentsEnabled;
	BOOL _displayFilterLightSensitivityEnabled;
	BOOL _displayFilterReduceWhitePointEnabled;
	unsigned long long _accessibilityMenuOptions;

}

@property (assign,nonatomic) BOOL voiceOverEnabled;                                    //@synthesize voiceOverEnabled=_voiceOverEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long accessibilityMenuOptions;              //@synthesize accessibilityMenuOptions=_accessibilityMenuOptions - In the implementation block
@property (assign,nonatomic) BOOL zoomEnabled;                                         //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (assign,nonatomic) BOOL boldTextEnabled;                                     //@synthesize boldTextEnabled=_boldTextEnabled - In the implementation block
@property (assign,nonatomic) BOOL reduceTransparencyEnabled;                           //@synthesize reduceTransparencyEnabled=_reduceTransparencyEnabled - In the implementation block
@property (assign,nonatomic) BOOL highContrastFocusIndicatorsEnabled;                  //@synthesize highContrastFocusIndicatorsEnabled=_highContrastFocusIndicatorsEnabled - In the implementation block
@property (assign,nonatomic) BOOL reduceMotionEnabled;                                 //@synthesize reduceMotionEnabled=_reduceMotionEnabled - In the implementation block
@property (assign,nonatomic) BOOL switchControlEnabled;                                //@synthesize switchControlEnabled=_switchControlEnabled - In the implementation block
@property (assign,nonatomic) BOOL displayFilterInvertColorsEnabled;                    //@synthesize displayFilterInvertColorsEnabled=_displayFilterInvertColorsEnabled - In the implementation block
@property (assign,nonatomic) BOOL displayFilterColorAdjustmentsEnabled;                //@synthesize displayFilterColorAdjustmentsEnabled=_displayFilterColorAdjustmentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL displayFilterLightSensitivityEnabled;                //@synthesize displayFilterLightSensitivityEnabled=_displayFilterLightSensitivityEnabled - In the implementation block
@property (assign,nonatomic) BOOL displayFilterReduceWhitePointEnabled;                //@synthesize displayFilterReduceWhitePointEnabled=_displayFilterReduceWhitePointEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)voiceOverEnabled;
-(BOOL)switchControlEnabled;
-(void)setSwitchControlEnabled:(BOOL)arg1 ;
-(void)setVoiceOverEnabled:(BOOL)arg1 ;
-(BOOL)zoomEnabled;
-(BOOL)reduceMotionEnabled;
-(void)setReduceMotionEnabled:(BOOL)arg1 ;
-(BOOL)highContrastFocusIndicatorsEnabled;
-(void)setHighContrastFocusIndicatorsEnabled:(BOOL)arg1 ;
-(unsigned long long)accessibilityMenuOptions;
-(void)setAccessibilityMenuOptions:(unsigned long long)arg1 ;
-(void)setReduceTransparencyEnabled:(BOOL)arg1 ;
-(void)_updateAccessibilitySettings;
-(void)_voiceOverEnabled:(id)arg1 ;
-(void)_zoomEnabled:(id)arg1 ;
-(void)_boldTextEnabled:(id)arg1 ;
-(void)_reduceTransparencyEnabled:(id)arg1 ;
-(void)_reduceMotionEnabled:(id)arg1 ;
-(void)_switchControlEnabled:(id)arg1 ;
-(BOOL)boldTextEnabled;
-(void)setBoldTextEnabled:(BOOL)arg1 ;
-(BOOL)reduceTransparencyEnabled;
-(BOOL)displayFilterInvertColorsEnabled;
-(void)setDisplayFilterInvertColorsEnabled:(BOOL)arg1 ;
-(BOOL)displayFilterColorAdjustmentsEnabled;
-(void)setDisplayFilterColorAdjustmentsEnabled:(BOOL)arg1 ;
-(BOOL)displayFilterLightSensitivityEnabled;
-(void)setDisplayFilterLightSensitivityEnabled:(BOOL)arg1 ;
-(BOOL)displayFilterReduceWhitePointEnabled;
-(void)setDisplayFilterReduceWhitePointEnabled:(BOOL)arg1 ;
@end

