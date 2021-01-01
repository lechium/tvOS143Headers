/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector, AVCameraCalibrationData, NSDictionary;

@interface CIDepthEffectMakeBlurMap : CIFilter {

	CIImage* inputImage;
	CIImage* inputShiftmapImage;
	CIImage* inputMatteImage;
	CIImage* inputHairImage;
	CIImage* inputGlassesImage;
	CIImage* inputGainMap;
	NSNumber* inputAperture;
	CIVector* inputLeftEyePosition;
	CIVector* inputRightEyePosition;
	CIVector* inputChinPosition;
	CIVector* inputFaceMidPoint;
	CIVector* inputFocusRect;
	NSNumber* inputScale;
	AVCameraCalibrationData* inputCalibrationData;
	id inputAuxDataMetadata;
	NSDictionary* tuningParameters;
	float simulatedAperture;
	NSNumber* inputDraftMode;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputShiftmapImage; 
@property (retain) CIImage * inputMatteImage; 
@property (retain) CIImage * inputHairImage; 
@property (retain) CIImage * inputGlassesImage; 
@property (retain) CIImage * inputGainMap; 
@property (nonatomic,copy) NSNumber * inputAperture; 
@property (retain) CIVector * inputLeftEyePosition; 
@property (retain) CIVector * inputRightEyePosition; 
@property (retain) CIVector * inputChinPosition; 
@property (retain) CIVector * inputFaceMidPoint; 
@property (nonatomic,retain) CIVector * inputFocusRect; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,retain) AVCameraCalibrationData * inputCalibrationData; 
@property (nonatomic,retain) id inputAuxDataMetadata; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIVector *)inputFocusRect;
-(void)setInputFocusRect:(CIVector *)arg1 ;
-(CIImage *)inputMatteImage;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputAperture;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(id)calibrationData;
-(CGSize)originalShiftMapSize;
-(float)intrinsicMatrixFocalLength;
-(CIVector *)inputLeftEyePosition;
-(CIVector *)inputRightEyePosition;
-(CIVector *)inputFaceMidPoint;
-(CIVector *)inputChinPosition;
-(id)upsampledShiftMap:(id)arg1 ;
-(id)smoothShiftMapV2:(id)arg1 ;
-(id)lensModelParams:(id)arg1 ;
-(id)lensModelApply:(id)arg1 shiftMap:(id)arg2 ;
-(BOOL)needToRunFaceMask;
-(id)faceMaskParams:(id)arg1 useNormalizedCoords:(BOOL)arg2 ;
-(id)faceMaskApply:(id)arg1 blurMap:(id)arg2 ;
-(id)refineShiftMapV3WithMainImage:(id)arg1 shiftmap:(id)arg2 lensModel:(id)arg3 ;
-(id)faceMaskDelta:(id)arg1 extent:(CGRect)arg2 parameters:(id)arg3 distanceToAdd:(float*)arg4 ;
-(id)unifiedRenderingOutputImage:(CGImageMetadataRef)arg1 ;
-(id)blurMapV2:(id)arg1 ;
-(id)blurMapV3:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3 ;
-(id)blurMapV4:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3 hairImage:(id)arg4 ;
-(CIImage *)inputShiftmapImage;
-(void)setInputShiftmapImage:(CIImage *)arg1 ;
-(CIImage *)inputHairImage;
-(void)setInputHairImage:(CIImage *)arg1 ;
-(CIImage *)inputGlassesImage;
-(void)setInputGlassesImage:(CIImage *)arg1 ;
-(CIImage *)inputGainMap;
-(void)setInputGainMap:(CIImage *)arg1 ;
-(void)setInputLeftEyePosition:(CIVector *)arg1 ;
-(void)setInputRightEyePosition:(CIVector *)arg1 ;
-(void)setInputChinPosition:(CIVector *)arg1 ;
-(void)setInputFaceMidPoint:(CIVector *)arg1 ;
-(id)inputAuxDataMetadata;
-(void)setInputAuxDataMetadata:(id)arg1 ;
-(AVCameraCalibrationData *)inputCalibrationData;
-(void)setInputCalibrationData:(AVCameraCalibrationData *)arg1 ;
@end

