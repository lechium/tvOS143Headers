/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/PHMediaFormatConversionRequest.h>

@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest
-(BOOL)isCompositeRequest;
-(void)setupProgress;
-(void)preflightWithConversionManager:(id)arg1 ;
-(BOOL)requiresLocationMetadataChange;
-(BOOL)requiresCreationDateMetadataChange;
-(BOOL)requiresCaptionMetadataChange;
-(BOOL)requiresAccessibilityDescriptionMetadataChange;
-(BOOL)requiresFormatConversion;
-(void)didFinishProcessing;
-(void)didPreflightSubrequest:(id)arg1 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(void)propagateRequestOptionsToSubrequests;
-(BOOL)areAllSubrequestsPreflighted;
-(id)compositeRequestCommonInitWithError:(id*)arg1 ;
@end

