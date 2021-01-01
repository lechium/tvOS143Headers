/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCameraParameterSelectionBase.h>

@class HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, HMDSelectedAudioParameters, HMDStreamingCapabilities, NSArray, HMDAudioCodecGroup, HMDBitRateSetting, HMDAudioSampleRate, NSNumber, HMDCameraAudioParameterCombination;

@interface HMDCameraAudioParameterSelection : HMDCameraParameterSelectionBase {

	HMDSupportedAudioStreamConfiguration* _supportedAudioStreamConfiguration;
	HMDSupportedRTPConfiguration* _rtpConfiguration;
	HMDSelectedAudioParameters* _selectedAudioParameters;
	HMDStreamingCapabilities* _streamingCapabilities;
	NSArray* _audioCodecsPreference;
	NSArray* _bitrateSettingsPreference;
	NSArray* _sampleRatesPreference;
	NSArray* _validAudioParameterCombinations;
	HMDAudioCodecGroup* _selectedCodecGroupType;
	HMDBitRateSetting* _selectedBitRateSetting;
	HMDAudioSampleRate* _selectedSampleRate;
	NSNumber* _selectedAudioChannelCount;
	HMDCameraAudioParameterCombination* _selectedAudioParameterCombination;
	NSNumber* _comfortNoiseSupported;

}

@property (nonatomic,readonly) HMDSupportedAudioStreamConfiguration * supportedAudioStreamConfiguration;              //@synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration - In the implementation block
@property (nonatomic,readonly) HMDSupportedRTPConfiguration * rtpConfiguration;                                       //@synthesize rtpConfiguration=_rtpConfiguration - In the implementation block
@property (nonatomic,retain) HMDSelectedAudioParameters * selectedAudioParameters;                                    //@synthesize selectedAudioParameters=_selectedAudioParameters - In the implementation block
@property (nonatomic,readonly) HMDStreamingCapabilities * streamingCapabilities;                                      //@synthesize streamingCapabilities=_streamingCapabilities - In the implementation block
@property (nonatomic,readonly) NSArray * audioCodecsPreference;                                                       //@synthesize audioCodecsPreference=_audioCodecsPreference - In the implementation block
@property (nonatomic,readonly) NSArray * bitrateSettingsPreference;                                                   //@synthesize bitrateSettingsPreference=_bitrateSettingsPreference - In the implementation block
@property (nonatomic,readonly) NSArray * sampleRatesPreference;                                                       //@synthesize sampleRatesPreference=_sampleRatesPreference - In the implementation block
@property (nonatomic,readonly) NSArray * validAudioParameterCombinations;                                             //@synthesize validAudioParameterCombinations=_validAudioParameterCombinations - In the implementation block
@property (nonatomic,retain) HMDAudioCodecGroup * selectedCodecGroupType;                                             //@synthesize selectedCodecGroupType=_selectedCodecGroupType - In the implementation block
@property (nonatomic,retain) HMDBitRateSetting * selectedBitRateSetting;                                              //@synthesize selectedBitRateSetting=_selectedBitRateSetting - In the implementation block
@property (nonatomic,retain) HMDAudioSampleRate * selectedSampleRate;                                                 //@synthesize selectedSampleRate=_selectedSampleRate - In the implementation block
@property (nonatomic,retain) NSNumber * selectedAudioChannelCount;                                                    //@synthesize selectedAudioChannelCount=_selectedAudioChannelCount - In the implementation block
@property (nonatomic,retain) HMDCameraAudioParameterCombination * selectedAudioParameterCombination;                  //@synthesize selectedAudioParameterCombination=_selectedAudioParameterCombination - In the implementation block
@property (nonatomic,retain) NSNumber * comfortNoiseSupported;                                                        //@synthesize comfortNoiseSupported=_comfortNoiseSupported - In the implementation block
+(id)logCategory;
-(id)logIdentifier;
-(void)_generateAllCombinations:(id)arg1 ;
-(NSArray *)audioCodecsPreference;
-(HMDStreamingCapabilities *)streamingCapabilities;
-(HMDSupportedAudioStreamConfiguration *)supportedAudioStreamConfiguration;
-(NSArray *)bitrateSettingsPreference;
-(NSArray *)sampleRatesPreference;
-(BOOL)_selectParametersFromCodec:(id)arg1 bitRateSettings:(id)arg2 sampleRates:(id)arg3 audioChannelCount:(id)arg4 ;
-(void)setComfortNoiseSupported:(NSNumber *)arg1 ;
-(NSArray *)validAudioParameterCombinations;
-(void)setSelectedCodecGroupType:(HMDAudioCodecGroup *)arg1 ;
-(void)setSelectedBitRateSetting:(HMDBitRateSetting *)arg1 ;
-(void)setSelectedSampleRate:(HMDAudioSampleRate *)arg1 ;
-(void)setSelectedAudioChannelCount:(NSNumber *)arg1 ;
-(void)setSelectedAudioParameterCombination:(HMDCameraAudioParameterCombination *)arg1 ;
-(HMDSupportedRTPConfiguration *)rtpConfiguration;
-(HMDCameraAudioParameterCombination *)selectedAudioParameterCombination;
-(NSNumber *)selectedAudioChannelCount;
-(HMDBitRateSetting *)selectedBitRateSetting;
-(HMDAudioSampleRate *)selectedSampleRate;
-(HMDAudioCodecGroup *)selectedCodecGroupType;
-(NSNumber *)comfortNoiseSupported;
-(id)initWithSessionID:(id)arg1 supportedAudioConfiguration:(id)arg2 supportedRTPConfiguration:(id)arg3 streamingCapabilities:(id)arg4 ;
-(BOOL)selectAudioParameters;
-(id)createSRTPParamters;
-(id)createSelectedAudioParameters;
-(HMDSelectedAudioParameters *)selectedAudioParameters;
-(void)setSelectedAudioParameters:(HMDSelectedAudioParameters *)arg1 ;
@end

