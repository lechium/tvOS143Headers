/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSMutableData.h>

@interface PBMutableData : NSMutableData {

	char* p;
	char* buffer;
	char* end;

}
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
@end
