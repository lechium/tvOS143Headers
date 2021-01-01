/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextRecognition/TextRecognition-Structs.h>
#import <TextRecognition/CRTextSequenceRecognizerModel.h>

@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;
@class CRRecognizerConfiguration, NSString, NSObject, NSArray;

@interface CRTextSequenceRecognizerModelEspresso : CRTextSequenceRecognizerModel {

	int _engine;
	int _precision;
	CRRecognizerConfiguration* _configuration;
	CRRecognizerConfiguration* _recognizerConfiguration;
	void* _context;
	void* _plan;
	NSString* _currentConfigurationHash;
	NSObject*<OS_dispatch_queue> _predictionQueue;
	NSObject*<OS_dispatch_group> _predictionGroup;
	NSObject*<OS_dispatch_semaphore> _submissionSemaphore;
	SCD_Struct_CR6* _network;
	vector<const char *, std::__1::allocator<const char *> >* _names;

}

@property (retain) CRRecognizerConfiguration * recognizerConfiguration;               //@synthesize recognizerConfiguration=_recognizerConfiguration - In the implementation block
@property (assign) void* context;                                                     //@synthesize context=_context - In the implementation block
@property (assign) void* plan;                                                        //@synthesize plan=_plan - In the implementation block
@property (assign) SCD_Struct_CR6* network;                                           //@synthesize network=_network - In the implementation block
@property (assign) int engine;                                                        //@synthesize engine=_engine - In the implementation block
@property (assign) int precision;                                                     //@synthesize precision=_precision - In the implementation block
@property (assign) vector<const char * names;                                         //@synthesize names=_names - In the implementation block
@property (retain) NSString * currentConfigurationHash;                               //@synthesize currentConfigurationHash=_currentConfigurationHash - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> predictionQueue;                      //@synthesize predictionQueue=_predictionQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> predictionGroup;                      //@synthesize predictionGroup=_predictionGroup - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> submissionSemaphore;              //@synthesize submissionSemaphore=_submissionSemaphore - In the implementation block
@property (readonly) NSArray * outputNames; 
-(void)dealloc;
-(id)configuration;
-(vector<const char *)names;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(SCD_Struct_CR6*)network;
-(void*)plan;
-(int)precision;
-(int)engine;
-(void)setNames:(vector<const char *)arg1 ;
-(void)setNetwork:(SCD_Struct_CR6*)arg1 ;
-(void)setEngine:(int)arg1 ;
-(void)setPrecision:(int)arg1 ;
-(id)modelFilePath;
-(void)setPlan:(void*)arg1 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(NSArray *)outputNames;
-(id)predictFromInputs:(id)arg1 error:(id*)arg2 ;
-(id)inputBatchFromTextFeatures:(id)arg1 image:(id)arg2 featureWidth:(double)arg3 configuration:(id)arg4 ;
-(void)_setupContextAndPlanForConfiguration:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)predictionQueue;
-(BOOL)_shouldReconfigurePlanForInput:(id)arg1 ;
-(void)_configurePlanForInput:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_group>)predictionGroup;
-(id)outputFromOutputBuffers:(vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >*)arg1 featureInfo:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)submissionSemaphore;
-(vImage_Buffer*)_createBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 channels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 sequenceLength:(unsigned long long)arg5 ;
-(void)_resetEspressoState;
-(CRRecognizerConfiguration *)recognizerConfiguration;
-(id)_configurationHashForInput:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(NSString *)currentConfigurationHash;
-(id)_configurationHashForInput:(id)arg1 ;
-(id)_modelConfigurationNameForInput:(id)arg1 ;
-(void)setCurrentConfigurationHash:(NSString *)arg1 ;
-(void)setRecognizerConfiguration:(CRRecognizerConfiguration *)arg1 ;
-(void)setPredictionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPredictionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setSubmissionSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

