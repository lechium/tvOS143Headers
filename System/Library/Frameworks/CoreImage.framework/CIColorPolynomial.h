/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorPolynomial : CIFilter {

	CIImage* inputImage;
	CIVector* inputRedCoefficients;
	CIVector* inputGreenCoefficients;
	CIVector* inputBlueCoefficients;
	CIVector* inputAlphaCoefficients;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRedCoefficients; 
@property (nonatomic,retain) CIVector * inputGreenCoefficients; 
@property (nonatomic,retain) CIVector * inputBlueCoefficients; 
@property (nonatomic,retain) CIVector * inputAlphaCoefficients; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_isIdentityAlpha;
-(id)_kernelRGB;
-(CIVector *)inputRedCoefficients;
-(void)setInputRedCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputGreenCoefficients;
-(void)setInputGreenCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputBlueCoefficients;
-(void)setInputBlueCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputAlphaCoefficients;
-(void)setInputAlphaCoefficients:(CIVector *)arg1 ;
@end
