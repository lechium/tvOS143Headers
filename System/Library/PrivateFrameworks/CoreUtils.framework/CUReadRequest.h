/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSMutableData, NSData;

@interface CUReadRequest : NSObject {

	char* _bufferPtr;
	NSError* _error;
	unsigned long long _length;
	unsigned char _messageUUID[16];
	BOOL _hasMessageUUID;
	unsigned _statusFlags;
	void* _bufferBytes;
	NSMutableData* _bufferData;
	/*^block*/id _completion;
	NSData* _data;
	unsigned long long _minLength;
	unsigned long long _maxLength;

}

@property (nonatomic,retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) void* bufferBytes;                         //@synthesize bufferBytes=_bufferBytes - In the implementation block
@property (nonatomic,retain) NSMutableData * bufferData;                //@synthesize bufferData=_bufferData - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long length;               //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long minLength;              //@synthesize minLength=_minLength - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,readonly) char* messageUUID; 
@property (assign,nonatomic) BOOL hasMessageUUID;                       //@synthesize hasMessageUUID=_hasMessageUUID - In the implementation block
@property (assign,nonatomic) unsigned statusFlags;                      //@synthesize statusFlags=_statusFlags - In the implementation block
-(unsigned long long)length;
-(NSData *)data;
-(NSError *)error;
-(id)completion;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(unsigned long long)minLength;
-(void)setMinLength:(unsigned long long)arg1 ;
-(NSMutableData *)bufferData;
-(void)setBufferData:(NSMutableData *)arg1 ;
-(unsigned)statusFlags;
-(char*)messageUUID;
-(void*)bufferBytes;
-(void)setStatusFlags:(unsigned)arg1 ;
-(void)setBufferBytes:(void*)arg1 ;
-(BOOL)hasMessageUUID;
-(void)setHasMessageUUID:(BOOL)arg1 ;
@end

