/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNRequestProgressProviding.h>

@class NSArray, NSString;

@interface VNRecognizeTextRequest : VNImageBasedRequest <VNRequestProgressProviding> {

	BOOL indeterminate;
	/*^block*/id progressHandler;

}

@property (nonatomic,copy) NSArray * recognitionLanguages; 
@property (nonatomic,copy) NSArray * customWords; 
@property (assign,nonatomic) long long recognitionLevel; 
@property (assign,nonatomic) BOOL usesLanguageCorrection; 
@property (assign,nonatomic) float minimumTextHeight; 
@property (nonatomic,copy) id progressHandler; 
@property (readonly) BOOL indeterminate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)arg1 revision:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(BOOL)indeterminate;
-(void)setRecognitionLanguages:(NSArray *)arg1 ;
-(NSArray *)recognitionLanguages;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasCancellationHook;
-(BOOL)_detectTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSArray *)customWords;
-(void)setCustomWords:(NSArray *)arg1 ;
-(long long)recognitionLevel;
-(void)setRecognitionLevel:(long long)arg1 ;
-(BOOL)usesLanguageCorrection;
-(void)setUsesLanguageCorrection:(BOOL)arg1 ;
-(float)minimumTextHeight;
-(void)setMinimumTextHeight:(float)arg1 ;
@end

