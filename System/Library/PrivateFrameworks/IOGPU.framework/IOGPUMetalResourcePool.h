/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice;
#import <IOGPU/IOGPU-Structs.h>
@class IOGPUMetalDevice;

@interface IOGPUMetalResourcePool : NSObject {

	IOGPUMetalResourcePoolPrivate* _priv;
	Class _resourceClass;
	IOGPUMetalDevice*<MTLDevice> _device;
	IOGPUNewResourceArgs* _resourceArgs;
	unsigned _resourceArgsSize;
	unsigned long long age_to_purge;
	unsigned generation;

}

@property (readonly) IOGPUNewResourceArgs* resourceArgs;              //@synthesize resourceArgs=_resourceArgs - In the implementation block
@property (readonly) unsigned resourceArgsSize;                       //@synthesize resourceArgsSize=_resourceArgsSize - In the implementation block
-(void)dealloc;
-(void)purgeWithLock;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const IOGPUNewResourceArgs*)arg3 resourceArgsSize:(unsigned)arg4 options:(id)arg5 ;
-(void)setResourceArgs:(const IOGPUNewResourceArgs*)arg1 resourceArgsSize:(unsigned)arg2 ;
-(int)availableCount;
-(void)purge;
-(BOOL)updateResourcePurgeability;
-(IOGPUNewResourceArgs*)resourceArgs;
-(unsigned)resourceArgsSize;
@end

