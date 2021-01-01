/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLArgumentInternal.h>

@interface MTLBufferArgument : MTLArgumentInternal {

	unsigned _dataType : 15;
	unsigned _vertexDescriptorBuffer : 1;
	unsigned short _alignment;
	unsigned _dataSize;

}
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)structType;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 isConstantBuffer:(BOOL)arg8 dataSize:(unsigned long long)arg9 alignment:(unsigned long long)arg10 ;
-(void)setDataSize:(unsigned long long)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(id)bufferStructType;
-(unsigned long long)bufferDataType;
-(void)setVertexDescriptorBuffer:(BOOL)arg1 ;
-(BOOL)isVertexDescriptorBuffer;
-(void)setStructType:(id)arg1 doRetain:(BOOL)arg2 ;
-(void)setStructType:(id)arg1 ;
-(unsigned long long)bufferAlignment;
-(unsigned long long)bufferDataSize;
-(id)bufferPointerType;
-(id)bufferIndirectArgumentType;
@end

