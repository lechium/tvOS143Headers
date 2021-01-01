/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VTKeywordAnalyzer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, _EARSyncSpeechRecognizer, NSDictionary, NSString;

@interface VTKeywordAnalyzerQuasar : NSObject <VTKeywordAnalyzer> {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _lastReportedRecogResults;
	NSArray* _triggerTokenList;
	_EARSyncSpeechRecognizer* _syncRecognizer;
	BOOL _useKeywordSpotting;
	NSDictionary* _ctcKwdToPhraseIdMap;

}

@property (nonatomic,retain) NSDictionary * ctcKwdToPhraseIdMap;              //@synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAsset:(id)arg1 ;
-(void)endAudio;
-(NSDictionary *)ctcKwdToPhraseIdMap;
-(void)setCtcKwdToPhraseIdMap:(NSDictionary *)arg1 ;
-(void)resetWithLanguage:(id)arg1 withSamplingRate:(long long)arg2 withAudioSource:(id)arg3 ;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
-(void)processFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)processAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getDetailedResults;
-(id)getAnalyzerType;
@end
