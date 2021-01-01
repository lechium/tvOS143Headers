/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@class NSOutputStream, NSError;

@interface _NSJSONWriter : NSObject {

	NSOutputStream* outputStream;
	int kind;
	char* dataBuffer;
	unsigned long long dataBufferLen;
	unsigned long long dataLen;
	BOOL freeDataBuffer;
	char* tempBuffer;
	unsigned long long tempBufferLen;
	long long totalDataWritten;
	NSError* _failure;

}

@property (retain) NSError * failure;              //@synthesize failure=_failure - In the implementation block
-(id)init;
-(void)dealloc;
-(id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 ;
-(long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)appendString:(id)arg1 range:(NSRange)arg2 ;
-(NSError *)failure;
-(void)setFailure:(NSError *)arg1 ;
@end

