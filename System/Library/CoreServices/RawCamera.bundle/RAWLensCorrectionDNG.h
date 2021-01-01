/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWLensCorrectionDNG : RAWFilter {

	CIImage* inputImage;
	CIVector* inputKr;
	CIVector* inputKt;
	CIVector* inputCenter;
	id inputColorSpace;
	NSNumber* inputDraftMode;

}
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(CGPoint)mapPoint:(CGPoint)arg1 info:(id)arg2 ;
@end
