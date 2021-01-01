/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface AXElementVision__generated__Input : NSObject <MLFeatureProvider> {

	CVBufferRef _image;
	double _iouThreshold;
	double _confidenceThreshold;

}

@property (assign,nonatomic) CVBufferRef image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double iouThreshold;                     //@synthesize iouThreshold=_iouThreshold - In the implementation block
@property (assign,nonatomic) double confidenceThreshold;              //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(CVBufferRef)image;
-(void)setImage:(CVBufferRef)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(double)confidenceThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(double)iouThreshold;
-(void)setIouThreshold:(double)arg1 ;
-(id)initWithImage:(CVBufferRef)arg1 iouThreshold:(double)arg2 confidenceThreshold:(double)arg3 ;
@end

