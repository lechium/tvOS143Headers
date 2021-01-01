/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FxMatrix44 : NSObject <NSSecureCoding> {

	double _mat[4][4];

}
+(BOOL)supportsSecureCoding;
-(id)copy;
-(id)description;
-(id)init;
-(BOOL)invert;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)transpose;
-(double*)matrix;
-(void)setMatrix:(double)arg1 ;
-(id)initWithMatrix44Data:(double)arg1 ;
-(CGPoint)transform2DPoint:(CGPoint)arg1 ;
-(id)initWithFxMatrix:(id)arg1 ;
-(BOOL)_planarInverseZ;
-(id)initWithColorMatrix44Data:(double)arg1 ;
-(void)setToIdentity;
-(BOOL)invertColorMatrixWithTolerance:(double)arg1 ;
-(FxPoint3D)transform3DPoint:(FxPoint3D)arg1 ;
@end

