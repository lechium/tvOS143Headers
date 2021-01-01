/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SKTexture, NSMutableArray;

@interface SKUniform : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _name;
	unsigned long long _seed;
	SKTexture* _textureValue;
	NSMutableArray* _targetShaders;
	SCD_Union_SK57 _value;

}

@property (assign) unsigned long long _seed;                                   //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long uniformType; 
@property (nonatomic,retain) SKTexture * textureValue; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic)  vectorFloat2Value; 
@property (assign,nonatomic)  vectorFloat3Value; 
@property (assign,nonatomic)  vectorFloat4Value; 
@property (assign,nonatomic) SCD_Struct_SK56 matrixFloat2x2Value; 
@property (assign,nonatomic) SCD_Struct_SK22 matrixFloat3x3Value; 
@property (assign,nonatomic) SCD_Struct_SK5 matrixFloat4x4Value; 
@property (assign) _GLKVector2 floatVector2Value; 
@property (assign) _GLKVector3 floatVector3Value; 
@property (assign) _GLKVector4 floatVector4Value; 
@property (assign) _GLKMatrix2 floatMatrix2Value; 
@property (assign) _GLKMatrix3 floatMatrix3Value; 
@property (assign) _GLKMatrix4 floatMatrix4Value; 
+(BOOL)supportsSecureCoding;
+(id)uniformWithName:(id)arg1 ;
+(id)uniformWithName:(id)arg1 ;
+(id)uniformWithName:(id)arg1 float:(float)arg2 ;
+(id)uniformWithName:(id)arg1 ;
+(id)uniformWithName:(id)arg1 ;
+(id)uniformWithName:(id)arg1 matrixFloat2x2:(SCD_Struct_SK56)arg2 ;
+(id)uniformWithName:(id)arg1 matrixFloat3x3:(SCD_Struct_SK22)arg2 ;
+(id)uniformWithName:(id)arg1 matrixFloat4x4:(SCD_Struct_SK5)arg2 ;
+(id)uniformWithName:(id)arg1 floatVector2:(_GLKVector2)arg2 ;
+(id)uniformWithName:(id)arg1 floatVector3:(_GLKVector3)arg2 ;
+(id)uniformWithName:(id)arg1 floatVector4:(_GLKVector4)arg2 ;
+(id)uniformWithName:(id)arg1 floatMatrix2:(_GLKMatrix2)arg2 ;
+(id)uniformWithName:(id)arg1 floatMatrix3:(_GLKMatrix3)arg2 ;
+(id)uniformWithName:(id)arg1 floatMatrix4:(_GLKMatrix4)arg2 ;
+(id)uniformWithName:(id)arg1 texture:(id)arg2 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)floatValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)_seed;
-(void)setFloatValue:(float)arg1 ;
-(long long)uniformType;
-(void)setVectorFloat2Value:;
-(void)setVectorFloat3Value:;
-(void)setVectorFloat4Value:;
-()vectorFloat2Value;
-()vectorFloat3Value;
-()vectorFloat4Value;
-(SKTexture *)textureValue;
-(void)_addTargetShader:(id)arg1 ;
-(void)_removeTargetShader:(id)arg1 ;
-(SCD_Struct_SK56)matrixFloat2x2Value;
-(SCD_Struct_SK22)matrixFloat3x3Value;
-(SCD_Struct_SK5)matrixFloat4x4Value;
-(BOOL)isEqualToUniform:(id)arg1 ;
-(void)set_seed:(unsigned long long)arg1 ;
-(void)setTextureValue:(SKTexture *)arg1 ;
-(void)setMatrixFloat2x2Value:(SCD_Struct_SK56)arg1 ;
-(void)setMatrixFloat3x3Value:(SCD_Struct_SK22)arg1 ;
-(void)setMatrixFloat4x4Value:(SCD_Struct_SK5)arg1 ;
-(void)setFloatVector2Value:(_GLKVector2)arg1 ;
-(void)setFloatVector3Value:(_GLKVector3)arg1 ;
-(void)setFloatVector4Value:(_GLKVector4)arg1 ;
-(void)setFloatMatrix2Value:(_GLKMatrix2)arg1 ;
-(void)setFloatMatrix3Value:(_GLKMatrix3)arg1 ;
-(void)setFloatMatrix4Value:(_GLKMatrix4)arg1 ;
-(id)initWithName:(id)arg1 float:(float)arg2 ;
-(id)initWithName:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)initWithName:(id)arg1 matrixFloat2x2:(SCD_Struct_SK56)arg2 ;
-(id)initWithName:(id)arg1 matrixFloat3x3:(SCD_Struct_SK22)arg2 ;
-(id)initWithName:(id)arg1 matrixFloat4x4:(SCD_Struct_SK5)arg2 ;
-(id)initWithName:(id)arg1 floatVector2:(_GLKVector2)arg2 ;
-(id)initWithName:(id)arg1 floatVector3:(_GLKVector3)arg2 ;
-(id)initWithName:(id)arg1 floatVector4:(_GLKVector4)arg2 ;
-(id)initWithName:(id)arg1 floatMatrix2:(_GLKMatrix2)arg2 ;
-(id)initWithName:(id)arg1 floatMatrix3:(_GLKMatrix3)arg2 ;
-(id)initWithName:(id)arg1 floatMatrix4:(_GLKMatrix4)arg2 ;
-(id)initWithName:(id)arg1 texture:(id)arg2 ;
-(void)_propagateChange;
-(_GLKVector2)floatVector2Value;
-(_GLKVector3)floatVector3Value;
-(_GLKVector4)floatVector4Value;
-(_GLKMatrix2)floatMatrix2Value;
-(_GLKMatrix3)floatMatrix3Value;
-(_GLKMatrix4)floatMatrix4Value;
@end

