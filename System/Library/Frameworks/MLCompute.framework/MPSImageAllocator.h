/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPSImageAllocator <NSObject,NSSecureCoding>
@optional
-(id)imageBatchForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 count:(unsigned long long)arg4;

@required
-(id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3;

@end

