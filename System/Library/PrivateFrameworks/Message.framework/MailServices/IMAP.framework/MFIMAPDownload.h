/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, MFCountingDataConsumer, MFBaseFilterDataConsumer;

@interface MFIMAPDownload : NSObject {

	unsigned _uid;
	NSMutableArray* _pendingFetchResults;
	MFCountingDataConsumer* _countingConsumer;
	MFBaseFilterDataConsumer* _mainConsumer;

}

@property (nonatomic,readonly) MFBaseFilterDataConsumer * mainConsumer;              //@synthesize mainConsumer=_mainConsumer - In the implementation block
-(void)dealloc;
-(id)data;
-(id)error;
-(void)setError:(id)arg1 ;
-(BOOL)isComplete;
-(unsigned)uid;
-(unsigned long long)expectedLength;
-(id)initWithUid:(unsigned)arg1 ;
-(unsigned long long)bytesFetched;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(unsigned long long)lengthOfDataBeforeLineConversion;
-(MFBaseFilterDataConsumer *)mainConsumer;
@end
