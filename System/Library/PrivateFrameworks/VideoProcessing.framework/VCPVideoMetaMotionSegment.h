/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPMetaSegment.h>

@interface VCPVideoMetaMotionSegment : VCPMetaSegment {

	float _absMotion;
	float _stabilityScore;

}

@property (assign) float absMotion;                   //@synthesize absMotion=_absMotion - In the implementation block
@property (assign) float stabilityScore;              //@synthesize stabilityScore=_stabilityScore - In the implementation block
-(void)mergeSegment:(id)arg1 ;
-(void)finalizeAtTime:(SCD_Struct_VC6)arg1 ;
-(void)resetSegment:(float)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(void)updateSegment:(float)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(float)stabilityScore;
-(id)initWithAbsMotion:(float)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(float)absMotion;
-(void)setAbsMotion:(float)arg1 ;
-(void)setStabilityScore:(float)arg1 ;
@end

