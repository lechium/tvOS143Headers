/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface VCMomentsUtil : NSObject
+(OpaqueVTPixelTransferSessionRef)allocTransferSession;
+(CVBufferRef)createResizeFrame:(CVBufferRef)arg1 transferSession:(OpaqueVTPixelTransferSessionRef)arg2 bufferPool:(CVPixelBufferPoolRef)arg3 ;
+(int)setupBufferPool:(_CVPixelBufferPool*)arg1 width:(double)arg2 height:(double)arg3 ;
+(BOOL)pixelBufferPool:(CVPixelBufferPoolRef)arg1 matchesWidth:(int)arg2 height:(int)arg3 ;
@end

