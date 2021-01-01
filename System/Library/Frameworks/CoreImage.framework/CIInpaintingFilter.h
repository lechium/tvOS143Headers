/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSArray, NSNumber, InpaintingExecutionContext;

@interface CIInpaintingFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputMaskImage;
	CIVector* inputMaskBoundingBox;
	NSArray* inputFaceBoundingBoxes;
	NSArray* inputInpaintingProcessingResolutions;
	NSNumber* inputInpaintingBlendingRadius;
	NSNumber* inputInpaintingMode;
	InpaintingExecutionContext* _executionContext;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
@property (nonatomic,retain) CIVector * inputMaskBoundingBox; 
@property (nonatomic,retain) NSArray * inputFaceBoundingBoxes; 
@property (nonatomic,retain) NSArray * inputInpaintingProcessingResolutions; 
@property (nonatomic,retain) NSNumber * inputInpaintingBlendingRadius; 
@property (nonatomic,retain) NSNumber * inputInpaintingMode; 
@property (getter=getLastProcessingResolution,readonly) int lastProcessingResolution; 
@property (getter=getLastExecutionTime,readonly) double lastExecutionTime; 
@property (readonly) InpaintingExecutionContext * executionContext;                                //@synthesize executionContext=_executionContext - In the implementation block
+(id)customAttributes;
+(id)getEspressoResources;
-(id)init;
-(void)dealloc;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(BOOL)shouldFaceSpecificModelBeUsed;
-(id)getSelectedFacesInpaintingModelDescriptor;
-(id)getSelectedGeneralInpaintingModelDescriptor;
-(id)performSinglePassInpaintingWithParameters:(id)arg1 ;
-(id)performTilingPipelineInpaintingWithParameters:(id)arg1 ;
-(id)performMultiresolutionInpaintingWithParameters:(id)arg1 ;
-(id)performFullPipelineInpaintingWithParameters:(id)arg1 ;
-(CGRect)inputMaskBoundingBoxAsValidCGRect;
-(int)getLastProcessingResolution;
-(double)getLastExecutionTime;
-(CIVector *)inputMaskBoundingBox;
-(void)setInputMaskBoundingBox:(CIVector *)arg1 ;
-(NSArray *)inputFaceBoundingBoxes;
-(void)setInputFaceBoundingBoxes:(NSArray *)arg1 ;
-(NSArray *)inputInpaintingProcessingResolutions;
-(void)setInputInpaintingProcessingResolutions:(NSArray *)arg1 ;
-(NSNumber *)inputInpaintingBlendingRadius;
-(void)setInputInpaintingBlendingRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputInpaintingMode;
-(void)setInputInpaintingMode:(NSNumber *)arg1 ;
-(InpaintingExecutionContext *)executionContext;
@end

