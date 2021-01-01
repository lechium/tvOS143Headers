/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject {

	MDLTexture* texture;
	MDLTextureFilter* hardwareFilter;
	MDLTransform* transform;
	unsigned long long mappingChannel;
	long long textureComponents;

}

@property (assign,nonatomic) unsigned long long mappingChannel; 
@property (assign,nonatomic) long long textureComponents; 
@property (nonatomic,retain) MDLTexture * texture; 
@property (nonatomic,retain) MDLTextureFilter * hardwareFilter; 
@property (nonatomic,retain) MDLTransform * transform; 
-(id)init;
-(MDLTransform *)transform;
-(void)setTexture:(MDLTexture *)arg1 ;
-(MDLTexture *)texture;
-(void)setTransform:(MDLTransform *)arg1 ;
-(MDLTextureFilter *)hardwareFilter;
-(void)setHardwareFilter:(MDLTextureFilter *)arg1 ;
-(unsigned long long)mappingChannel;
-(void)setMappingChannel:(unsigned long long)arg1 ;
-(long long)textureComponents;
-(void)setTextureComponents:(long long)arg1 ;
@end
