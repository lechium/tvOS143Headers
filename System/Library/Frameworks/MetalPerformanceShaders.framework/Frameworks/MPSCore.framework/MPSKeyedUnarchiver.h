/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSKeyedUnarchiver.h>
#import <MPSCore/MPSDeviceProvider.h>

@protocol MTLDevice;
@interface MPSKeyedUnarchiver : NSKeyedUnarchiver <MPSDeviceProvider> {

	id<MTLDevice> _device;

}
+(id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
+(id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
+(id)unarchiveObjectWithData:(id)arg1 device:(id)arg2 ;
+(id)unarchiveTopLevelObjectWithData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
+(id)unarchiveObjectWithFile:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(id)initForReadingFromData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)mpsMTLDevice;
-(id)initForReadingWithData:(id)arg1 device:(id)arg2 ;
@end

