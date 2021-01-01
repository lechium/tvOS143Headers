/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixCopyToImage : MPSKernel {

	SCD_Struct_MP9 _sourceMatrixOrigin;
	unsigned long long _sourceMatrixBatchIndex;
	unsigned long long _dataLayout;

}

@property (assign,nonatomic) SCD_Struct_MP9 sourceMatrixOrigin;                      //@synthesize sourceMatrixOrigin=_sourceMatrixOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long sourceMatrixBatchIndex;              //@synthesize sourceMatrixBatchIndex=_sourceMatrixBatchIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLayout;                        //@synthesize dataLayout=_dataLayout - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 dataLayout:(unsigned long long)arg2 ;
-(unsigned long long)dataLayout;
-(void)encodeBatchToCommandBuffer:(id)arg1 encoder:(id)arg2 sourceMatrix:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImages:(id)arg3 ;
-(SCD_Struct_MP9)sourceMatrixOrigin;
-(void)setSourceMatrixOrigin:(SCD_Struct_MP9)arg1 ;
-(unsigned long long)sourceMatrixBatchIndex;
-(void)setSourceMatrixBatchIndex:(unsigned long long)arg1 ;
@end

