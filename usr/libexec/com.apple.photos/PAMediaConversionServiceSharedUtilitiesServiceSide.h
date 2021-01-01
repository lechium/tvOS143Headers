//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceSharedUtilitiesServiceSide : NSObject
{
}

+ (id)temporaryFilesDirectoryURLForConversionTaskIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100012f2c
+ (id)temporaryDestinationURLCollectionForFinalDestinationURLCollection:(id)arg1 inParentDirectoryURL:(id)arg2;	// IMP=0x0000000100012d64
+ (struct CGSize)imageSizeForImageData:(id)arg1;	// IMP=0x0000000100012ae0
+ (struct CGImage *)newScaledImageForImageRef:(struct CGImage *)arg1 scaleFactor:(double)arg2 orientation:(long long)arg3 colorspace:(struct CGColorSpace *)arg4;	// IMP=0x00000001000129b8
+ (struct CGImage *)newScaledImageForImageRef:(struct CGImage *)arg1 inputSize:(struct PFIntSize_st)arg2 outputSize:(struct PFIntSize_st)arg3 sx:(double)arg4 sy:(double)arg5 orientation:(long long)arg6 colorspace:(struct CGColorSpace *)arg7;	// IMP=0x0000000100012860
+ (double)scaleFactorForInputSize:(struct CGSize)arg1 maximumPixelCount:(long long)arg2;	// IMP=0x0000000100012700
+ (_Bool)isOutputCorruptionLikelyUsingSSIMOfInputURL:(id)arg1 toOutputURL:(id)arg2;	// IMP=0x00000001000124bc
+ (_Bool)isOutputCorruptionLikelyComparingFileSizeOfInputURL:(id)arg1 toOutputURL:(id)arg2;	// IMP=0x0000000100011e88
+ (void)checkConversionResultForOutputCorruptionAndMarkJobAsFailed:(id)arg1;	// IMP=0x0000000100011b4c
+ (void)executeConversionJob:(id)arg1;	// IMP=0x0000000100010dec

@end
