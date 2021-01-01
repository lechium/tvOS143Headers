/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PCMatrix44Double : NSObject <NSSecureCoding, NSCopying> {

	double _m[4][4];
	PCMatrix44Tmpl<double>* _pcMatrix;

}

@property (assign,nonatomic) SCD_Struct_PV25 SIMDFloat4x4; 
@property (assign,nonatomic) SCD_Struct_PV25 SIMDDouble4x4; 
+(BOOL)supportsSecureCoding;
+(id)matrixWithSIMDDouble4x4:(SCD_Struct_PV25)arg1 ;
+(id)matrixWithSIMDFloat4x4:(SCD_Struct_PV25)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithArray:(id)arg1 ;
-(BOOL)invert;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)array;
-(BOOL)isIdentity;
-(void)transpose;
-(id)compactDescription;
-(id)extendedDescription;
-(SCD_Struct_PV25)SIMDDouble4x4;
-(void)setSIMDDouble4x4:(SCD_Struct_PV25)arg1 ;
-(id)initWithSIMDFloat4x4:(SCD_Struct_PV25)arg1 ;
-(id)initWithSIMDDouble4x4:(SCD_Struct_PV25)arg1 ;
-(void)setSIMDFloat4x4:(SCD_Struct_PV25)arg1 ;
-(SCD_Struct_PV25)SIMDFloat4x4;
-(void)makeIdentity;
-(PCMatrix44Tmpl<double>*)pcMatrix;
-(id)initWithPCMatrix:(PCMatrix44Tmpl<double>*)arg1 ;
-(id)initWithDoubles:(double)arg1 external:(BOOL)arg2 ;
-(id)initWithDoubles:(double)arg1 ;
-(void)getDoubles:(double)arg1 ;
-(SCD_Struct_PC124)transformInfo;
-(void)leftTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3 ;
-(void)leftScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3 ;
-(void)leftMult:(id)arg1 ;
-(BOOL)invert2D;
-(BOOL)isEqualToPCMatrix44Double:(id)arg1 ;
-(double)doubleValueAtRow:(unsigned)arg1 col:(unsigned)arg2 ;
-(void)setDoubleValue:(double)arg1 atRow:(unsigned)arg2 col:(unsigned)arg3 ;
-(void)setDoubles:(double)arg1 ;
-(void)rightTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3 ;
-(void)rightScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3 ;
-(void)leftShearX:(double)arg1 shearY:(double)arg2 ;
-(void)rightShearX:(double)arg1 shearY:(double)arg2 ;
-(void)leftRotate:(double)arg1 axis:(int)arg2 ;
-(void)rightRotate:(double)arg1 axis:(int)arg2 ;
-(void)scaleSizeX:(double)arg1 sizeY:(double)arg2 sizeZ:(double)arg3 scaledSizeX:(double*)arg4 scaledSizeY:(double*)arg5 scaledSizeZ:(double*)arg6 ;
-(void)rightMult:(id)arg1 ;
-(void)leftFlipAboutY:(double)arg1 ;
-(id)newTransformTo:(id)arg1 ;
-(id)newPlanarTransformTo:(id)arg1 ;
@end
