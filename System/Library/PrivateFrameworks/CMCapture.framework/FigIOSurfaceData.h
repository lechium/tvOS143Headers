/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CoreFoundation/NSData.h>

@interface FigIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	unsigned long long _length;
	const void* _bytes;

}
+(void)initialize;
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 ;
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
@end
