/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWRadialLensCorrection : RAWFilter {

	CIImage* inputImage;
	CIVector* inputScales;
	id inputColorSpace;
	NSNumber* inputDraftMode;
	NSNumber* inputLDCExecuteFlags;
	NSNumber* inputVersion;
	CIImage* mapImg;

}
+(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(BOOL)makeMapImages;
@end

