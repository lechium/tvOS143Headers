/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPDistanceDescriptorProtocol.h>

@class VNImageprint;

@interface VCPImageDescriptor : NSObject <VCPDistanceDescriptorProtocol> {

	VNImageprint* _imagePrint;

}
+(int)preferredPixelFormat;
+(BOOL)usePHAssetData;
+(id)descriptorWithImage:(CVBufferRef)arg1 ;
+(id)descriptorWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithImage:(CVBufferRef)arg1 ;
-(id)serialize;
-(int)computeDistance:(float*)arg1 toDescriptor:(id)arg2 ;
@end

