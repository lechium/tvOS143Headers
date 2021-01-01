/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MPSCore/MPSCore-Structs.h>
@class NSString;

@interface MPSImage : NSObject {

	MPSDevice* _device;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _featureChannels;
	unsigned long long _featureChannelsLayout;
	unsigned long long _featureChannelFormat;
	unsigned long long _numberOfImages;
	unsigned long long _textureType;
	NSString* _label;
	MPSPixelInfo _pixelInfo;
	MPSImage* _parent;
	MPSAutoTexture* _texture;
	BOOL _updatedAlready;

}

@property (nonatomic,readonly) unsigned long long featureChannelsLayout;              //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long width;                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long featureChannels;                    //@synthesize featureChannels=_featureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImages;                     //@synthesize numberOfImages=_numberOfImages - In the implementation block
@property (nonatomic,readonly) unsigned long long textureType; 
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (nonatomic,readonly) unsigned long long precision; 
@property (nonatomic,readonly) unsigned long long usage; 
@property (nonatomic,readonly) unsigned long long featureChannelFormat;               //@synthesize featureChannelFormat=_featureChannelFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelSize; 
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (copy) NSString * label;                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain,readonly) MPSImage * parent;                              //@synthesize parent=_parent - In the implementation block
+(id)defaultAllocator;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(MPSImage *)parent;
-(NSString *)label;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)pixelFormat;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(unsigned long long)usage;
-(unsigned long long)resourceSize;
-(id<MTLTexture>)texture;
-(unsigned long long)pixelSize;
-(unsigned long long)featureChannels;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2 ;
-(unsigned long long)featureChannelsLayout;
-(unsigned long long)numberOfImages;
-(id)batchRepresentation;
-(id)debugQuickLookObject;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 ;
-(id)initWithDescriptor:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 featureChannelFormat:(unsigned long long)arg4 onDevice:(id)arg5 ;
-(id)initWithParentImage:(id)arg1 sliceRange:(NSRange)arg2 featureChannels:(unsigned long long)arg3 ;
-(id)batchRepresentationWithSubRange:(NSRange)arg1 ;
-(unsigned long long)getPixelChannelSize;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP1)arg5 featureChannelInfo:(SCD_Struct_MP5)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerColumn:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bytesPerImage:(unsigned long long)arg5 region:(SCD_Struct_MP1)arg6 featureChannelInfo:(SCD_Struct_MP5)arg7 imageIndex:(unsigned long long)arg8 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP1)arg5 featureChannelInfo:(SCD_Struct_MP5)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP1)arg4 featureChannelInfo:(SCD_Struct_MP5)arg5 imageIndex:(unsigned long long)arg6 ;
-(unsigned long long)precision;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 ;
-(id)subImageWithFeatureChannelRange:(NSRange)arg1 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP1)arg4 featureChannelInfo:(SCD_Struct_MP5)arg5 imageIndex:(unsigned long long)arg6 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(unsigned long long)featureChannelFormat;
@end
