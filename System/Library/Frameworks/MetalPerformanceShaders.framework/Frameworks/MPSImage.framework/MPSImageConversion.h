/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageTransformSequence;

@interface MPSImageConversion : MPSUnaryImageKernel {

	MPSImageTransformSequence* transform;
	[2 srcDecode];
	[2 destDecode];
	ConversionInfo_s convertInfo;
	ConversionInfoPtrs_s* convertInfoPtrs;
	/*function pointer*/void* matFun;
	/*function pointer*/void* trcFun;
	/*function pointer*/void* lutFun;
	/*function pointer*/void* optionsFun;
	/*function pointer*/void* inputRangeFun;
	/*function pointer*/void* outputRangeFun;
	/*function pointer*/void* propertiesFun;
	unsigned long long sourceAlpha;
	unsigned long long destinationAlpha;

}

@property (nonatomic,readonly) unsigned long long sourceAlpha; 
@property (nonatomic,readonly) unsigned long long destinationAlpha; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 transform:(id)arg2 ;
-(id)initWithDevice:(id)arg1 srcAlpha:(unsigned long long)arg2 destAlpha:(unsigned long long)arg3 backgroundColor:(double*)arg4 conversionInfo:(const CGColorConversionInfoRef)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceDecode:(const float*)arg3 destinationTexture:(id)arg4 destinationDecode:(const float*)arg5 ;
-(unsigned long long)sourceAlpha;
-(unsigned long long)destinationAlpha;
@end

