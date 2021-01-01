/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneKit/SceneKit-Structs.h>
@class CIImage, NSArray, NSString;

@interface SCNRenderTarget : NSObject {

	SCD_Struct_SC45 _description;
	 _size;
	unsigned long long _arrayLength;
	CIImage* _ciImage;
	NSArray* _sliceTextures;
	id _texture;
	NSString* _name;
	long long _referenceCount;
	long long _timeStamp;

}

@property (nonatomic,retain) id texture;                                      //@synthesize texture=_texture - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long referenceCount;                        //@synthesize referenceCount=_referenceCount - In the implementation block
@property (assign,nonatomic) long long timeStamp;                             //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) BOOL viewportDependant; 
@property (nonatomic,readonly) unsigned char renderBufferFormat; 
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(void)setTexture:(id)arg1 ;
-(id)texture;
-(long long)timeStamp;
-(void)setTimeStamp:(long long)arg1 ;
-(id)ciImage;
-(id)initWithDescription:(SCD_Struct_SC45*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)viewportDependant;
-(unsigned char)renderBufferFormat;
-(BOOL)matchesDescription:(SCD_Struct_SC45*)arg1 size:(unsigned long long)arg2 ;
-(id)textureForSliceIndex:(unsigned long long)arg1 ;
-(long long)referenceCount;
-(void)setReferenceCount:(long long)arg1 ;
@end

