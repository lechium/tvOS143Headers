/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SVXTaskTracking;
@class SVXSpeechSynthesisRequest, NSString, NSDictionary, VSPresynthesizedAudioRequest, VSSpeechRequest, VSInstrumentMetrics, NSArray, SVXAudioSessionAssertion;

@interface SVXSpeechSynthesisContext : NSObject {

	/*^block*/id _preparation;
	/*^block*/id _finalization;
	BOOL _handledPresynthesizedAudioRequest;
	BOOL _handledSpeechRequest;
	unsigned _audioSessionID;
	long long _operationType;
	SVXSpeechSynthesisRequest* _request;
	NSString* _languageCode;
	long long _gender;
	NSDictionary* _analyticsContext;
	VSPresynthesizedAudioRequest* _presynthesizedAudioRequest;
	VSSpeechRequest* _speechRequest;
	VSInstrumentMetrics* _instrumentMetrics;
	NSArray* _speechWordTimingInfoArray;
	id<SVXTaskTracking> _taskTracker;
	SVXAudioSessionAssertion* _audioSessionAssertion;

}

@property (nonatomic,readonly) long long operationType;                                              //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy,readonly) SVXSpeechSynthesisRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                                         //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) long long gender;                                                     //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) unsigned audioSessionID;                                              //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsContext;                                 //@synthesize analyticsContext=_analyticsContext - In the implementation block
@property (assign,nonatomic) BOOL handledPresynthesizedAudioRequest;                                 //@synthesize handledPresynthesizedAudioRequest=_handledPresynthesizedAudioRequest - In the implementation block
@property (assign,nonatomic) BOOL handledSpeechRequest;                                              //@synthesize handledSpeechRequest=_handledSpeechRequest - In the implementation block
@property (nonatomic,retain) VSPresynthesizedAudioRequest * presynthesizedAudioRequest;              //@synthesize presynthesizedAudioRequest=_presynthesizedAudioRequest - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;                                        //@synthesize speechRequest=_speechRequest - In the implementation block
@property (nonatomic,retain) VSInstrumentMetrics * instrumentMetrics;                                //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,copy) NSArray * speechWordTimingInfoArray;                                      //@synthesize speechWordTimingInfoArray=_speechWordTimingInfoArray - In the implementation block
@property (nonatomic,readonly) id<SVXTaskTracking> taskTracker;                                      //@synthesize taskTracker=_taskTracker - In the implementation block
@property (nonatomic,retain) SVXAudioSessionAssertion * audioSessionAssertion;                       //@synthesize audioSessionAssertion=_audioSessionAssertion - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)languageCode;
-(SVXSpeechSynthesisRequest *)request;
-(long long)gender;
-(long long)operationType;
-(void)prepare;
-(VSSpeechRequest *)speechRequest;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(unsigned)audioSessionID;
-(VSPresynthesizedAudioRequest *)presynthesizedAudioRequest;
-(void)setPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1 ;
-(NSDictionary *)analyticsContext;
-(id<SVXTaskTracking>)taskTracker;
-(id)initWithOperationType:(long long)arg1 request:(id)arg2 languageCode:(id)arg3 gender:(long long)arg4 audioSessionID:(unsigned)arg5 preparation:(/*^block*/id)arg6 finalization:(/*^block*/id)arg7 taskTracker:(id)arg8 analyticsContext:(id)arg9 ;
-(SVXAudioSessionAssertion *)audioSessionAssertion;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(void)setSpeechWordTimingInfoArray:(NSArray *)arg1 ;
-(void)setAudioSessionAssertion:(SVXAudioSessionAssertion *)arg1 ;
-(BOOL)handledPresynthesizedAudioRequest;
-(void)setHandledPresynthesizedAudioRequest:(BOOL)arg1 ;
-(BOOL)handledSpeechRequest;
-(void)setHandledSpeechRequest:(BOOL)arg1 ;
-(void)finalizeWithResultType:(long long)arg1 utteranceInfo:(id)arg2 error:(id)arg3 ;
-(NSArray *)speechWordTimingInfoArray;
-(VSInstrumentMetrics *)instrumentMetrics;
@end

