/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNPixelBufferObservation.h>

@class NSArray;

@interface VNSaliencyImageObservation : VNPixelBufferObservation {

	CGSize _mOriginalImageSize;
	CGRect _mSalientRegion;
	CGRect _mHighlySalientRegion;
	os_unfair_lock_s _mComputeBoundingBoxesLock;
	NSArray* _mSalientObjects;

}

@property (nonatomic,readonly) CGRect boundingBox; 
@property (nonatomic,readonly) CGRect narrowedBoundingBox; 
@property (nonatomic,readonly) NSArray * salientObjects; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)boundingBox;
-(CVBufferRef)createSaliencyImageAndReturnError:(id*)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(CVBufferRef)arg2 originalImageSize:(CGSize)arg3 salientObjectBoundingBoxes:(id)arg4 ;
-(id)salientObjectsAndReturnError:(id*)arg1 ;
-(void)_computeBoundingBoxes;
-(NSArray *)salientObjects;
-(CGRect)narrowedBoundingBox;
@end
