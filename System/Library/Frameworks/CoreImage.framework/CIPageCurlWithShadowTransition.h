/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPageCurlWithShadowTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputBacksideImage;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputRadius;
	NSNumber* inputShadowSize;
	NSNumber* inputShadowAmount;
	CIVector* inputShadowExtent;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIPageCurlWithShadowTransition;
-(id)_CIPageCurlNoShadowTransition;
@end

