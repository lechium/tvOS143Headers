/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SKAttributeValue : NSObject <NSSecureCoding> {

	long long _type;
	float floatValues[4];
	unsigned short halfFloatValues[4];

}

@property (nonatomic,readonly) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic)  vectorFloat2Value; 
@property (assign,nonatomic)  vectorFloat3Value; 
@property (assign,nonatomic)  vectorFloat4Value; 
+(BOOL)supportsSecureCoding;
+(id)valueWithFloat:(float)arg1 ;
+(id)valueWithVectorFloat2:;
+(id)valueWithVectorFloat3:;
+(id)valueWithVectorFloat4:;
-(id)init;
-(float)floatValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(void)setFloatValue:(float)arg1 ;
-(BOOL)copyValueTo:(void*)arg1 type:(long long)arg2 count:(unsigned)arg3 ;
-(void)setVectorFloat2Value:;
-(void)setVectorFloat3Value:;
-(void)setVectorFloat4Value:;
-()vectorFloat2Value;
-()vectorFloat3Value;
-()vectorFloat4Value;
-(BOOL)isEqualToAttributeValue:(id)arg1 ;
@end

