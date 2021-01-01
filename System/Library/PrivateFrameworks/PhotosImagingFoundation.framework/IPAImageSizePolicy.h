/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface IPAImageSizePolicy : NSObject <NSCoding>
+(id)originalSizePolicy;
+(id)scalePolicyWithScale:(double)arg1 ;
+(id)bestFitPolicyInSize:(CGSize)arg1 ;
+(id)bestFitPolicyInSquare:(double)arg1 ;
+(id)bestFitPolicyShortestEdge:(double)arg1 ;
+(id)bestFitPolicyWithWidth:(double)arg1 ;
+(id)bestFitPolicyWithHeight:(double)arg1 ;
+(id)bestFitPolicyThumbnail;
+(id)bestFitPolicyWithTotalPixelCount:(long long)arg1 ;
+(id)bestFitPolicyWithEvenTotalPixelCount:(long long)arg1 ;
+(id)bestFitPolicyWithEvenWidthTotalPixelCount:(long long)arg1 ;
+(id)largestPolicyWithPolicies:(id)arg1 ;
+(id)bestFitPolicyWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(PFIntSize_st)integralTransformSize:(CGSize)arg1 ;
-(double)transformScaleForSize:(CGSize)arg1 ;
-(BOOL)isBestFitPolicy;
-(BOOL)isOriginalSizePolicy;
@end

