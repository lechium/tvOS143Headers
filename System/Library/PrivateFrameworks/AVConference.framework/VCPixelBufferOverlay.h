/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@interface VCPixelBufferOverlay : VCObject {

	CGContextRef _bitmapContext;
	CFDictionaryRef _stringAttributes;
	CTLineRef _ellipsisToken;

}
-(void)dealloc;
-(void)drawOverlayMessage:(id)arg1 onPixelBuffer:(CVBufferRef)arg2 attributes:(CFDictionaryRef)arg3 ;
-(void)setupStringAttributes:(double)arg1 height:(double)arg2 ;
-(id)reverseString:(id)arg1 ;
@end
