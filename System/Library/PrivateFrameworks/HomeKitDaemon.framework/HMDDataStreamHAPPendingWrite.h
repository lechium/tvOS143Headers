/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface HMDDataStreamHAPPendingWrite : NSObject {

	NSData* _data;
	/*^block*/id _completion;
	unsigned long long _bytesWritten;

}

@property (copy,readonly) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (readonly) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (assign) unsigned long long bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(NSData *)data;
-(id)completion;
-(BOOL)isComplete;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)popNextFrameUpToMaxLength:(unsigned long long)arg1 ;
@end

