/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFUUDecoder : MFBaseFilterDataConsumer {

	unsigned long long _begin;
	unsigned long long _end;
	unsigned long long _length;
	unsigned long long _readBytes;
	unsigned char _encoded[4];
	BOOL _beginComplete;
	BOOL _dataComplete;
	BOOL _validLength;
	BOOL _lineComplete;
	BOOL _passthrough;

}
-(long long)appendData:(id)arg1 ;
-(void)done;
@end

