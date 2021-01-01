/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWNoiseReductionAndFusionProcessorController <NSObject>
@required
+(id)new;
-(id)init;
-(id)initWithConfiguration:(id)arg1;
-(BOOL)finishProcessingCurrentInputNow;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processErrorRecoveryFrame:(BOOL)arg3 processOriginalImage:(BOOL)arg4 clientBracketSequenceNumber:(int)arg5;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 detectedObjects:(id)arg4;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1;

@end

