/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class NSURL, NSData;

@interface VNImageSourceManager : NSObject {

	os_unfair_lock_s _getOrientationLock;
	os_unfair_lock_s _loadSubSample1Lock;
	os_unfair_lock_s _loadSubSample2Lock;
	os_unfair_lock_s _loadSubSample4Lock;
	os_unfair_lock_s _loadSubSample8Lock;
	CGImageSourceRef _imageSourceSubsample1;
	CGImageSourceRef _imageSourceSubsample2;
	CGImageSourceRef _imageSourceSubsample4;
	CGImageSourceRef _imageSourceSubsample8;
	NSURL* _imageURL;
	NSData* _imageData;
	unsigned _orientation;

}
-(void)dealloc;
-(id)imageData;
-(unsigned)exifOrientation;
-(id)initWithImageData:(id)arg1 ;
-(id)initWithImageURL:(id)arg1 ;
-(id)imageURL;
-(CGImageSourceRef)_obtainCreatedCGImageSourceRefAtAddress:(CGImageSource*)arg1 forSubSampleFactor:(unsigned)arg2 protectedWithUnfairLock:(os_unfair_lock_s*)arg3 operatingInLowPriority:(BOOL)arg4 ;
-(CGImageSourceRef)obtainImageSourceRef;
-(CGImageSourceRef)obtainImageSourceRefWithSubSampleFactor:(unsigned)arg1 andLowPriorityHint:(BOOL)arg2 ;
@end
