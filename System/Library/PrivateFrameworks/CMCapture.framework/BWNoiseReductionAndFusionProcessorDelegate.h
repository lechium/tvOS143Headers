/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWNoiseReductionAndFusionProcessorDelegate <BWStillImageProcessorControllerDelegate>
@optional
-(void)processorController:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW7)arg2 transform:(id)arg3 processorInput:(id)arg4;
-(void)processorController:(id)arg1 didSelectLowLightReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3;

@required
-(void)processorController:(id)arg1 didSelectFusionMode:(int)arg2 processorInput:(id)arg3;
-(id)processorController:(id)arg1 newSemanticRenderingInputForProcessorInput:(id)arg2;

@end

