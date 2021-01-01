/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSMutableSet;

@interface PXGColorProgramLibrary : NSObject {

	NSMutableArray* _programs;
	NSMutableSet* _failedColorspaces;
	os_unfair_lock_s _lock;
	id<MTLDevice> _device;
	CGColorSpaceRef _destinationColorSpace;

}

@property (nonatomic,readonly) id<MTLDevice> device;                               //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef destinationColorSpace;              //@synthesize destinationColorSpace=_destinationColorSpace - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(id<MTLDevice>)device;
-(CGColorSpaceRef)destinationColorSpace;
-(id)initWithDevice:(id)arg1 destinationColorSpace:(CGColorSpaceRef)arg2 ;
-(id)colorProgramForSourceColorSpace:(CGColorSpaceRef)arg1 flags:(unsigned long long)arg2 ;
@end

