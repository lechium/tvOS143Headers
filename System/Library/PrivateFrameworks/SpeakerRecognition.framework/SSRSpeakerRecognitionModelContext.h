/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSDictionary;

@interface SSRSpeakerRecognitionModelContext : NSObject {

	NSURL* _configFilePath;
	NSDictionary* _voiceProfilesModelFilePaths;

}

@property (nonatomic,readonly) NSURL * configFilePath;                                  //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * voiceProfilesModelFilePaths;              //@synthesize voiceProfilesModelFilePaths=_voiceProfilesModelFilePaths - In the implementation block
-(NSURL *)configFilePath;
-(NSDictionary *)voiceProfilesModelFilePaths;
-(id)initWithConfigFilePath:(id)arg1 withModelFilePaths:(id)arg2 ;
@end

