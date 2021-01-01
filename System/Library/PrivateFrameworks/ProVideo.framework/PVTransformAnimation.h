/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PVTransformAnimation : NSObject <NSSecureCoding, NSCopying> {

	PVTransformAnimationInfo* _liveTransform;
	NSArray* _animationData;
	SCD_Struct_PV28 _presentationTimeRange;

}

@property (nonatomic,readonly) NSArray * animationData;                          //@synthesize animationData=_animationData - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV28 presentationTimeRange;              //@synthesize presentationTimeRange=_presentationTimeRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)getTransformInfoFromAnimation:(id)arg1 atTime:(SCD_Struct_PV21)arg2 outInfo:(out PVTransformAnimationInfo*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PVTransformAnimationInfo)transformInfoAtTime:(SCD_Struct_PV21)arg1 ;
-(void)_commonInit:(id)arg1 liveTransform:(PVTransformAnimationInfo*)arg2 presentationTimeRange:(SCD_Struct_PV28)arg3 ;
-(id)initWithAnimation:(id)arg1 simplify:(BOOL)arg2 tolerance:(double)arg3 smoothness:(unsigned)arg4 ;
-(id)initWithLiveTransform:(PVTransformAnimationInfo*)arg1 ;
-(id)initWithAnimation:(id)arg1 ;
-(id)animationInfoFromData:(id)arg1 ;
-(id)dataFromAnimationInfo:(id)arg1 ;
-(id)initWithAnimation:(id)arg1 liveTransform:(PVTransformAnimationInfo*)arg2 presentationTimeRange:(SCD_Struct_PV28)arg3 ;
-(SCD_Struct_PV28)presentationTimeRange;
-(NSArray *)animationData;
-(PVTransformAnimationInfo)transformInfoAtLocalTime:(SCD_Struct_PV21)arg1 ;
-(void)setPresentationTimeRange:(SCD_Struct_PV28)arg1 ;
@end

